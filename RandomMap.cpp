#include"game.hpp"
void drawbg(int a[M][N]){
    for(int i=0; i<M;i++)
        for(int j=0; j<N;j++){
            switch(a[i][j]){
            case 1:      
                BG0.x=i*SIZE;
                BG0.y=j*SIZE;
                BG0.draw();  
            break;       
            case 2:      
                BG1.x=i*SIZE;
                BG1.y=j*SIZE;
                BG1.draw();  
            break;       
            case 3:      
                BG2.x=i*SIZE;
                BG2.y=j*SIZE;
                BG2.draw();  
            break;       
            case 4:      
                BG3.x=i*SIZE;
                BG3.y=j*SIZE;
                BG3.draw();  
            break;       
            case 5:      
                BG4.x=i*SIZE;
                BG4.y=j*SIZE;
                BG4.draw();  
            break;       
            case 6:      
                BG5.x=i*SIZE;
                BG5.y=j*SIZE;
                BG5.draw();  
            break;       
            case 7:      
                BG6.x=i*SIZE;
                BG6.y=j*SIZE;
                BG6.draw();  
            break;       
            case 8:      
                BG7.x=i*SIZE;
                BG7.y=j*SIZE;
                BG7.draw();  
            break;       
            case 9:      
                BG8.x=i*SIZE;
                BG8.y=j*SIZE;
                BG8.draw();  
            break;       
            case 10:
                BG9.x=i*SIZE;
                BG9.y=j*SIZE;
                BG9.draw();
            break;
            case 11:
                BG10.x=i*SIZE;
                BG10.y=j*SIZE;
                BG10.draw();
            break;
            case 12:
                BG11.x=i*SIZE;
                BG11.y=j*SIZE;
                BG11.draw();
            break;
            case 13:
                BG12.x=i*SIZE;
                BG12.y=j*SIZE;
                BG12.draw();
            break;
            case 14:
                BG13.x=i*SIZE;
                BG13.y=j*SIZE;
                BG13.draw();
            break;
            case 15:
                BG14.x=i*SIZE;
                BG14.y=j*SIZE;
                BG14.draw();
            break;
            case 16:
                BG15.x=i*SIZE;
                BG15.y=j*SIZE;
                BG15.draw();
            break;
            case 17:
                BG16.x=i*SIZE;
                BG16.y=j*SIZE;
                BG16.draw();
            break;
            case 18:
                BG17.x=i*SIZE;
                BG17.y=j*SIZE;
                BG17.draw();
            break;
            case 19:
                BG18.x=i*SIZE;
                BG18.y=j*SIZE;
                BG18.draw();
            break;
            case 20:
                BG19.x=i*SIZE;
                BG19.y=j*SIZE;
                BG19.draw();
            break;
            case 21:
                BG20.x=i*SIZE;
                BG20.y=j*SIZE;
                BG20.draw();
            break;
            case 22:
                BG21.x=i*SIZE;
                BG21.y=j*SIZE;
                BG21.draw();
            break;
            case 23:
                BG22.x=i*SIZE;
                BG22.y=j*SIZE;
                BG22.draw();
            break;
            case 24:
                BG23.x=i*SIZE;
                BG23.y=j*SIZE;
                BG23.draw();
            break;
            case 25:
                BG24.x=i*SIZE;
                BG24.y=j*SIZE;
                BG24.draw();
            break;
            case 26:
                BG25.x=i*SIZE;
                BG25.y=j*SIZE;
                BG25.draw();
            break;
            case 27:
                BG26.x=i*SIZE;
                BG26.y=j*SIZE;
                BG26.draw();
            break;
            case 28:
                BG27.x=i*SIZE;
                BG27.y=j*SIZE;
                BG27.draw();
            break;
            case 29:
                BG28.x=i*SIZE;
                BG28.y=j*SIZE;
                BG28.draw();
            break;
            case 30:
                BG29.x=i*SIZE;
                BG29.y=j*SIZE;
                BG29.draw();
            break;
            case 31:
                BG30.x=i*SIZE;
                BG30.y=j*SIZE;
                BG30.draw();
            break;
            case 32:
                BG31.x=i*SIZE;
                BG31.y=j*SIZE;
                BG31.draw();
            break;
            }
        }
}
void renderText(Text start, Text exit, Text start1, Text exit1){
        if(pause==0){
        if(inPos1==false&&inPos2==false){
        start.display(20,20,Window::renderer);
        exit.display(20,160,Window::renderer);
        }
        if(inPos1==true&&inPos2==true){
        start.display(20,20,Window::renderer);
        exit.display(20,160,Window::renderer);
        }
        if(inPos1==true&&inPos2==false){
        start1.display(20,20,Window::renderer);
        exit.display(20,160,Window::renderer);
        }
        if(inPos2==true&&inPos1==false){
        start.display(20,20,Window::renderer);
        exit1.display(20,160,Window::renderer);
        }
        }

}
