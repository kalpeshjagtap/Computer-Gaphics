#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1415


void rotate_wheel(int xc,int yc,int t)
{
    int x,y;
    for(t=t; t<180; t=t+60)
    {
        x=50*cos(t*PI/180);
        y=50*sin(t*PI/180);
        line(xc+x,yc+y,xc-x,yc-y);
    }
    circle(xc,yc,50);
    circle(xc,yc,52);
}


int main()
{
    int gd=0,gm=0,i;
    initgraph(&gd,&gm,"c:\\tc\\bgi");


    for(i=0; i<640; i++)
    {
        setcolor(YELLOW);
        rotate_wheel(i,240,i%60);
        delay(5);
        cleardevice();
        rotate_wheel(i,240,i%60);
    }
    getch();
    closegraph();
    return 0;

}
