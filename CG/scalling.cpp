#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void scalling();
int main()
{
scalling();
getch();
closegraph();
}
void scalling()
{
int sx,sy;
printf("\nEnter sx: ");
scanf("%d",&sx);
printf("\nEnter sy: ");
scanf("%d",&sy);
initwindow(1000,1000);
setcolor(2);
outtextxy(240,10,"SCALING");
outtextxy(238,20,"--------");
rectangle(100,150,150,100);
getch();
cleardevice();
outtextxy(240,10,"After SCALING");
outtextxy(238,20,"-------------");
rectangle(100*sx,150*sy,150*sx,100*sy);
}
