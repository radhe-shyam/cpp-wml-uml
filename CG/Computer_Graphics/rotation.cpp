#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>
 
 
int xrot(int x, int y, int angle)
{
    double ang = (angle * 3.1428) / 180;
    return (x * cos(ang) - y * sin(ang));
}
int yrot(int x, int y, int angle)
{
    double ang = (angle * 3.1428) / 180;
    return (x * sin(ang) + y * cos(ang));
}
 
 
int main()
{
    int x1,x2,y1,y2;                                       
 
    initwindow(500,500);
    moveto(250,250);
    lineto(350,350);
    moveto(250,250);
    lineto(xrot(350,350,90),yrot(350,350,90));
    system("pause");
    return 0;
}

/*
void TriAngle(int x1,int y1,int x2,int y2,int x3,int y3)
{
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
}
 
void Rotate(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int x,y,a1,b1,a2,b2,a3,b3,p=x2,q=y2;
    float Angle=10;
    printf("Enter the angle for rotation:");
    //scanf("%f",&Angle);
    for(Angle = 90 ; Angle<600;Angle+10)
    {
    Angle=(Angle*3.14)/180;
    a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
    b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
    a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
    b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
    a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
    b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
     printf("Rotate");
    TriAngle(a1,b1,a2,b2,a3,b3);
    delay(1);
    //cleardevice();
}
}
*/
