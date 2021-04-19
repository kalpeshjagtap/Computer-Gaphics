#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd,gm,x,y,r,i,j=0,maxx,maxy,high;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

	//road
	setcolor(WHITE);
	line(0,401,639,401);

	//ball color & size
	x=20;
	y=380;
	r=20;
	setcolor(RED);
	circle(x,y,r);
	setfillstyle(SOLID_FILL,RED);
	floodfill(x,y,RED);
	high=300;//max height
	delay(1000);

	while(high>=0)
	{
		//jump
		for(i=0;i<=high;i++)
		{
			cleardevice();
			setcolor(WHITE);
			line(0,401,639,401);
			if(i%4==0)
				j++;
			x=20+j;
			y=380-i;
			setcolor(RED);
			circle(x,y,r);
			floodfill(x,y,RED);
			delay(3);
		}
		//fall
		for(i=high;i>=0;i--)
		{
			cleardevice();
			setcolor(WHITE);
			line(0,401,639,401);
			if(i%5==0)
				j++;
			x=20+j;
			y=380-i;
			setcolor(RED);
			circle(x,y,r);
			floodfill(x,y,RED);
			delay(1);
		}
		high=high-40;
	}
	getch();
	closegraph();
	return 0;
}
