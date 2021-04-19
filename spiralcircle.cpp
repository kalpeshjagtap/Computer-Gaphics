#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd,gm,i;
 gd=DETECT;
 gm=4;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 setcolor(RED);
 for(i=10;i<=150;i+=20)
 {
    arc(200,200,0,180,i);
    arc(210,200,180,360,i+10);
 }
 getch();
 return 0;
}
