#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void drawcircle(int);
void f_fill(int x,int y, int i,int o)
{
	if(getpixel(x,y)!=i&&getpixel(x,y)!=o)
	{
		putpixel(x,y,i);
//		delay(1);

		f_fill(x,y+1,i,o);
		f_fill(x-1,y,i,o);
		f_fill(x,y-1,i,o);
		f_fill(x+1,y,i,o);
	}
	
//	putpixel(x,y,o);
}
int main()
{
    int r1,r2;
    printf("Enter the radius of inner circle:");
    scanf("%d",&r1);
    printf("Enter the radius of outer circle:");
    scanf("%d",&r2);
    initwindow(1000,1000);           
    drawcircle(r1);
    f_fill(200,200,12,15);
    drawcircle(r2);
    f_fill(200+r1,200+r1,10,15);
    //circle(200,200,15);
    //f_fill(200,200,10,15);
    getch();
    closegraph();
    return(0);
}
void drawcircle(int r)
{
    int p,x=0,y=r; 
    p=1-(r);
    for(x=0;x<=y;)
    {
            putpixel((200+x),(200+y),15);
            putpixel((200+y),(200+x),15);
            putpixel((200+y),(200-x),15);
            putpixel((200+x),(200-y),15);
            putpixel((200-x),(200-y),15);
            putpixel((200-y),(200-x),15);
            putpixel((200-y),(200+x),15);
            putpixel((200-x),(200+y),15);      
            if(p<=0)
            {
                   x=x+1;
                   p=p+(2*x)+3;       
            }
            else
            {
                   x=x+1;
                   y=y-1;
                   p=p+(2*x)-(2*y)+5;
            }
            
    }
}
