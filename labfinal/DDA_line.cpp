#include<stdio.h>
#include<graphics.h>;
using namespace std;
void dda_line(int x1,int y1,int x2,int y2)
{
    double x,y,xinc,yinc;
    int dx,dy,length;
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
    putpixel(x,y,WHITE);
    for(int i=0; i<length; i++)
    {
        putpixel(x,y,WHITE);
        x=x+xinc;
        y=y+yinc;
        delay(20);
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
    dda_line(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}
