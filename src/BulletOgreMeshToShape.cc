#include "BulletOgreMeshToShape.h"
#include <OgreSubMesh.h>
#include <OgreSubEntity.h>
#include <OgreEntity.h>

/*
 * =============================================================================================
 * BtOgre::VertexIndexToShape
 * =============================================================================================
 */

	void VertexIndexToShape::addStaticVertexData(const Ogre::VertexData *vertex_data)
	{
		if (!vertex_data)
			return;

		const Ogre::VertexData *data = vertex_data;

		const unsigned int prev_size = mVertexCount;
		mVertexCount += (unsigned int)data->vertexCount;

		Ogre::Vector3* tmp_vert = new Ogre::Vector3[mVertexCount];
		if (mVertexBuffer)
		{
			memcpy(tmp_vert, mVertexBuffer, sizeof(Ogre::Vector3) * prev_size);
			delete[] mVertexBuffer;
		}
		mVertexBuffer = tmp_vert;

		// Get the positional buffer element
		{
			const Ogre::VertexElement* posElem = data->vertexDeclaration->findElementBySemantic(Ogre::VES_POSITION);
			Ogre::HardwareVertexBufferSharedPtr vbuf = data->vertexBufferBinding->getBuffer(posElem->getSource());
			const unsigned int vSize = (unsigned int)vbuf->getVertexSize();

			unsigned char* vertex = static_cast<unsigned char*>(vbuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));
			float* pReal;
			Ogre::Vector3 * curVertices = &mVertexBuffer[prev_size];
			const unsigned int vertexCount = (unsigned int)data->vertexCount;
			for(unsigned int j = 0; j < vertexCount; ++j)
			{
				posElem->baseVertexPointerToElement(vertex, &pReal);
				vertex += vSize;

				curVertices->x = (*pReal++);
				curVertices->y = (*pReal++);
				curVertices->z = (*pReal++);

				*curVertices = mTransform * (*curVertices);

				curVertices++;
			}
			vbuf->unlock();
		}
	}
	//------------------------------------------------------------------------------------------------
	void VertexIndexToShape::addAnimatedVertexData(const Ogre::VertexData *vertex_data,
												   const Ogre::VertexData *blend_data,
												   const Ogre::Mesh::IndexMap *indexMap)
	{
		// Get the bone index element
		assert(vertex_data);

		const Ogre::VertexData *data = blend_data;
		const unsigned int prev_size = mVertexCount;
		mVertexCount += (unsigned int)data->vertexCount;
		Ogre::Vector3* tmp_vert = new Ogre::Vector3[mVertexCount];
		if (mVertexBuffer)
		{
			memcpy(tmp_vert, mVertexBuffer, sizeof(Ogre::Vector3) * prev_size);
			delete[] mVertexBuffer;
		}
		mVertexBuffer = tmp_vert;

		// Get the positional buffer element
		{
			const Ogre::VertexElement* posElem = data->vertexDeclaration->findElementBySemantic(Ogre::VES_POSITION);
			assert (posElem);
			Ogre::HardwareVertexBufferSharedPtr vbuf = data->vertexBufferBinding->getBuffer(posElem->getSource());
			const unsigned int vSize = (unsigned int)vbuf->getVertexSize();

			unsigned char* vertex = static_cast<unsigned char*>(vbuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));
			float* pReal;
			Ogre::Vector3 * curVertices = &mVertexBuffer[prev_size];
			const unsigned int vertexCount = (unsigned int)data->vertexCount;
			for(unsigned int j = 0; j < vertexCount; ++j)
			{
				posElem->baseVertexPointerToElement(vertex, &pReal);
				vertex += vSize;

				curVertices->x = (*pReal++);
				curVertices->y = (*pReal++);
				curVertices->z = (*pReal++);

				*curVertices = mTransform * (*curVertices);

				curVertices++;
			}
			vbuf->unlock();
		}
		{
			const Ogre::VertexElement* bneElem = vertex_data->vertexDeclaration->findElementBySemantic(Ogre::VES_BLEND_INDICES);
			assert (bneElem);

			Ogre::HardwareVertexBufferSharedPtr vbuf = vertex_data->vertexBufferBinding->getBuffer(bneElem->getSource());
			const unsigned int vSize = (unsigned int)vbuf->getVertexSize();
			unsigned char* vertex = static_cast<unsigned char*>(vbuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));

			unsigned char* pBone;

			if (!mBoneIndex)
				mBoneIndex = new BoneIndex();
			BoneIndex::iterator i;

			Ogre::Vector3 * curVertices = &mVertexBuffer[prev_size];

			const unsigned int vertexCount = (unsigned int)vertex_data->vertexCount;
			for(unsigned int j = 0; j < vertexCount; ++j)
			{
				bneElem->baseVertexPointerToElement(vertex, &pBone);
				vertex += vSize;

				const unsigned char currBone = (indexMap) ? (*indexMap)[*pBone] : *pBone;
				i = mBoneIndex->find (currBone);
				Vector3Array* l = 0;
				if (i == mBoneIndex->end())
				{
					l = new Vector3Array;
					mBoneIndex->insert(BoneKeyIndex(currBone, l));
				}
				else
				{
					l = i->second;
				}

				l->push_back(*curVertices);

				curVertices++;
			}
			vbuf->unlock();
		}
	}
	//------------------------------------------------------------------------------------------------
	void VertexIndexToShape::addIndexData(Ogre::IndexData *data, const unsigned int offset)
	{
		const unsigned int prev_size = mIndexCount;
		mIndexCount += (unsigned int)data->indexCount;

		unsigned int* tmp_ind = new unsigned int[mIndexCount];
		if (mIndexBuffer)
		{
			memcpy (tmp_ind, mIndexBuffer, sizeof(unsigned int) * prev_size);
			delete[] mIndexBuffer;
		}
		mIndexBuffer = tmp_ind;

		mNumTris = (unsigned int) data->indexCount / 3;
		Ogre::HardwareIndexBufferSharedPtr ibuf = data->indexBuffer;
		const bool use32bitindexes = (ibuf->getType() == Ogre::HardwareIndexBuffer::IT_32BIT);
		unsigned int index_offset = prev_size;

		if (use32bitindexes)
		{
			const unsigned int* pInt = static_cast<unsigned int*>(ibuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));
			for(unsigned int k = 0; k < mNumTris; ++k)
			{
				mIndexBuffer[index_offset ++] = offset + *pInt++;
				mIndexBuffer[index_offset ++] = offset + *pInt++;
				mIndexBuffer[index_offset ++] = offset + *pInt++;
			}
			ibuf->unlock();
		}
		else
		{
			const unsigned short* pShort = static_cast<unsigned short*>(ibuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));
			for(unsigned int k = 0; k < mNumTris; ++k)
			{
				mIndexBuffer[index_offset ++] = offset + static_cast<unsigned int> (*pShort++);
				mIndexBuffer[index_offset ++] = offset + static_cast<unsigned int> (*pShort++);
				mIndexBuffer[index_offset ++] = offset + static_cast<unsigned int> (*pShort++);
			}
			ibuf->unlock();
		}

	}
	//------------------------------------------------------------------------------------------------
	SReal VertexIndexToShape::getRadius()
	{
		if (mBoundRadius == (-1))
		{
			getSize();
			mBoundRadius = (std::max(mBounds.x,std::max(mBounds.y,mBounds.z)) * 0.5);
		}
		return mBoundRadius;
	}
	//------------------------------------------------------------------------------------------------
	Ogre::Vector3 VertexIndexToShape::getSize()
	{
		const unsigned int vCount = getVertexCount();
		if (mBounds == Ogre::Vector3(-1,-1,-1) && vCount > 0)
		{

			const Ogre::Vector3 * const v = getVertices();

			Ogre::Vector3 vmin(v[0]);
			Ogre::Vector3 vmax(v[0]);

			for(unsigned int j = 1; j < vCount; j++)
			{
				vmin.x = std::min(vmin.x, v[j].x);
				vmin.y = std::min(vmin.y, v[j].y);
				vmin.z = std::min(vmin.z, v[j].z);

				vmax.x = std::max(vmax.x, v[j].x);
				vmax.y = std::max(vmax.y, v[j].y);
				vmax.z = std::max(vmax.z, v[j].z);
			}

			mBounds.x = vmax.x - vmin.x;
			mBounds.y = vmax.y - vmin.y;
			mBounds.z = vmax.z - vmin.z;
		}

		return mBounds;
	}
	//------------------------------------------------------------------------------------------------
	const Ogre::Vector3* VertexIndexToShape::getVertices()
	{
		return mVertexBuffer;
	}
	//------------------------------------------------------------------------------------------------
	unsigned int VertexIndexToShape::getVertexCount()
	{
		return mVertexCount;
	}
	//------------------------------------------------------------------------------------------------
	const unsigned int* VertexIndexToShape::getIndices()
	{
		return mIndexBuffer;
	}
	//------------------------------------------------------------------------------------------------
	unsigned int VertexIndexToShape::getIndexCount()
	{
		return mIndexCount;
	}

	//------------------------------------------------------------------------------------------------
	btSphereShape* VertexIndexToShape::createSphere()
	{
		const Ogre::Real rad = getRadius();
		assert((rad > 0.0) &&
			("Sphere radius must be greater than zero"));
		btSphereShape* shape = new btSphereShape(rad);

		return shape;
	}
	//------------------------------------------------------------------------------------------------
	btBoxShape* VertexIndexToShape::createBox()
	{
		const Ogre::Vector3 sz = getSize();

		assert((sz.x > 0.0) && (sz.y > 0.0) && (sz.y > 0.0) &&
			("Size of box must be greater than zero on all axes"));

		btBoxShape* shape = new btBoxShape(Convert::toBullet(sz * 0.5));
		return shape;
	}
	//------------------------------------------------------------------------------------------------
	btCylinderShape* VertexIndexToShape::createCylinder()
	{
		const Ogre::Vector3 sz = getSize();

		assert((sz.x > 0.0) && (sz.y > 0.0) && (sz.y > 0.0) &&
			("Size of Cylinder must be greater than zero on all axes"));

		btCylinderShape* shape = new btCylinderShape(Convert::toBullet(sz * 0.5));
		return shape;
	}
	//------------------------------------------------------------------------------------------------
	btConvexHullShape* VertexIndexToShape::createConvexHull()
	{
		assert(mVertexCount && (mIndexCount >= 6) &&
			("Mesh must have some vertices and at least 6 indices (2 triangles)"));

		return new btConvexHullShape((btScalar*) &mVertexBuffer[0].x, mVertexCount, sizeof(Ogre::Vector3));
	}
	//------------------------------------------------------------------------------------------------
	btBvhTriangleMeshShape* VertexIndexToShape::createTrimesh()
	{
		assert(mVertexCount && (mIndexCount >= 6) &&
			("Mesh must have some vertices and at least 6 indices (2 triangles)"));

		unsigned int numFaces = mIndexCount / 3;

		btTriangleMesh *trimesh = new btTriangleMesh();
		unsigned int *indices = mIndexBuffer;
		Ogre::Vector3 *vertices = mVertexBuffer;

		btVector3 vertexPos[3];
		for (unsigned int n = 0; n < numFaces; ++n)
		{
			{
				const Ogre::Vector3 &vec = vertices[*indices];
				vertexPos[0][0] = vec.x;
				vertexPos[0][1] = vec.y;
				vertexPos[0][2] = vec.z;
			}
			{
				const Ogre::Vector3 &vec = vertices[*(indices + 1)];
				vertexPos[1][0] = vec.x;
				vertexPos[1][1] = vec.y;
				vertexPos[1][2] = vec.z;
			}
			{
				const Ogre::Vector3 &vec = vertices[*(indices + 2)];
				vertexPos[2][0] = vec.x;
				vertexPos[2][1] = vec.y;
				vertexPos[2][2] = vec.z;
			}

			indices += 3;

			trimesh->addTriangle(vertexPos[0], vertexPos[1], vertexPos[2]);
		}

		const bool useQuantizedAABB = true;
		btBvhTriangleMeshShape *shape = new btBvhTriangleMeshShape(trimesh, useQuantizedAABB);

		return shape;
	}
	//------------------------------------------------------------------------------------------------
	VertexIndexToShape::~VertexIndexToShape()
	{
		delete[] mVertexBuffer;
		delete[] mIndexBuffer;

		if (mBoneIndex)
		{
			for(BoneIndex::iterator i = mBoneIndex->begin();
				i != mBoneIndex->end();
				++i)
			{
				delete i->second;
			}
			delete mBoneIndex;
		}
	}
	//------------------------------------------------------------------------------------------------
	VertexIndexToShape::VertexIndexToShape(const Ogre::Matrix4 &transform) :
		mVertexBuffer (0),
		mIndexBuffer (0),
		mVertexCount (0),
		mIndexCount (0),
		mBounds (Ogre::Vector3(-1,-1,-1)),
		mBoundRadius (-1),
		mBoneIndex (0),
		mTransform (transform)
	{
	}

/*
 * =============================================================================================
 * BtOgre::StaticMeshToShapeConverter
 * =============================================================================================
 */

	StaticMeshToShapeConverter::StaticMeshToShapeConverter() :
	VertexIndexToShape(),
		mEntity (0),
		mNode (0)
	{
	}
	//------------------------------------------------------------------------------------------------
	StaticMeshToShapeConverter::~StaticMeshToShapeConverter()
	{
	}
	//------------------------------------------------------------------------------------------------
	StaticMeshToShapeConverter::StaticMeshToShapeConverter(Ogre::Entity *entity,  const Ogre::Matrix4 &transform) :
		VertexIndexToShape(transform),
		mEntity (0),
		mNode (0)
	{
		addEntity(entity, transform);
	}
	//------------------------------------------------------------------------------------------------
	StaticMeshToShapeConverter::StaticMeshToShapeConverter(Ogre::Renderable *rend, const Ogre::Matrix4 &transform) :
		VertexIndexToShape(transform),
		mEntity (0),
		mNode (0)
	{
		Ogre::RenderOperation op;
		rend->getRenderOperation(op);
		VertexIndexToShape::addStaticVertexData(op.vertexData);
		if(op.useIndexes)
			VertexIndexToShape::addIndexData(op.indexData);

	}
	//------------------------------------------------------------------------------------------------
	void StaticMeshToShapeConverter::addEntity(Ogre::Entity *entity,const Ogre::Matrix4 &transform)
	{
		// Each entity added need to reset size and radius
		// next time getRadius and getSize are asked, they're computed.
		mBounds  = Ogre::Vector3(-1,-1,-1);
		mBoundRadius = -1;

		mEntity = entity;
		mNode = (Ogre::SceneNode*)(mEntity->getParentNode());
		mTransform = transform;

		if (mEntity->getMesh()->sharedVertexData)
		{
			VertexIndexToShape::addStaticVertexData (mEntity->getMesh()->sharedVertexData);
		}

		for (unsigned int i = 0;i < mEntity->getNumSubEntities();++i)
		{
			Ogre::SubMesh *sub_mesh = mEntity->getSubEntity(i)->getSubMesh();

			if (!sub_mesh->useSharedVertices)
			{
				VertexIndexToShape::addIndexData(sub_mesh->indexData, mVertexCount);
				VertexIndexToShape::addStaticVertexData (sub_mesh->vertexData);
			}
			else
			{
				VertexIndexToShape::addIndexData (sub_mesh->indexData);
			}

		}
	}
	//------------------------------------------------------------------------------------------------
	void StaticMeshToShapeConverter::addMesh(const Ogre::MeshPtr &mesh, const Ogre::Matrix4 &transform)
	{
		// Each entity added need to reset size and radius
		// next time getRadius and getSize are asked, they're computed.
		mBounds  = Ogre::Vector3(-1,-1,-1);
		mBoundRadius = -1;

		//_entity = entity;
		//_node = (SceneNode*)(_entity->getParentNode());
		mTransform = transform;

		if (mesh->hasSkeleton ())
			Logger::getSingleton().logMessage("MeshToShapeConverter::addMesh : Mesh " + mesh->getName () + " as skeleton but added to trimesh non animated");

		if (mesh->sharedVertexData)
		{
			VertexIndexToShape::addStaticVertexData (mesh->sharedVertexData);
		}

		for(unsigned int i = 0;i < mesh->getNumSubMeshes();++i)
		{
			Ogre::SubMesh *sub_mesh = mesh->getSubMesh(i);

			if (!sub_mesh->useSharedVertices)
			{
				VertexIndexToShape::addIndexData(sub_mesh->indexData, mVertexCount);
				VertexIndexToShape::addStaticVertexData (sub_mesh->vertexData);
			}
			else
			{
				VertexIndexToShape::addIndexData (sub_mesh->indexData);
			}

		}
	}

/*
 * =============================================================================================
 * BtOgre::AnimatedMeshToShapeConverter
 * =============================================================================================
 */

	AnimatedMeshToShapeConverter::AnimatedMeshToShapeConverter(Ogre::Entity *entity,const Ogre::Matrix4 &transform) :
	VertexIndexToShape(transform),
	mEntity (0),
	mNode (0),
	mTransformedVerticesTemp(0),
	mTransformedVerticesTempSize(0)
	{
		addEntity(entity, transform);
	}
	//------------------------------------------------------------------------------------------------
	AnimatedMeshToShapeConverter::AnimatedMeshToShapeConverter() :
	VertexIndexToShape(),
	mEntity (0),
	mNode (0),
	mTransformedVerticesTemp(0),
	mTransformedVerticesTempSize(0)
	{
	}
	//------------------------------------------------------------------------------------------------
	AnimatedMeshToShapeConverter::~AnimatedMeshToShapeConverter()
	{
		delete[] mTransformedVerticesTemp;
	}
	//------------------------------------------------------------------------------------------------
	void AnimatedMeshToShapeConverter::addEntity(Ogre::Entity *entity,const Ogre::Matrix4 &transform)
	{
		// Each entity added need to reset size and radius
		// next time getRadius and getSize are asked, they're computed.
		mBounds  = Ogre::Vector3(-1,-1,-1);
		mBoundRadius = -1;

		mEntity = entity;
		mNode = (Ogre::SceneNode*)(mEntity->getParentNode());
		mTransform = transform;

		assert (entity->getMesh()->hasSkeleton ());

		mEntity->addSoftwareAnimationRequest(false);
		mEntity->_updateAnimation();

		if (mEntity->getMesh()->sharedVertexData)
		{
			VertexIndexToShape::addAnimatedVertexData (mEntity->getMesh()->sharedVertexData,
				mEntity->_getSkelAnimVertexData(),
				&mEntity->getMesh()->sharedBlendIndexToBoneIndexMap);
		}

		for (unsigned int i = 0;i < mEntity->getNumSubEntities();++i)
		{
			Ogre::SubMesh *sub_mesh = mEntity->getSubEntity(i)->getSubMesh();

			if (!sub_mesh->useSharedVertices)
			{
				VertexIndexToShape::addIndexData(sub_mesh->indexData, mVertexCount);

				VertexIndexToShape::addAnimatedVertexData (sub_mesh->vertexData,
					mEntity->getSubEntity(i)->_getSkelAnimVertexData(),
					&sub_mesh->blendIndexToBoneIndexMap);
			}
			else
			{
				VertexIndexToShape::addIndexData (sub_mesh->indexData);
			}

		}

		mEntity->removeSoftwareAnimationRequest(false);
	}
	//------------------------------------------------------------------------------------------------
	void AnimatedMeshToShapeConverter::addMesh(const Ogre::MeshPtr &mesh, const Ogre::Matrix4 &transform)
	{
		// Each entity added need to reset size and radius
		// next time getRadius and getSize are asked, they're computed.
		mBounds  = Ogre::Vector3(-1,-1,-1);
		mBoundRadius = -1;

		//_entity = entity;
		//_node = (SceneNode*)(_entity->getParentNode());
		mTransform = transform;

		assert (mesh->hasSkeleton ());

		if (mesh->sharedVertexData)
		{
			VertexIndexToShape::addAnimatedVertexData (mesh->sharedVertexData,
				0,
				&mesh->sharedBlendIndexToBoneIndexMap);
		}

		for(unsigned int i = 0;i < mesh->getNumSubMeshes();++i)
		{
			Ogre::SubMesh *sub_mesh = mesh->getSubMesh(i);

			if (!sub_mesh->useSharedVertices)
			{
				VertexIndexToShape::addIndexData(sub_mesh->indexData, mVertexCount);

				VertexIndexToShape::addAnimatedVertexData (sub_mesh->vertexData,
					0,
					&sub_mesh->blendIndexToBoneIndexMap);
			}
			else
			{
				VertexIndexToShape::addIndexData (sub_mesh->indexData);
			}

		}
	}
	//------------------------------------------------------------------------------------------------
	bool AnimatedMeshToShapeConverter::getBoneVertices(unsigned char bone,
														 unsigned int &vertex_count,
														 Ogre::Vector3* &vertices,
														 const Ogre::Vector3 &bonePosition)
	{
		BoneIndex::iterator i = mBoneIndex->find(bone);

		if (i == mBoneIndex->end())
			return false;

		if (i->second->empty())
			return false;

		vertex_count = (unsigned int) i->second->size() + 1;
		if (vertex_count > mTransformedVerticesTempSize)
		{
			if (mTransformedVerticesTemp)
				delete[] mTransformedVerticesTemp;

			mTransformedVerticesTemp = new Ogre::Vector3[vertex_count];

		}

		vertices = mTransformedVerticesTemp;
		vertices[0] = bonePosition;
		//mEntity->_getParentNodeFullTransform() *
		//	mEntity->getSkeleton()->getBone(bone)->_getDerivedPosition();

		//mEntity->getSkeleton()->getBone(bone)->_getDerivedOrientation()
		unsigned int currBoneVertex = 1;
		Vector3Array::iterator j = i->second->begin();
		while(j != i->second->end())
		{
			vertices[currBoneVertex] = (*j);
			++j;
			++currBoneVertex;
		}
		return true;
	}
	//------------------------------------------------------------------------------------------------
	btBoxShape* AnimatedMeshToShapeConverter::createAlignedBox(unsigned char bone,
															   const Ogre::Vector3 &bonePosition,
															   const Ogre::Quaternion &boneOrientation)
	{
		unsigned int vertex_count;
		Ogre::Vector3* vertices;

		if (!getBoneVertices(bone, vertex_count, vertices, bonePosition))
			return 0;

		Ogre::Vector3 min_vec(vertices[0]);
		Ogre::Vector3 max_vec(vertices[0]);

		for(unsigned int j = 1; j < vertex_count ;j++)
		{
			min_vec.x = std::min(min_vec.x,vertices[j].x);
			min_vec.y = std::min(min_vec.y,vertices[j].y);
			min_vec.z = std::min(min_vec.z,vertices[j].z);

			max_vec.x = std::max(max_vec.x,vertices[j].x);
			max_vec.y = std::max(max_vec.y,vertices[j].y);
			max_vec.z = std::max(max_vec.z,vertices[j].z);
		}
		const Ogre::Vector3 maxMinusMin(max_vec - min_vec);
		btBoxShape* box = new btBoxShape(Convert::toBullet(maxMinusMin));

		/*const Ogre::Vector3 pos
			(min_vec.x + (maxMinusMin.x * 0.5),
			min_vec.y + (maxMinusMin.y * 0.5),
			min_vec.z + (maxMinusMin.z * 0.5));*/

		//box->setPosition(pos);

		return box;
	}
	//------------------------------------------------------------------------------------------------
	bool AnimatedMeshToShapeConverter::getOrientedBox(unsigned char bone,
						 const Ogre::Vector3 &bonePosition,
						 const Ogre::Quaternion &boneOrientation,
						 Ogre::Vector3 &box_afExtent,
						 Ogre::Vector3 *box_akAxis,
						 Ogre::Vector3 &box_kCenter)
	{
		unsigned int vertex_count;
		Ogre::Vector3* vertices;

		if (!getBoneVertices(bone, vertex_count, vertices, bonePosition))
			return false;

		 box_kCenter = Ogre::Vector3::ZERO;

		 {
			 for(unsigned int c = 0 ;c < vertex_count;c++)
			 {
				 box_kCenter += vertices[c];
			 }
			 const Ogre::Real invVertexCount = 1.0 / vertex_count;
			 box_kCenter *= invVertexCount;
		 }
		Ogre::Quaternion orient = boneOrientation;
		orient.ToAxes(box_akAxis);

		// Let C be the box center and let U0, U1, and U2 be the box axes.  Each
		// input point is of the form X = C + y0*U0 + y1*U1 + y2*U2.  The
		// following code computes min(y0), max(y0), min(y1), max(y1), min(y2),
		// and max(y2).  The box center is then adjusted to be
		//   C' = C + 0.5*(min(y0)+max(y0))*U0 + 0.5*(min(y1)+max(y1))*U1 +
		//        0.5*(min(y2)+max(y2))*U2

		Ogre::Vector3 kDiff (vertices[1] - box_kCenter);
		Ogre::Real fY0Min = kDiff.dotProduct(box_akAxis[0]), fY0Max = fY0Min;
		Ogre::Real fY1Min = kDiff.dotProduct(box_akAxis[1]), fY1Max = fY1Min;
		Ogre::Real fY2Min = kDiff.dotProduct(box_akAxis[2]), fY2Max = fY2Min;

		for (unsigned int i = 2; i < vertex_count; i++)
		{
			kDiff = vertices[i] - box_kCenter;

			const Ogre::Real fY0 = kDiff.dotProduct(box_akAxis[0]);
			if ( fY0 < fY0Min )
				fY0Min = fY0;
			else if ( fY0 > fY0Max )
				fY0Max = fY0;

			const Ogre::Real fY1 = kDiff.dotProduct(box_akAxis[1]);
			if ( fY1 < fY1Min )
				fY1Min = fY1;
			else if ( fY1 > fY1Max )
				fY1Max = fY1;

			const Ogre::Real fY2 = kDiff.dotProduct(box_akAxis[2]);
			if ( fY2 < fY2Min )
				fY2Min = fY2;
			else if ( fY2 > fY2Max )
				fY2Max = fY2;
		}

		box_afExtent.x = ((SReal)0.5)*(fY0Max - fY0Min);
		box_afExtent.y = ((SReal)0.5)*(fY1Max - fY1Min);
		box_afExtent.z = ((SReal)0.5)*(fY2Max - fY2Min);

		box_kCenter += (0.5*(fY0Max+fY0Min))*box_akAxis[0] +
			(0.5*(fY1Max+fY1Min))*box_akAxis[1] +
			(0.5*(fY2Max+fY2Min))*box_akAxis[2];

		box_afExtent *= 2.0;

		return true;
	}
	//------------------------------------------------------------------------------------------------
	btBoxShape *AnimatedMeshToShapeConverter::createOrientedBox(unsigned char bone,
																	   const Ogre::Vector3 &bonePosition,
																	   const Ogre::Quaternion &boneOrientation)
	{
		Ogre::Vector3 box_akAxis[3];
		Ogre::Vector3 box_afExtent;
		Ogre::Vector3 box_afCenter;

		if (!getOrientedBox(bone, bonePosition, boneOrientation,
							box_afExtent,
							box_akAxis,
							box_afCenter))
			return 0;

		btBoxShape *geom = new btBoxShape(Convert::toBullet(box_afExtent));
		//geom->setOrientation(Quaternion(box_akAxis[0],box_akAxis[1],box_akAxis[2]));
		//geom->setPosition(box_afCenter);
		return geom;
	}
