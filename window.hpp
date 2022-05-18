#include <thread>
#include <iostream>
#include <chrono>
#include <string>
#include <SDL.h>
#include <SDL_image.h>
// #include <SDL2/SDL_image.h>
#include <SDL_ttf.h>
#ifndef WINDOW_HPP
#define WINDOW_HPP
class Window {
public:
    Window(const std::string &title, int width, int height);
    ~Window();
    void pollEvents(SDL_Event &event);
    void clear() const;
    inline bool isClosed () const { return _closed; };
private:
    bool init();
public:
    std::string _title;
    int _width = 800;
    int _height = 600;
    bool _closed = false;
    SDL_Window *_window = nullptr;
public:
    static SDL_Renderer *renderer;
};
#endif 
