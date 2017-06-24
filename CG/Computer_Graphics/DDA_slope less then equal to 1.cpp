#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
void dda(int x1,int y1,int x2,int y2) //    DDA for slope is less then equal to 1
{
    float m,y=y1; 
    m = fabs(y2-y1)/(x2-x1);
    for(; x1 <= x2; x1++,y += m)
              putpixel(x1,(int)round(y),15);       
}
int main3()
{
    int x1,x2,y1,y2;
    cout<<"Enter starting point(x,y):: ";
    cin>>x1>>y1;
    cout<<"Enter Ending point(x2,y2):: ";
    cin>>x2>>y2;
    initwindow(200,200);
    dda(x1,y1,x2,y2);
    system("pause");
    return 0;
}
