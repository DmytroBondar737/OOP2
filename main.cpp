#include "ModelWindow.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ModelWindow w("Вікно", 100, 100, 400, 300, "синій");
    w.display();
    w.moveH(50);
    w.resize(500, 400);
    w.toggleVisible();
    w.display();
    return 0;
}
