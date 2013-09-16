#ifndef __GAME__KERNEL__H__
#define __GAME__KERNEL__H__

#include "InputHandler.h"
#include "../Camera/Capture.h"
#include <irrlicht.h>

namespace Game
{
	/**
	 * @brief	This class will help with the initialization of all the core systems
	 *			that we need for the game to run properly.
	 * @author	Bas Stroosnijder
	 */
	class Kernel
	{
	public:
		/**
		 * @brief	Constructor
		 */
		Kernel();

		/**
		 * @brief	Destructor
		 * @see		Kernel::Cleanup
		 */
		~Kernel();

		/**
		 * @brief	Properly destructs all the member properties
		 */
		void Cleanup();

		/**
		 * @brief	Starts the main game loop
		 */
		void Start();

	private:
		irr::core::stringw m_title;
		irr::IrrlichtDevice* m_device;
		irr::video::IVideoDriver* m_driver;
		irr::gui::IGUIEnvironment* m_gui;
		irr::scene::ISceneManager* m_scene;
		InputHandler* m_inputHandler;
		Camera::Capture* m_capture;

		/**
		 * @brief	Show a fps counter in the title of the window
		 */
		void ShowFPS();
	};
}

#endif