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
    int i,x,y; 
    for(i=90;i>=45;i--)
    {
            x=r*cos(i);
            y=r*sin(i);           
            putpixel(200+x,200+y,10);
            putpixel(200+y,200+x,10);
            putpixel(200+y,200-x,10);
            putpixel(200+x,200-y,10);
            putpixel(200-x,200-y,10);
            putpixel(200-y,200-x,10);
            putpixel(200-y,200+x,10);
            putpixel(200-x,200+y,10);     
    }
}
