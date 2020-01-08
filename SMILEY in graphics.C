#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,x=200,y=200,i;
	char a;
	initgraph(&gd,&gm,"");
	for(i=0;i<50;i++)
	{
		clrscr();
		circle(x,y,80);
		setcolor(getmaxcolor());
		setfillstyle(SOLID_FILL, getmaxcolor());
		circle(x-40,y-20,10);
		circle(x+30,y-20,10);
		floodfill(x-39,y-19,getmaxcolor());
		floodfill(x+31,y-19,getmaxcolor());
		line(x-5,y+10,x-5,y+25);
		arc(x-5,y+20,220,320,40);
		x=x+5;
		delay(50);

	}
	delay(1000);
	circle(x-100,y-50,5);
	delay(1000);
	circle(x-130,y-55,5);
	delay(1000);
	circle(x-150,y-60,5);
	delay(1000);
	circle(x-180,y-70,5);
	delay(1000);
	rectangle(x-280,y-140,x-200,y-100);
	outtextxy(x-276,y-135,"I am the");
	outtextxy(x-276,y-125,"   best");
	/*a=getch();
	if(a=='a')
		x=x-5;
	if(a=='d')
		x=x+5;
	}while(a!='q');*/
	getch();
}