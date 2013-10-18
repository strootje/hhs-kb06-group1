#ifndef __EventHandler__H__
#define __EventHandler__H__

#include "UserInputListener.h"
#include "Game/Gui.h"
#include "Game/Playground.h"

#include <irrlicht.h>

namespace Game
{
	/**
	 * @brief	This Class creates handles incoming events from different inputs.
	 *			
	 * @author	Bram van Elderen
	 */
	class EventHandler	:	public irr::IEventReceiver
	{
		enum
		{
			QUIT_BUTTON = 101,
			MENU_BUTTON = 102,
			ClEAR_BUTTON = 103,
			TOWER_BUTTON = 104,
			SELL_BUTTON = 105,
			CONTROLS_BUTTON = 107,
			STARTGAME_BUTTON = 108
		};

		enum ClickEvent
		{
			TOWER_PRESSED = 1,
			SELL_PRESSED = 2
		};

	public:
		
		/**
		 * @brief Constructor
		 */
		EventHandler(UserInputListener* p_userInputListener,
				irr::IrrlichtDevice* p_device,
				Game::Gui* p_gui,
				Game::Playground* p_playground);
		
		/**
		 * @brief Deconstructor
		 */
		~EventHandler();

		/**
		 * @brief handles events
		 */
		virtual bool OnEvent(const irr::SEvent& event);

		/**
		 * @brief	Properly destructs all the member properties
		 */
		void Cleanup();

	private:
		UserInputListener* m_userInputListener;
		Game::Gui* m_gui;
		Game::Playground* m_playground;
		irr::IrrlichtDevice* m_device;
		int m_clickEvent;
	};

}
#endif