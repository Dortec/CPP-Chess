#pragma once

#include "core.h"
#include <array>
#include <string>

class GameState {
private:
  std::array<Piece, 64> board;

public:
  std::array<Piece, 64> &BoardInfo();
  void Reset();
};
