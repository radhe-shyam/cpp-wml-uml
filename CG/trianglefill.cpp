#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
void bound(int x,int y,int bcol,int fcol);
void draw(int x1,int y1,int x2,int y2);
int main()
{
     int x1,y1,x2,y2;
     int gdriver=DETECT,gmode,gerror;
     initgraph(&gdriver,&gmode,"");
     printf("\n vertex 1:\n");
     printf("\n enter the x1 & y1 starting point:\n");
     scanf("%d%d",&x1,&y1);
     printf("\n enter the x2 & y2 ending point:\n");
     scanf("%d%d",&x2,&y2);
     printf("\n the line is shown below:\n");
     draw(x1,y1,x2,y2);
     printf("\n vertex 2:\n");
     printf("\n enter the x1 & y1 starting point:\n");
     scanf("%d%d",&x1,&y1);
     printf("\n enter the x2 & y2 ending point:\n");
     scanf("%d%d",&x2,&y2);
     printf("\n the line is shown below:\n");
     draw(x1,y1,x2,y2);
     printf("\n vertex 3:\n");
     printf("\n enter the x1 & y1 starting point:\n");
     scanf("%d%d",&x1,&y1);
     printf("\n enter the x2 & y2 ending point:\n");
     scanf("%d%d",&x2,&y2);
     printf("\n the line is shown below:\n");
     draw(x1,y1,x2,y2);
     bound(100,125,2,1);
     getch();
     }
     void draw(int x1,int y1,int x2,int y2)
     {
          float x,y,xinc,yinc,dx,dy;
          int k;
          int step;
          dx=x2-x1;
          dy=y2-y1;
          if(abs(dx)>abs(dy))
          step=abs(dx);
          else
          step=abs(dy);
          xinc=dx/step;
          yinc=dy/step;
          x=x1;
          y=y1;
          putpixel(x,y,1);
          for(k=1;k<=step;k++)
          {
          x=x+xinc;
          y=y+yinc;
          putpixel(x,y,1);
          }
          }
     void bound(int x,int y,int fcol,int bcol)
     {
          //printf("\n in filling part");
          if(getpixel(x,y)!=bcol && getpixel(x,y)!=fcol)
          {
          delay(0);
          putpixel(x,y,fcol);
          bound(x+1,y,fcol,bcol);
          bound(x-1,y,fcol,bcol);
          bound(x,y+1,fcol,bcol);
          bound(x,y-1,fcol,bcol);
          }
          }
