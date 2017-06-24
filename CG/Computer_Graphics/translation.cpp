#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int mainttt()
{
    int dx,dy;
    printf("Enter the tranlation value for x : ");
    scanf("%d",&dx);
    printf("Enter the translation value for y : ");
    scanf("%d",&dy);
    initwindow(500,500);
    rectangle(50,50,150,150);
    rectangle(50+dx,50+dx,150+dy,150+dy);
    system("pause");
    return 0;
}
