#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void plot(int xc,int yc,int x,int y)
{
     putpixel(xc+x,yc+y,2);
     putpixel(xc-x,yc+y,2);
     putpixel(xc+x,yc-y,2);
     putpixel(xc-x,yc-y,2);
     putpixel(xc+y,yc+x,2);
     putpixel(xc-y,yc+x,2);
     putpixel(xc+y,yc-x,2);
     putpixel(xc-y,yc-x,2);
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
    void cir(int xc,int yc,int r)
     {
          
          int x=0;
          int y=r;
          int pk=1-r;
          plot(xc,yc,x,y);
          while(x<y)
          {
                    if(pk<0)
                    {
                            x=x+1;
                            pk=pk+(2*x)+3;
                            
                            }
                    else
                    {
                        x=x+1;
                        y=y-1;
                        pk=pk+(2*x)-(2*y)+5;
                        }
          plot(xc,yc,x,y);
          }  
          
           }
     int main()
     {
         int xc,yc,r;
          initwindow(800,800);
          printf("enter the radius:");
          scanf("%d",&r);
          printf("enter the X,Y coordinate:");
          scanf("%d%d",&xc,&yc);
          cir(xc,yc,r);
           bound(200,200,1,2);   
          printf("enter the 2nd circle radius:");
          scanf("%d",&r);
          printf("enter the X,Y coordinate:");
          scanf("%d%d",&xc,&yc);
          cir(xc,yc,r);
           bound(150,150,4,2);   
           getch();
          }
         
          
          
