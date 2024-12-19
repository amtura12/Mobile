//libraries
#include<graphics.h>  // gra[hics
#include<iostream.h>  // cin /  cout
#include<stdlib.h>  // exit()
#include<conio.h>  // getch()

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
line(40, 40, 620, 40);
line(40, 40, 40, 440);
line(40, 440, 620,440 );
line(620, 440, 620, 40);
line(40, 240, 620,240 );

circle(getmaxx()/2, getmaxy()/2, 50);
for(int i =0; i<8; i++)
{
//setcolor(i/10);
circle(getmaxx()/2, getmaxy()/2, i);
}
line(getmaxx()/2-130, 40, getmaxx()/2-130, 130);
line(getmaxx()/2 -130, 130, getmaxx()/2 +130, 130);
line(getmaxx()/2 + 130, 130, getmaxx()/2+130, 40);
line(getmaxx()/2-50, 40, getmaxx()/2-50, 50);
line (getmaxx()/2-50, 50, getmaxx()/2+50, 50);
line(getmaxx()/2 +50, 50, getmaxx()/2+50, 40);
line(getmaxx()/2-120, 440, getmaxx()/2-120, 350);
line(getmaxx()/2-120, 350, getmaxx()/2+ 120, 350);
line(getmaxx()/2+120, 350, getmaxx()/2+120, 440);

line(getmaxx()/2-50, 430, getmaxx()/2-50, 440);
line(getmaxx()/2-50, 430, getmaxx()/2+ 50, 430);
line(getmaxx()/2+50, 430, getmaxx()/2+50, 440);
for(i=0; i<5; i++)
circle(getmaxx()/2, 380, i);

for(i=0; i<5; i++)
circle(getmaxx()/2, getmaxy()/2-150, i);
arc(620, 40, 180, 270, 20);
for(i =0; i<4; i++)
{
circle(620, 40, i);
circle(40, 40, i);
circle (40, 440, i);
circle(620, 440, i);
}
arc(40, 440, 0, 90, 20);
arc(620,440, 90, 180, 20);
arc(40, 40, 270, 0, 20);

getch();
closegraph();
return 0;
}



