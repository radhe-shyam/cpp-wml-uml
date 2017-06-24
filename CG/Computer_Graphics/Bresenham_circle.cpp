#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int mainbc()
{
    int x=0,y,r;
    cout<<"Enter the radius of circle";
    cin>>r;
    initwindow(401,401);
    y=r;
    float d=3-2*r;
    for(; x<y ; x++ )
    {
            putpixel(200+x,200+y,10);
            putpixel(200+y,200+x,10);
            putpixel(200+y,200-x,10);
            putpixel(200+x,200-y,10);
            putpixel(200-x,200-y,10);
            putpixel(200-y,200-x,10);
            putpixel(200-y,200+x,10);
            putpixel(200-x,200+y,10);
            if(d<=0)
                    d=d+4*x+6;
            else
                    {
                    d=d+4*(x-y)+10;
                    y=y-1;
                    }
            delay(10);
    }
    system("pause");                    
    closegraph();
    return 0;              
    }
