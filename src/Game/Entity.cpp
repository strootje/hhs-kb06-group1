#include "Game/Entity.h"

namespace Game
{
	Entity::Entity(irr::scene::ISceneManager* p_sceneManager, PlaygroundListener* p_playgroundListener)
	{
		m_sceneManager = p_sceneManager;
		m_playgroundListener = p_playgroundListener;
		m_meshSceneNode = NULL;
		m_animatedMesh = NULL;
	}

	Entity::~Entity()
	{
		m_meshSceneNode->remove();
	}

	void Entity::SetMaterialFlags(irr::scene::ISceneNode* p_sceneNode)
	{
		if (p_sceneNode == NULL)
		{
			p_sceneNode = m_meshSceneNode;
		}

		p_sceneNode->setMaterialFlag(irr::video::E_MATERIAL_FLAG::EMF_LIGHTING, false);
		p_sceneNode->setMaterialFlag(irr::video::E_MATERIAL_FLAG::EMF_ANTI_ALIASING, true);
		p_sceneNode->setMaterialType(irr::video::E_MATERIAL_TYPE::EMT_TRANSPARENT_ALPHA_CHANNEL_REF);
	}

	irr::core::vector3df Entity::GetPosition()
	{
		return m_meshSceneNode->getPosition();
	}

	void Entity::SetPosition(irr::core::vector3df& p_vector)
	{
		m_meshSceneNode->setPosition(p_vector);
	}

	irr::scene::ISceneNode* Entity::GetSceneNode()
	{
		return m_meshSceneNode;
	}
}