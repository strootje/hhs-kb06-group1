#include "Game/Entity.h"

using namespace Game;

Entity::Entity()
{
	m_meshSceneNode = NULL;
	m_animatedMesh = NULL;
}

void Entity::updatePosition()
{
	return;
}

void Entity::SetMaterialFlags()
{
	m_meshSceneNode->setMaterialFlag(irr::video::E_MATERIAL_FLAG::EMF_LIGHTING, false);
	m_meshSceneNode->setMaterialFlag(irr::video::E_MATERIAL_FLAG::EMF_ANTI_ALIASING, true);
<<<<<<< HEAD
<<<<<<< HEAD
	m_meshSceneNode->setMaterialType(irr::video::E_MATERIAL_TYPE::EMT_TRANSPARENT_ALPHA_CHANNEL_REF);
}

irr::core::vector3df Entity::getPosition()
{
	return m_meshSceneNode->getPosition();
}

void Entity::setPosition(irr::core::vector3df p_vector)
{
	m_meshSceneNode->setPosition(p_vector);
=======
	//m_meshSceneNode->setMaterialType(irr::video::E_MATERIAL_TYPE::EMT_TRANSPARENT_ALPHA_CHANNEL_REF);
>>>>>>> d1805bf8869835ce55e08362755a0f148de680c5
=======
	m_meshSceneNode->setMaterialType(irr::video::E_MATERIAL_TYPE::EMT_TRANSPARENT_ALPHA_CHANNEL_REF);
}

irr::core::vector3df Entity::GetPosition()
{
	return m_meshSceneNode->getPosition();	
}

void Entity::SetPosition(irr::core::vector3df& p_position)
{
	m_meshSceneNode->setPosition(p_position);
>>>>>>> aa1056c071da2b56e6ed3046a022ae59c3ecf056
}