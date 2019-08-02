//Write a program to translate a triangle using 2D transformation.
#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");


    int x2,y2,x1,y1,tx,ty,x3,y3;
    printf("Enter three coordinate value: \n");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);//100 100 50 200 150 200


    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    printf("Enter Placing value: \n");
    scanf("%d%d",&tx,&ty); //200 50

    x1=x1+tx;
    y1=y1+ty;
    x2=x2+tx;
    y2=y2+ty;

    x3=x3+tx;
    y3=y3+ty;


    printf("After Translation: ");
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
