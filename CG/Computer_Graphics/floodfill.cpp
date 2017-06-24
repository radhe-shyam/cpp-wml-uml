#include<iostream>
#include<graphics.h>
using namespace std;
void flodfill(int x,int y,int f,int o)
{
int c;
c=getpixel(x,y);
if(c==o)
{
putpixel (x,y,f);
flodfill(x+1,y,f,o);
flodfill(x,y+1,f,o);
flodfill(x-1,y,f,o);
flodfill(x,y-1,f,o);
}
}
int mainf()
{
     initwindow(500,500);
     rectangle(50,50,300,300);
     setlinestyle(3,3,3);
     setcolor(5);
     circle(175,175,100);
     flodfill(150,150,10,0);
     system("pause");
     return 1;
 }
