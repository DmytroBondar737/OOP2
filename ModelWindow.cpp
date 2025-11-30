#include "ModelWindow.h"
#include <stdexcept>

ModelWindow::ModelWindow(string t, int x, int y, int w, int h, string c)
    : title(t), x(x), y(y), width(w), height(h), color(c), visible(true), hasBorder(true) {
    if (!checkBounds(x, y, w, h)) throw invalid_argument("За межами екрана");
}

bool ModelWindow::checkBounds(int x, int y, int w, int h) const {
    return x >= 0 && y >= 0 && x + w <= 1920 && y + h <= 1080;
}

void ModelWindow::moveH(int dx) {
    if (!checkBounds(x + dx, y, width, height)) throw out_of_range("За межами");
    x += dx;
}

void ModelWindow::moveV(int dy) {
    if (!checkBounds(x, y + dy, width, height)) throw out_of_range("За межами");
    y += dy;
}

void ModelWindow::resize(int w, int h) {
    if (!checkBounds(x, y, w, h)) throw out_of_range("За межами");
    width = w; height = h;
}

void ModelWindow::setColor(string c) { color = c; }
void ModelWindow::toggleVisible() { visible = !visible; }
void ModelWindow::toggleBorder() { hasBorder = !hasBorder; }

void ModelWindow::display() const {
    cout << title << " (" << x << "," << y << ") " << width << "x" << height;
    cout << " " << color << " " << (visible ? "видиме" : "невидиме");
    cout << " " << (hasBorder ? "з рамкою" : "без рамки") << endl;
}
