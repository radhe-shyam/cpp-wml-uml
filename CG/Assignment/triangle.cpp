#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void linedraw(int,int,int,int);
void b_fill(int,int,int,int);
int main()
{
        int x1,x2,y1,y2;
        initwindow(800,800);
        linedraw(100,200,200,100);
        linedraw(200,100,300,200);
        linedraw(100,200,300,200);
        b_fill(200,110,11,15);
        getch();
        closegraph();
        return 0;
}
void linedraw(int x1,int y1,int x2,int y2)
{
     int m;
     m=((y2-y1)/(x2-x1));
     if(m<1)
     {
      while(x1<=x2)
      {
       y1=y1+m;
       x1=x1+1;
       putpixel(x1,y1,15);
       }
      }
      else
      {
          while(y1<=y2)
      {
       y1=y1+1;
       x1=x1+(1/m);
       putpixel(x1,y1,15);
       }
      }
          
}
void b_fill(int x,int y, int i,int o)
{
	if(getpixel(x,y)!=i&&getpixel(x,y)!=o)
	{
		putpixel(x,y,i);
//		delay(1);

		b_fill(x,y+1,i,o);
		b_fill(x-1,y,i,o);
		b_fill(x,y-1,i,o);
		b_fill(x+1,y,i,o);
	}
	
}
