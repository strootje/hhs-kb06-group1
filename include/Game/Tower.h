#ifndef __GAME__TOWER__H__
#define __GAME__TOWER__H__

#include "Entity.h"

namespace Game

{
	/**
	* @brief	A Tower is a game object that attacks monsters
	* @author	Michel van Os
	*/
	class Tower : public Entity	{
	public:
		Tower(irr::scene::ISceneManager* p_sceneManager, irr::core::vector3df p_position);

		double getHealthPoints();
		double getShootingSpeed();
		double getRange();

		void setHealthPoints(double p_healthPoints);
		void setShootingSpeed(double p_shootingSpeed);
		void setRange(double p_range);

	private:
		double m_healthPoints;
		double m_shootingSpeed;
		double m_range;

	};
}

#endif