#include"rect.cpp"
struct s{
    float x, y;
};
class Object{
    public:
        s pos;
        Rect rect(int w, int h, int _x, int _y, const std::string &image_path);
        Rect image;
        int dir;
        void move();
        Object();
};
void Object::move(){
    	if (dir==DOWN) pos.y+=1;       //các hướng đi của con rắn 
        if (dir==LEFT) pos.x-=1;        
        if (dir==RIGHT) pos.x+=1;
        if (dir==UP)    pos.y-=1;
}
Object::Object(){
    pos.x=rand()%WIDTH;
    pos.y=rand()%HEIGHT;
    dir=rand()%4;
}
Rect Object::rect(int w, int h, int _x, int _y, const std::string &image_path){

}