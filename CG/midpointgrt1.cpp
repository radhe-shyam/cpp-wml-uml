#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void drawline(int x1,int y1,int x2,int y2);
int main()
{
    int x1,x2,y1,y2;
    printf("Enter starting point(x1,y1):: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter Ending point(x2,y2):: ");
    scanf("%d%d",&x2,&y2);
    initwindow(800,800);
    drawline(x1,y1,x2,y2);
    getch();
    closegraph();
    
}
void drawline(int x1,int y1,int x2,int y2)
{
    int x=0,y,p; 
    x=x2-x1;
    y=y2-y1;
    p=y-(x/2);
    putpixel(x1,y1,15);
    while(x1<=x2&&y1<=y2)
    {
              if(p<0)
              {
                     p=p+y;
                     x1=x1+1;
                     putpixel(x1,y1,15);       
              }
              else
              {
                     p=p+y-x;
                     x1=x1+1;
                     y1=y1+1;
                     putpixel(x1,y1,15);       
              }
    }
}
