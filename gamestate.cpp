#include "gamestate.h"
#include "core.h"
#include <array>

std::array<Piece, 64> &GameState::BoardInfo() { return board; }

void GameState::Reset() {
  board[0] = {PieceType::Rook, Color::Black};
  board[1] = {PieceType::Knight, Color::Black};
  board[2] = {PieceType::Bishop, Color::Black};
  board[3] = {PieceType::Queen, Color::Black};
  board[4] = {PieceType::King, Color::Black};
  board[5] = {PieceType::Bishop, Color::Black};
  board[6] = {PieceType::Knight, Color::Black};
  board[7] = {PieceType::Rook, Color::Black};

  for (int i = 8; i < 16; i++) {
    board[i] = {PieceType::Pawn, Color::Black};
  }

  for (int i = 48; i < 56; i++) {
    board[i] = {PieceType::Pawn, Color::White};
  }

  board[56] = {PieceType::Rook, Color::White};
  board[57] = {PieceType::Knight, Color::White};
  board[58] = {PieceType::Bishop, Color::White};
  board[59] = {PieceType::Queen, Color::White};
  board[60] = {PieceType::King, Color::White};
  board[61] = {PieceType::Bishop, Color::White};
  board[62] = {PieceType::Knight, Color::White};
  board[63] = {PieceType::Rook, Color::White};
}
