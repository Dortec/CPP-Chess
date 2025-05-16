#include "core.h"
#include "gui.h"

int main() {
  Gui gui;
  AppState app;

  gui.Render(app);

  while (true) {
    Message msg = app.InputHandler();
    app.Update(msg);
    gui.Render(app);
  }

  return 0;
}
