#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void translate();
int main()
{
translate();
getch();
closegraph();
}
void translate()
{
initwindow(1000,1000);     
setcolor(2);
rectangle(100,150,150,100);
int tx,ty;
printf("\nEnter tx: ");
scanf("%d",&tx);
printf("\nEnter ty: ");
scanf("%d",&ty);
outtextxy(100,150,"Ater translation");
rectangle(100+tx,150+ty,150+tx,100+ty);
}
