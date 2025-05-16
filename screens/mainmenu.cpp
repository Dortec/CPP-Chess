#include "../core.h"
#include "screens.h"
#include <iostream>
#include <string>

Message HandleMainMenuInput() {
  std::string input;
  std::getline(std::cin, input);
  if (input == "Test") {
    return Message::Test;
  }
  return Message::None;
}
