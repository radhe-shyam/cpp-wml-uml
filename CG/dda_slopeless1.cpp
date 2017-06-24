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
    int x=0,y,m; 
    x=x1;
    y=y1;
    m=(y2-y1)/(x2-x1);
    y=y+m;
    putpixel(x,y,15);
    while(x<=x2&&y<=y2)
    {
              x=x+1;
              y=y+m;
              putpixel(x,y,15);                            
    }
}
