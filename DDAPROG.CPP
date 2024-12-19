#include<stdlib.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>

void DDAline(int x1,int y1,int x2,int y2);
void DDACircle(int xc,int yc,int r);

int main()
{
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
errorcode = graphresult();
if( errorcode != grOk)
{
cout<<" Error in Graphic adapter\n";
cout<<"Press any key to exit";
getch();
exit(1);
}


   DDAline (10,10,620,10);
   DDAline(620,10,620,460);
   DDAline(620,460,10,460);
   DDAline(10,460,10,10);
   DDAline(315,10,315,460);
   for(int i=0;i<5;i++)
   DDACircle(315,235,i);
   DDACircle(315,235,60);
   arc(620,10,180,270,12);
   arc(10,460,0,90,12);
   for(i=0;i<5;i++)
   DDACircle(15,455,i);
   for(i=0;i<3;i++)
   DDACircle(617,13,i);
   getch();
   closegraph();
   return 0;
}


void DDAline(int x1,int y1,int x2,int y2)
{
int i;
float xinc,yinc,steps,x,y;
xinc=abs(x2-x1); yinc=abs(y2-y1);
setcolor(getmaxcolor());
	if (xinc >= yinc)
	{
		steps = xinc;
	}
	else
	{
		steps = yinc;
	}
	xinc = (x2-x1)/(float)steps;
      yinc = (y2-y1)/(float)steps;

	/* Initialise starting point
	-----------------------------*/
	x=x1;  	y=y1;
	/* Initialise loop counter
	-----------------------------*/
	i = 1;

	while(i <= steps)
	{
	putpixel(x,y,15);
	x = x + xinc;
	y = y + yinc;
	i = i + 1;
	/* Delay is purposely inserted to observe the line drawing process
		-----------------------------*/
	//delay(100);
	}




//	Midpointcirlce(xc,yc,r);
}

void DDACircle(int xc,int yc,int r)
{
	int x,y,p;
	x=0;
	y=r;
	p = 1-r;
do
{
	putpixel(xc+x,yc+y,15);
	putpixel(xc+y,yc+x,15);
	putpixel(xc+x,yc-y,15);
	putpixel(xc+y,yc-x,15);
	putpixel(xc-x,yc-y,15);
	putpixel(xc-x,yc+y,15);
	putpixel(xc-y,yc+x,15);
	putpixel(xc-y,yc-x,15);

		if (p < 0)
		{
			x = x+1;
			y = y;
			p = p + 2*x + 1;
		}
		else
		{
			x= x+1;
			y= y-1;
			p = p + 2*(x-y) + 1;
		}
		delay(2);
	}while(x < y);
       //	getch();
	//closegraph();
}



