#include "gui.h"
#include "core.h"
#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

const void Gui::DisplayBoard(array<Piece, 64> &board) {
  int boardPos = 0;
  char pieceType;
  char pieceColor;

  cout << "-----------------------------" << endl;
  cout << "|   a  b  c  d  e  f  g  h  |" << endl;

  for (Piece piece : board) {
    if (boardPos % 8 == 0) {
      if (boardPos != 0) {
        cout << " |" << endl;
      }
      cout << "| " << boardPos / 8 + 1;
    }

    switch (piece.color) {
    case Color::White:
      pieceColor = 'W';
      break;
    case Color::Black:
      pieceColor = 'B';
      break;
    case Color::None:
      pieceColor = '.';
      break;
    }

    switch (piece.type) {
    case PieceType::Pawn:
      pieceType = 'P';
      break;
    case PieceType::Knight:
      pieceType = 'N';
      break;
    case PieceType::Bishop:
      pieceType = 'B';
      break;
    case PieceType::Rook:
      pieceType = 'R';
      break;
    case PieceType::Queen:
      pieceType = 'Q';
      break;
    case PieceType::King:
      pieceType = 'K';
      break;
    case PieceType::None:
      pieceType = '.';
      break;
    }

    cout << setw(2) << pieceColor << pieceType;

    boardPos += 1;
  }

  cout << " |" << endl;
  cout << "-----------------------------";
  cout << endl;
}

const void Gui::DisplayMenu() {
  cout << "This is menu :p" << endl;
  cout << "hi" << endl;
}

const void Gui::Render(AppState state) {
  Clear();
  switch (state.screen) {
  case Screen::MainMenu:
    DisplayMenu();
    break;
  case Screen::InGame:
    break;
  }
}
