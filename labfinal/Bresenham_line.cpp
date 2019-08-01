#include<stdio.h>
#include<graphics.h>;
using namespace std;
void Bresenham_line(int x1,int y1,int x2,int y2)
{
    int dx, dy, tm, x, y;

    dx=x2-x1;
    dy=y2-y1;

    x=x1;
    y=y1;

    tm=2*dy-dx;
    while(x<x2)
    {
        if(tm<0)
        {
            putpixel(x,y,7);
            delay(20);
            tm=tm+2*dy;
        }
        else
        {
            putpixel(x,y,7);
            delay(20);
            y=y+1;
            tm=tm+2*dy-2*dx;
        }
        x=x+1;
    }

}
int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"");

    int x1,y1,x2,y2;
    printf("Enter the starting coordinates: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the ending coordinates: ");
    scanf("%d%d",&x2,&y2);
    Bresenham_line(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}
