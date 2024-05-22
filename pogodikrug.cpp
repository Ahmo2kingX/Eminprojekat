#include <iostream>
#include <cstdlib>
#include <graphics.h>
#include <ctime>

using namespace std;

int main(){
    int gd=9;
    int gm=2;
    initgraph(&gd,&gm,"");
    cleardevice();
    setcolor(WHITE);
    setbkcolor(BLACK);
    int x;
    int y;
    int covjek;

    bool pog=false;
    srand(time(NULL));

    int robot;
    robot=(rand()%3)+1;

    circle(110,250,75);
    circle(310,250,75);
    circle(510,250,75);

    while(pog==false){
        if(ismouseclick(WM_LBUTTONDOWN)){
            if(35<=mousex() && mousex()<=185 && 175<=mousey() && mousey()<=325){
                covjek=1;
                x=mousex();
                y=mousey();
                pog=true;
            }
            if(235<=mousex() && mousex()<=385 && 175<=mousey() && mousey()<=325){
                covjek=2;
                x=mousex();
                y=mousey();
                pog=true;
            }
            if(435<=mousex() && mousex()<=585 && 175<=mousey() && mousey()<=325){
                covjek=3;
                x=mousex();
                y=mousey();
                pog=true;
            }
            clearmouseclick(WM_LBUTTONDOWN);
        }

    }

    if(robot==1){
            setfillstyle(1,GREEN);
            floodfill(110,250,WHITE);
            setfillstyle(1,RED);
            floodfill(310,250,WHITE);
            floodfill(510,250,WHITE);
    }else if(robot==2){
            setfillstyle(1,GREEN);
            floodfill(310,250,WHITE);
            setfillstyle(1,RED);
            floodfill(110,250,WHITE);
            floodfill(510,210,WHITE);
    }else{
            setfillstyle(1,GREEN);
            floodfill(510,250,WHITE);
            setfillstyle(1,RED);
            floodfill(110,250,WHITE);
            floodfill(310,250,WHITE);
    }

    if(robot==covjek){
        outtextxy(250,20,"bravo ubo si");
    }else{
        outtextxy(250,20,"vise srece drugi put");
    }

    getch();
    closegraph();
    return 0;
}
