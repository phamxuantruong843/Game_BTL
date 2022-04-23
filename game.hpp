#include "rect.hpp"
#ifndef GAME_HPP
#define GAME_HPP
int dir =0,pause = 0;
const int LEFT=0;
const int RIGHT=1;
const int UP=2;
const int DOWN=3,num = 50;
float delay = 10;
const int SIZE=37, foodplus=10;
const int M=30,N=20;
const int WIDTH=M*SIZE,HEIGHT=N*SIZE;
const int apple = 10;
const int magnet =SIZE;
const int COLISION_START=20;
bool isClick=false;
bool inPos1=false,inPos2=false;

Window window("snake", WIDTH, HEIGHT);

Rect BG0(SIZE,SIZE,50,50,"img/1.png");
Rect BG1(SIZE,SIZE,50,50,"img/2.png");
Rect BG2(SIZE,SIZE,50,50,"img/3.png");
Rect BG3(SIZE,SIZE,50,50,"img/4.png");
Rect BG4(SIZE,SIZE,50,50,"img/5.png");
Rect BG5(SIZE,SIZE,50,50,"img/6.png");
Rect BG6(SIZE,SIZE,50,50,"img/7.png");
Rect BG7(SIZE,SIZE,50,50,"img/8.png");
Rect BG8(SIZE,SIZE,50,50,"img/9.png");
Rect BG9(SIZE,SIZE,50,50,"img/10.png");
Rect BG10(SIZE,SIZE,50,50,"img/11.png");
Rect BG11(SIZE,SIZE,50,50,"img/12.png");
Rect BG12(SIZE,SIZE,50,50,"img/13.png");
Rect BG13(SIZE,SIZE,50,50,"img/14.png");
Rect BG14(SIZE,SIZE,50,50,"img/15.png");
Rect BG15(SIZE,SIZE,50,50,"img/16.png");
Rect BG16(SIZE,SIZE,50,50,"img/17.png");
Rect BG17(SIZE,SIZE,50,50,"img/18.png");
Rect BG18(SIZE,SIZE,50,50,"img/19.png");
Rect BG19(SIZE,SIZE,50,50,"img/20.png");
Rect BG20(SIZE,SIZE,50,50,"img/21.png");
Rect BG21(SIZE,SIZE,50,50,"img/22.png");
Rect BG22(SIZE,SIZE,50,50,"img/23.png");
Rect BG23(SIZE,SIZE,50,50,"img/24.png");
Rect BG24(SIZE,SIZE,50,50,"img/25.png");
Rect BG25(SIZE,SIZE,50,50,"img/26.png");
Rect BG26(SIZE,SIZE,50,50,"img/27.png");
Rect BG27(SIZE,SIZE,50,50,"img/28.png");
Rect BG28(SIZE,SIZE,50,50,"img/29.png");
Rect BG29(SIZE,SIZE,50,50,"img/30.png");
Rect BG30(SIZE,SIZE,50,50,"img/31.png");
Rect BG31(SIZE,SIZE,50,50,"img/32.png");
#endif 