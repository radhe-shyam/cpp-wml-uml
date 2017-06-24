#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
void Bresenham(int x1,int y1,int x2,int y2) //    Bresenham for slope is less then equal to 1
{
    int dx = x2 - x1, dy = y2 - y1,p;
    p = 2 * dy - dx;
    for(;x1 <= x2; x1++)
            {
                  if(p < 0)
                       p += 2 * dy;
                  else
                      {
                         p += 2 * dy - 2 * dx;
                         y1++;
                      }
                  putpixel(x1,y1,15);
            }
}
int mainb()
{
    int x1,x2,y1,y2;
    cout<<"Enter starting point(x,y):: ";
    cin>>x1>>y1;
    cout<<"Enter Ending point(x2,y2):: ";
    cin>>x2>>y2;
    initwindow(200,200);
    Bresenham(x1,y1,x2,y2);
    system("pause");
    return 0;
}
