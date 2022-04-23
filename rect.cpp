#include"rect.hpp"
#include<SDL_image.h>
#include"game.hpp"

Rect::Rect (int w, int h, int _x, int _y, int r, int g, int b, int a):
_w(w), _h(h), x(_x), y(_y) , _r(r), _g(g), _b(b), _a(a)
{

}
Rect::Rect (int w, int h, int _x, int _y, const std::string &image_path):
_w(w), _h(h), x(_x), y(_y)
{
    auto surface = IMG_Load(image_path.c_str());
    if (!surface) {
        std::cerr << "Failed to create surface" << std::endl;
    }
    _texture = SDL_CreateTextureFromSurface(Window::renderer, surface);
    if (!_texture) {
        std::cerr << "Failed to create texture" << std::endl;
    }
    SDL_FreeSurface(surface);
}
Rect::~Rect (){
    SDL_DestroyTexture(_texture);
}
void Rect::draw() const{
    SDL_Rect rect = {x,y,_w,_h};
    if(_texture) {
        SDL_RenderCopy(Window::renderer,_texture, nullptr, &rect);
    }
    else {
    SDL_SetRenderDrawColor(Window::renderer,_r,_g,_b,_a);
    SDL_RenderFillRect(Window::renderer, &rect);
    }
 }

 void Rect::pollEvents(SDL_Event &event){
         if(event.type==SDL_KEYDOWN){
             switch(event.key.keysym.sym){
                case SDLK_a:
                    if(dir!=RIGHT)
                        dir=LEFT;
                    break;
                case SDLK_d:
                    if(dir!=LEFT)
                        dir=RIGHT;
                    break;
                case SDLK_w:
                    if(dir!=DOWN)
                        dir=UP;
                    break;
                case SDLK_s:
                    if(dir!=UP)
                        dir=DOWN;
                    break;
             }
         }

     }