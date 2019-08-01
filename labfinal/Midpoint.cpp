#include<stdio.h>
#include<graphics.h>;
using namespace std;
void Midpoint(int ra,int x1,int y1)
{
    int x = ra;
    int y = 0;
    int tm = 0;

    while (x>=y)
    {
        putpixel(x1 + x, y1 + y, WHITE);
        putpixel(x1 + y, y1 + x, WHITE);
        putpixel(x1 - y, y1 + x, WHITE);
        putpixel(x1 - x, y1 + y, WHITE);
        putpixel(x1 - x, y1 - y, WHITE);
        putpixel(x1 - y, y1 - x, WHITE);
        putpixel(x1 + y, y1 - x, WHITE);
        putpixel(x1 + x, y1 - y, WHITE);
        delay(100);

        if (tm<0)
        {
            y++;
            tm+=2*y+1;
        }
        else
        {
            x--;
            tm-=2*x+1;
        }
    }

}
int main()
{
    int gdriver = DETECT,gmode;
    initgraph(&gdriver,&gmode,"");

    int r,x1,y1;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Enter the center coordinates: ");
    scanf("%d %d",&x1,&y1);

    Midpoint(r,x1,y1);
    getch();
    closegraph();
    return 0;
}
