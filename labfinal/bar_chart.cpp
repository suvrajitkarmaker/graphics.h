//Create a bar chart
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=0,gm;
    initgraph(&gd, &gm, "");
    line(100,400,100,50);
	line(100,400,500,400);

	setfillstyle(SOLID_FILL,RED);
	bar(150,200,200,400);

	setfillstyle(SOLID_FILL,GREEN);
	bar(230,250,270,400);

	setfillstyle(SOLID_FILL,BLUE);
	bar(300,120,350,400);

	setfillstyle(SOLID_FILL,YELLOW);
	bar(380,180,430,400);
    getch();
    closegraph();
    return 0;
}
