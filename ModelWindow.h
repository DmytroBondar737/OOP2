#pragma once
#include <iostream>
#include <string>
using namespace std;

class ModelWindow {
private:
    string title;
    int x, y, width, height;
    string color;
    bool visible, hasBorder;

    bool checkBounds(int x, int y, int w, int h) const;

public:
    ModelWindow(string t, int x, int y, int w, int h, string c);

    void moveH(int dx);
    void moveV(int dy);
    void resize(int w, int h);
    void setColor(string c);
    void toggleVisible();
    void toggleBorder();

    void display() const;
};
