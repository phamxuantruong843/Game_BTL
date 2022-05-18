#pragma once
#include "window.hpp"
class Rect{
public:
    Rect();
    Rect (int w, int h, int _x, int _y,const std::string &image_path);
    Rect (int w, int h, int _x, int _y, int r, int g, int b, int a);
    ~Rect ();
    void draw () const;
    void pollEvents(SDL_Event &event);
    int _w,_h;
    int x,y;
    int _r,_g,_b,_a;
    SDL_Texture *_texture = nullptr;
};
