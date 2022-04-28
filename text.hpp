#include <SDL_ttf.h>
#include <SDL.h>
#include <string>
#include "window.hpp"
class Text {
public:
    Text();
    Text(SDL_Renderer *renderer,const std::string &font_path, int font_size, const std::string &message_text, const SDL_Color &color);
    void display(int x, int y, SDL_Renderer *renderer) const;
    static SDL_Texture *loadFont(SDL_Renderer *renderer,const std::string &font_path, int font_size, const std::string &message_text, const SDL_Color &color);
    void pollEvents(SDL_Event &event);
    SDL_Texture* _text_texture = nullptr;
    mutable SDL_Rect _text_rect;
    std::string _message_text;
    SDL_Color _color;
	};