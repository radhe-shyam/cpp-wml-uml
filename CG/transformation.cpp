#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
            int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
            int sx,sy,xt,yt,r;
            float t;
            printf("\t Program for basic transactions");
            printf("\n\t Enter the points of triangle");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            initwindow(1000,1000);
            setcolor(15);
            line(x1,y1,x2,y2);
            line(x2,y2,x3,y3);
            line(x3,y3,x1,y1);
            getch();
            printf("\n 1.Transaction\n \n 3.Scalling\n 4.exit");
            printf("Enter your choice:");
            scanf("%d",&c);
            switch(c)
            {
                     case 1:
                        
                                    printf("\n Enter the translation factor");
                                    scanf("%d%d",&xt,&yt);
                                    nx1=x1+xt;
                                    ny1=y1+yt;
                                    nx2=x2+xt;
                                    ny2=y2+yt;
                                    nx3=x3+xt;
                                    ny3=y3+yt;
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);
                                    getch();

                     
                   
                        case 3:
                                    printf("\n Enter the scalling factor");
                                    scanf("%d%d",&sx,&sy);
                                    nx1=x1*sx;
                                    ny1=y2*sy;
                                    nx2=x2*sx;
                                    ny2=y2*sy;
                                    nx3=x3*sx;
                                    ny3=y3*sy;
                                    line(nx1,ny1,nx2,ny2);
                                    line(nx2,ny2,nx3,ny3);
                                    line(nx3,ny3,nx1,ny1);
                                    getch();

                        case 4:
                                    break;
                        default:
                                    printf("Enter the correct choice");
                                    }
                                    closegraph();
                                    }
