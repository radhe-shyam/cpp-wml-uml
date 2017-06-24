#include<graphics.h>
#include<iostream>
#define col 10

using namespace std;
void bresenham(int x1,int y1,int x2,int y2)
{
   putpixel(x1,y1,col);
   int dx = x2 - x1;
   int p, dy = y2 - y1;
   if ( dx != 0 &&  (dy / dx) <= 1)
        {
        p = 2 * dy - dx;
        while(x1 <= x2 && y1 <= y2)
                 {
                     if(p < 0)
                          p = p + 2 * dy;
                     else
                         {
                         p = p + ( 2 * dy - 2 * dx );
                         y1++;
                         }
                     putpixel(++x1,y1,col);
                     }
        }
   else
       {
        p = 2 * dx - dy;
        while(x1 <= x2 && y1 <= y2)
                 {
                     if(p < 0)
                          p = p + 2 * dx;
                     else
                         {
                         p = p + ( 2 * dx - 2 * dy );
                         x1++;
                         }
                     putpixel(x1,++y1,col);
                     }
        }
}

int main1()
{
    int x1,x2,y1,y2;
    cout<<"Enter the Starting points (x,y) :";
    cin>>x1>>y1;
    cout<<"Enter the Ending points (x,y) :";
    cin>>x2>>y2;
    initwindow(200,200);
    bresenham(x1,y1,x2,y2);
    system("pause");
    return 0;
}
