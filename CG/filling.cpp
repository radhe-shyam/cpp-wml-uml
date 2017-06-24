#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bfill4(int x,int y,int fcolor,int bcolor)
{
          int current;
          current = getpixel(x,y);
          if(current != bcolor && current!= fcolor)
          {
               putpixel(x,y,fcolor);
               delay(10);
               bfill4(x,y+1,fcolor,bcolor);
               bfill4(x-1,y+1,fcolor,bcolor);
               bfill4(x,y-1,fcolor,bcolor);
               bfill4(x-1,y-1,fcolor,bcolor);
          }
}
void bfill8(int x,int y,int fcolor,int bcolor)
{
          int current;
          current= getpixel(x,y);
          if(current != bcolor && current != fcolor)
          {
               putpixel(x,y,fcolor);
               delay(10);
               bfill8(x,y+1,fcolor,bcolor);
               bfill8(x,y-1,fcolor,bcolor);
               bfill8(x+1,y-1,fcolor,bcolor);
               bfill8(x+1,y+1,fcolor,bcolor);
               bfill8(x-1,y-1,fcolor,bcolor);
               bfill8(x-1,y+1,fcolor,bcolor);
               bfill8(x+1,y,fcolor,bcolor);
               bfill8(x-1,y,fcolor,bcolor);
          }
}  
int main()
{
          int n,ch,xc,yc,r,bcolor,fcolor;
          printf("Enter Xc=");
          scanf("%d",&xc);
          printf("Enter Yc");
          scanf("%d",&yc);
          printf("\n Enter Radious=");
          scanf("%d",&r);
          printf("\nEnter boundary color code=");
          scanf("%d",&bcolor);
          printf("\nEnter fill color code=");
          scanf("%d",&fcolor);
          printf("\n 1. 4connected");
          printf("\n 2. 8connected");
          printf("\n 3. Exit");
          printf("\nEnter your choice:à");
          scanf("%d",&ch);
          initwindow(1000,1000);
          switch(ch)
          {
               case 1:
                   circle(xc,yc,r);
                   bfill4(xc,yc,fcolor,bcolor);
                   break;
               case 2:
                   circle(xc,yc,r);
                   bfill8(xc,yc,fcolor,bcolor);
                   break;
               case 3:
                   exit(0);
               default:
                   printf("\n Invalid choise:");
          }
          getch();
          closegraph();
          return(0);
}
