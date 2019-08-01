#include<stdio.h>
#include<graphics.h>;
using namespace std;

int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"");
    int border_color = WHITE;

    setcolor(border_color);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,100,150,150);
    floodfill(101,101,border_color);

    getch();
    closegraph();
    return 0;
}
