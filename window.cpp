#include "window.hpp"
#include "game.hpp"
SDL_Renderer *Window::renderer=nullptr;

Window::Window(const std::string &title, int width, int height) :
_title(title),_width(width), _height(height){
    _closed = !init();
}
Window::~Window() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(_window);
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}
bool Window::init() {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
         std::cerr << "Failed to initalize SDL. \n";
         return false;
    }
    if(IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
        std::cerr << "Failed to load IMG. \n";
        return false;
    }
    if(TTF_Init()==-1){
        std::cerr << "Failed to initialize ttf.\n";
        return false;
    }

    _window = SDL_CreateWindow(
         _title.c_str(),
          SDL_WINDOWPOS_CENTERED,
         SDL_WINDOWPOS_CENTERED,
        _width,_height,
        0
    );
    if (_window == nullptr) {
    std::cerr << "Failed to create window. \n";
    return false;}
    renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr){
    std::cerr << "Failed to create renderer. \n";
    return false;
}
return true;
}
void Window::pollEvents(SDL_Event &event) {
        switch (event.type) {
        case SDL_KEYDOWN:
            switch(event.key.keysym.sym){
                case SDLK_ESCAPE:
                    _closed = true;
                break;
            }
            break;
        case SDL_QUIT:
              _closed = true;
             break;
         default:
             break;
            }}
void Window::clear() const{
    SDL_RenderPresent(renderer);
    SDL_SetRenderDrawColor(renderer, 225, 225, 225, 225);
    SDL_RenderClear(renderer);
}