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
    int p,x=0,y=r; 
    p=3-(2*r);
    for(x=0;x<y;x++)
    {
            
            if(p<0)
            {
                   x=x+1;
                   p=p+(4*x)+6;       
            }
            else
            {
                   x=x+1;
                   y=y-1;
                   p=p+(4*x)-(4*y)+10;
            }
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
