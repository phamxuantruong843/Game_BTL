#include "window.cpp"
#include <vector>
#include "rect.cpp"
#include "text.cpp"
#include "game.hpp"
#include "RandomMap.cpp"


void pollEvents(Window &window, Rect &rect)
{
    SDL_Event event;
    if (SDL_PollEvent(&event))
    {
        rect.pollEvents(event);
        window.pollEvents(event);
        if (event.type == SDL_MOUSEMOTION)
        {
            if (event.motion.x < WIDTH / 4 && event.motion.y < HEIGHT / 5)
            {
                inPos1 = true;
            }
            if (event.motion.y > HEIGHT / 5 && event.motion.x < WIDTH / 6 && event.motion.y < HEIGHT / 3)
            {
                inPos2 = true;
            }
            if (event.motion.x > WIDTH / 4 && event.motion.y > HEIGHT / 4)
            {
                inPos1 = false;
                inPos2 = false;
            }
        }
        if (event.type == SDL_MOUSEBUTTONUP)
        {
            if (inPos1 || inPos2)
                isClick = true;
            else
                isClick = false;
        }
    }
    
    if (isClick == true && inPos1 == true)
    {
        pause = 1;
    }
    if (isClick == true && inPos2 == true)
    {
        window._closed = true;
    }
}
struct s
{
    float x, y;
};

int main(int argc, char **argv)
{
    Rect rect(SIZE, SIZE, 100, 100, "green.png"); // 20X20 pixel , x=y=100;
    Rect apple1(SIZE, SIZE, 30, 20, "apple.png");
    Rect rect1(SIZE, SIZE, 500, 500, "red.png");
    Rect walls(SIZE, SIZE, 500, 500, "walls.png");
    s pos = {550, 550};
    std::vector<s> snake(num, pos);
    std::vector<s> g(apple, pos);
    int scores = 0;
    Text start(Window::renderer, "font.ttf", 120, "Snake!", {0, 225, 225, 225});
    Text start1(Window::renderer, "font.ttf", 120,"Play!!", {0, 0, 0, 0});
    Text exit1(Window::renderer, "font.ttf", 90, "Exit", {0, 225, 225, 225});
    Text exit(Window::renderer, "font.ttf", 90, "Exit", {0, 0, 0, 0});
    int n, a[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            n = rand() % 31 + 1;
            a[i][j] = n;
        }
    }
    float timer = 0, current_time = 0, previous_time, delta_time;
    float timer1 = 0, current_time1 = 0, previous_time1, delta_time1;
    snake[0].x -= SIZE;

    while (!window.isClosed())
    {
        previous_time = current_time;
        current_time = SDL_GetTicks();
        delta_time = current_time - previous_time;
        timer += delta_time;
        if (timer > delay)
        {
            timer = 0;
            for (int i = snake.size() - 1; i > 0; --i)
            {
                snake[i].x = snake[i - 1].x;
                snake[i].y = snake[i - 1].y;
            } // di chuy???n theo ?????u con r???n
            for (int i = 2; i < snake.size(); i++)
            {
                if ((snake[0].x == snake[i].x) && (snake[0].y == snake[i].y))
                    pause = 2;
            }

            if (pause != 2)
            {
                if (dir == DOWN)
                    snake[0].y += SIZE; // c??c h?????ng ??i c???a con r???n
                if (dir == LEFT)
                    snake[0].x -= SIZE;
                if (dir == RIGHT)
                    snake[0].x += SIZE;
                if (dir == UP)
                    snake[0].y -= SIZE;
            }
            previous_time1 = current_time1;
            current_time1 = SDL_GetTicks();
            delta_time1 = current_time1 - previous_time1;
            timer1 += delta_time1;

            if (pause == 0)
            {
                if (timer1 > 5000)
                {
                    timer1 = 0;
                    switch (dir)
                    {
                    case RIGHT:
                    case LEFT:
                        n = rand() % 2 + 2;
                        break;
                    case UP:
                    case DOWN:
                        n = rand() % 2;
                        break;
                    }
                    dir = n;
                }
            }

            if (snake[0].x > WIDTH)
                snake[0].x = 0;

            if (snake[0].x < 0)
                snake[0].x = WIDTH; // d???ch chuy???n sang b??n kia t?????ng
            if (snake[0].y > HEIGHT)
                snake[0].y = 0;
            if (snake[0].y < 0)
                snake[0].y = HEIGHT;

            for (int i = 0; i < apple; i++)
                if ((g[i].x - magnet < snake[0].x && g[i].x + magnet > snake[0].x) && (g[i].y - magnet < snake[0].y && g[i].y + magnet > snake[0].y))
                {
                    g[i].x = rand() % (WIDTH - SIZE);
                    g[i].y = rand() % (HEIGHT - SIZE);
                    for (int j = 0; j < foodplus; j++)
                    {
                        snake.push_back(snake[1]);
                        
                    }
                }
        }

        pollEvents(window, rect);
        drawbg(a);
        for (int i=0; i <= snake.size() - 1; i++)
        {
            rect.x = snake[i].x;
            rect.y = snake[i].y;
            rect.draw();
        }
        for (int i = 0; i < apple; i++)
        {
            apple1.x = g[i].x;
            apple1.y = g[i].y;
            apple1.draw();
        }
        
        renderText(start, exit, start1, exit1);
        window.clear();
    }
    SDL_Quit();
    return 0;
}
