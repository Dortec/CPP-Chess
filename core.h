#pragma once

enum class PieceType {
  Pawn,
  Knight,
  Bishop,
  Rook,
  Queen,
  King,
  None,
};

enum class Color {
  White,
  Black,
  None,
};

struct Piece {
  PieceType type = PieceType::None;
  Color color = Color::None;
};

enum class Message {
  Test,
  None,
};

enum class Screen {
  MainMenu,
  InGame,
};

struct AppState {
  int main_menu_index = 0;
  Screen screen = Screen::MainMenu;
  Message InputHandler();
  void Update(Message msg);
};
