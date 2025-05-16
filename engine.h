#pragma once

#include "core.h"
#include "gamestate.h"
#include <array>
#include <string>

class Engine {
private:
  GameState state;

public:
  void InputHandler(std::string input);

  bool ApplyMove(const std::string &move);

  const bool IsCheck();

  const bool IsCheckMate();

  void Reset() { state.Reset(); };

  std::array<Piece, 64> &GameState() { return state.BoardInfo(); }
};
