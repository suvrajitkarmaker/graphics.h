#include<stdio.h>
#include<graphics.h>;
using namespace std;

int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"");

    double x,y,xinc,yinc;
    int x1,y1,x2,y2,dx,dy,length;
    printf("Enter the starting coordinates: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the ending coordinates: ");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>abs(dy))
        length=abs(dx);
    else
        length=abs(dy);
    xinc=dx/(double)length;
    yinc=dy/(double)length;
    x=x1;
    y=y1;
    putpixel(x,y,10);
    for(int i=0; i<length; i++)
    {
        putpixel(x,y,WHITE);
        x=x+xinc;
        y=y+yinc;
        delay(20);
    }
    getch();
    closegraph();
    return 0;
}
