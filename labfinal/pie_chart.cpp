//Create a pie chart
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=0,gm;
    initgraph(&gd, &gm, "");
    int  mx = getmaxx()/2;
	int  my = getmaxy()/2;

	setfillstyle(SOLID_FILL,RED);
	pieslice(mx, my, 0, 75, 100);


	setfillstyle(SOLID_FILL,GREEN);
	pieslice(mx, my, 75, 225, 100);

	setfillstyle(SOLID_FILL,BLUE);
	pieslice(mx, my, 225, 360, 100);
    getch();
    closegraph();
    return 0;
}
