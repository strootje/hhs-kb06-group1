#ifndef __GAME__WAVE__H__
#define __GAME__WAVE__H__

#include "PlaygroundListener.h"
#include "Game/Creature.h"
#include "Game/Timer.h"
#include "Utility/Logger.h"

#include <vector>
#include <list>
#include <time.h>
#include <iostream>

namespace Game
{
	/**
	 * @brief	A Wave creates a collection of creatures and spawns them in certain times on certain places, following certain routes.
	 * 
	 *			The amount of Creatures the Wave should spawn can be changed.
	 *			Also remember to reset the amount of spawned Creatures before the
	 *			Wave is reused for the next game round.
	 * @author	Bram van Elderen.
	 * @author	Michel van Os.
	 * @todo	Check all Comments. Including the parameters + return values!!!!!!
	 */
	class Wave
	{
	public:
		/**
		 * @brief	The constructor initializes the object.
		 *
		 * @author	Michel van Os.
		 * @param	p_scenemanager is used to create creatures in the class
		 * @param	p_playgroundListener Notify the PlaygroundListener when a Creature has been spawned.
		 * @param	p_waveSize The amount of Creatures the Wave should spawn.
		 */
		Wave(irr::scene::ISceneManager* p_sceneManager, PlaygroundListener* p_playgroundListener, int p_waveSize);

		/**
		 * @brief	Destructor
		 */
		~Wave();

		/** 
		 * @brief this method initializes the startposition of the Creatures and starts the Timer of the Wave.
		 */
		void StartSpawning();

		/**
		 * @brief	Resets the amount of Creatures spawned and the Timer.
		 *
		 * @author	Michel van Os.
		 */
		void ResetAndStopSpawning();

		/**
		 * @brief	This method spawns the Creatures onto the map.
		 *
		 *			The Wave only spawns Creatures when the amount of
		 *			spawned Creatures is smaller then size of the Wave.
		 * @param	p_pathRoute The PathRoute the spawned Creature should follow.
		 * @return	Whether the Wave spawned a Creature or not.
		 */
		bool SpawnCreature(PathRoute* p_pathRoute);

		/**
		 * @brief	Returns whether the Wave is still spawning Creatures.
		 *
		 * @author	Michel van Os.
		 * @return	Whether the Wave is still spawning Creatures;
		 */
		bool IsActive();

		/**
		 * @brief	Returns whether all Creatures are spawned.
		 *
		 * @author	Michel van Os.
		 * @return	Whether all Creatures are spawned.
		 */
		bool AreAllCreaturesSpawned();

		/**
		 * @brief	Returns the amount of Creatures that has been spawned by the Wave.
		 *
		 *			Remember to reset the amount of creatures that has been spawned
		 *			before the next round of the game starts and reuses the same Wave.
		 * @author	Michel van Os.
		 * @return	The amount of Creatures spawned by the Wave.
		 */
		int GetCreaturesSpawned();

		/**
		 * @brief	Sets the amount of Creatures the Wave should spawn.
		 *
		 * @author	Michel van Os.
		 * @param	p_waveSize The amount of Creatures.
		 */
		void SetWaveSize(int p_waveSize);

		/**
		 * @brief	Returns the amount of Creatures the Wave should spawn.
		 *
		 * @author	Michel van Os.
		 * @return	The amount of Creatures the Wave should spawn.
		 */
		int GetWaveSize();

	private:
		PlaygroundListener* m_playgroundListener;
		irr::scene::ISceneManager* m_sceneManager;

		/**
		 * @brief	The amount of Creatures that should be spawn
		 *			by the Wave.
		 *
		 * @author	Michel van Os.
		 */
		int m_waveSize;

		/**
		 * @brief	The amount of Creatures that has been spawned since
		 *			the Wave started spawning.
		 *
		 * @author	Michel van Os.
		 */
		int m_creaturesSpawned;


		Game::Timer* m_timer;
	};
}
#endif