//Write a program to rotate a triangle.
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=0,gm,x1,y1,x2,y2,x3,y3;
    int rotated_x1,rotated_y1,rotated_x2,rotated_y2,rotated_x3,rotated_y3;
    double s,c, angle;
    initgraph(&gd, &gm, "");
    setcolor(WHITE);
    printf("Enter coordinates of triangle: ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);//sx:400 400 400 300 300 400
    cleardevice();
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    while(true)
    {
         setcolor(RED);
        printf("Enter rotation angle: ");
        scanf("%lf", &angle);
        c = cos(angle *3.1416/180);
        s = sin(angle *3.1416/180);
        rotated_x1 = floor(x1 * c + y1 * s);
        rotated_y1 = floor(-x1 * s + y1 * c);
        rotated_x2 = floor(x2 * c + y2 * s);
        rotated_y2 = floor(-x2 * s + y2 * c);
        rotated_x3 = floor(x3 * c + y3 * s);
        rotated_y3 = floor(-x3 * s + y3 * c);
        //cleardevice();
        line(rotated_x1, rotated_y1,rotated_x2, rotated_y2);
        line(rotated_x2,rotated_y2, rotated_x3,rotated_y3);
        line(rotated_x3, rotated_y3, rotated_x1, rotated_y1);
    }
    getch();
    closegraph();
    return 0;
}
