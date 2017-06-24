#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void drawcircle(int);
int main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    initwindow(1000,1000);
    drawcircle(r);   
    getch();
    closegraph();
    return(0);
}
void drawcircle(int r)
{
    int x,y; 
    x=0;
    y=r;
    do
    {
            putpixel(200+x,200+y,10);
            putpixel(200+y,200+x,10);
            putpixel(200+y,200-x,10);
            putpixel(200+x,200-y,10);
            putpixel(200-x,200-y,10);
            putpixel(200-y,200-x,10);
            putpixel(200-y,200+x,10);
            putpixel(200-x,200+y,10);     
            x=x+1;
            y=sqrt((r*r)-(x*x));
    }
    while(x<=(r/sqrt(2)));
}
