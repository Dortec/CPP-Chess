#include "core.h"
#include "screens/screens.h"
#include <iostream>

Message AppState::InputHandler() {

  switch (screen) {

  case Screen::MainMenu:
    return HandleMainMenuInput();
    break;
  case Screen::InGame:
    /*return HandleInGameInput();*/
    break;
  }

  return Message::None;
}

void AppState::Update(Message msg) {
  switch (msg) {
  case Message::Test:
    std::cout << "Message received" << std::endl;
    break;
  case Message::None:
    break;
  }
}
