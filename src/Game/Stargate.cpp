#include "Game/Stargate.h"

using namespace Game;

Stargate::Stargate(irr::scene::ISceneManager* p_sceneManager,
		irr::core::vector3df& p_position)
{
	m_animatedMesh = p_sceneManager->getMesh("resources/models/castle/Castleofpeaches.x");
		
	m_meshSceneNode = p_sceneManager->addAnimatedMeshSceneNode(m_animatedMesh);
	m_meshSceneNode->setPosition(p_position);
}