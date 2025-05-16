#pragma once

#include "core.h"
#include "gamestate.h"
#include <array>
#include <iostream>
#include <string>

class Gui {
private:
  int SelectedItem;

  const void DisplayBoard(std::array<Piece, 64> &board);
  const void DisplayMenu();

public:
  const void Render(AppState state);
  const void Clear() { std::cout << "\033[2J\033[H"; };
};
