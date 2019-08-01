#include<stdio.h>
#include<graphics.h>;
using namespace std;

int main()
{
    int gdriver = DETECT,gmode,x,y;
    initgraph(&gdriver,&gmode,"");
    x = getmaxx()/2;
    y = getmaxy()/2;

    setcolor(RED);
    circle(x,y,50);
    setcolor(GREEN);
    circle(x,y,70);
    setcolor(WHITE);
    circle(x,y,90);
    setcolor(YELLOW);
    circle(x,y,110);
    getch();
    closegraph();
    return 0;
}
