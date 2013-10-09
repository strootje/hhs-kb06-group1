#include "Game/Creature.h"

using namespace Game;

Creature::Creature(irr::scene::ISceneManager* p_sceneManager,
		irr::core::vector3df p_position,
		PathRoute* p_pathRoute,
		irr::scene::ITriangleSelector* p_selector)
		:
		PathFollower(p_pathRoute)
{
<<<<<<< HEAD
	//m_animatedMesh = p_sceneManager->getMesh("resources/temp/models/animtest9.x");///creature/goomba/goombawalk1.1.x");
	m_animatedMesh = p_sceneManager->getMesh("resources/models/creature/goomba/goombawalk2.0.x");
	m_meshSceneNode = p_sceneManager->addAnimatedMeshSceneNode(m_animatedMesh);

	irr::scene::IAnimatedMeshSceneNode* animatedMeshSceneNode = p_sceneManager->addAnimatedMeshSceneNode(m_animatedMesh);
	
	m_meshSceneNode = animatedMeshSceneNode;
	m_meshSceneNode->setPosition(p_position);	

	irr::scene::ISceneNodeAnimator* anim = p_sceneManager->createCollisionResponseAnimator(
			p_selector, m_meshSceneNode, irr::core::vector3df(10,3,10),
			irr::core::vector3df(0,-10,0),
			irr::core::vector3df(0,0,0)
	);

=======
	m_animatedMesh = p_sceneManager->getMesh("resources/models/creature/creature.3ds");
	m_meshSceneNode = p_sceneManager->addAnimatedMeshSceneNode(m_animatedMesh,0,1);
	m_meshSceneNode->setPosition(p_position);
	m_meshSceneNode->setScale(irr::core::vector3df(10.0, 10.0, 10.0));
	

	irr::scene::ISceneNodeAnimator* anim = p_sceneManager->createCollisionResponseAnimator(
	p_selector, m_meshSceneNode, irr::core::vector3df(10,3,10),
	irr::core::vector3df(0,-10,0),
	irr::core::vector3df(0,0,0));
>>>>>>> f11f62c1742e416e9e896fd3d066a5ceed8c3059
	m_meshSceneNode->addAnimator(anim);
	anim->drop();

	m_healthPoints = 100;

	SetMaterialFlags();
	StartFollowing();
}

void Creature::Update(float p_deltaTime)
{
	UpdatePosition();
}

void Creature::UpdatePosition()
{
	return;
}
void Creature::SetHealthPoints(int p_healthPoints)
{
	m_healthPoints = p_healthPoints;
}

int Creature::GetHealthPoints()
{
	return m_healthPoints;
}

void Creature::kill()
{
	m_meshSceneNode->remove();
}

