#include<iostream>
#include<graphics.h>
using namespace std;
void midpoint(int r)
{
    int p,x=0,y=r; 
    p=1-r;
    for(;x<=y;x++)
    {
            putpixel((200+x),(200+y),15);
            putpixel((200+y),(200+x),15);
            putpixel((200+y),(200-x),15);
            putpixel((200+x),(200-y),15);
            putpixel((200-x),(200-y),15);
            putpixel((200-y),(200-x),15);
            putpixel((200-y),(200+x),15);
            putpixel((200-x),(200+y),15);      
            if(p<0)
                   p += 2 * x + 1; 
            else
            {
                   y--;;
                   p += 2 * x - 2 * y + 1;
            }
            
    }
}
int mainm()
{
    cout<<"Enter the Radius : ";
    int r;
    cin>>r;
    initwindow(1000,1000);
    midpoint(r);
    system("pause");
    closegraph();
    return 0;
}
