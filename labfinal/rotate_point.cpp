//Write a program to rotate a point.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2;
    double degree,radian;
    int rotated_point_x,rotated_point_y;
    initgraph(&gd,&gm,"");
    cleardevice();
    printf("\n Enter an initial coordinates of the line = ");
    scanf("%d %d",&x1,&x1);
    printf("\n Enter a final coordinates of the line = ");
    scanf("%d %d",&x2,&y2);
    line(x1,y1,x2,y2);
    while(true)
    {
        printf("\n\n Now, Enter a degree = ");
        scanf("%lf",&degree);
        radian=degree*3.14/180;
        rotated_point_x=(int)(x1 +((x2-x1)*cos(radian)-(y2-y1)*sin(radian)));
        rotated_point_y=(int)(y1 +((x2-x1)*sin(radian)+(y2-y1)*cos(radian)));
        setcolor(RED);
        line(x1,y1,rotated_point_x,rotated_point_y);
    }
    getch();
    closegraph();
}
