#include <graphics.h>
#include <conio.h>

main() 
{	
	int left=100,top=100,right=200,bottom=200,x= 300,y=150,radius=50;
	int numero, color;
	printf("\n 1-Rectangulo");
	printf("\n 2-Cuadrado");
	printf("\n 3-Redondo");
	printf("\n\n Elige una figura: ");
	scanf("\n%d",&numero);
	
	printf("\n 1-Rojo");
	printf("\n 2-Verde");
	printf("\n 3-Amarillo");
	printf("\n\n Elige color de la figura: ");
	scanf("\n%d",&color);
	
	if (numero==1 && color==1)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");	
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, RED);
			setcolor(BLACK);
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(getmaxx()/2-100,100, "RECTANGULO");
	
			bar(getmaxx()/2-150 ,150,getmaxx()/2+150 ,200);
			setfillstyle(SOLID_FILL, RED);
			bar(getmaxx()/2-150,200, getmaxx()/2+150, 250);
			setfillstyle(SOLID_FILL, RED);
			bar(getmaxx()/2-150,250, getmaxx()/2+150, 300);
		}	
	if (numero==1 && color==2)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, GREEN);
			setcolor(BLACK);
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(getmaxx()/2-100,100, "RECTANGULO");

			bar(getmaxx()/2-150 ,150,getmaxx()/2+150 ,200);
			setfillstyle(SOLID_FILL, GREEN);
			bar(getmaxx()/2-150,200, getmaxx()/2+150, 250);
			setfillstyle(SOLID_FILL, GREEN);
			bar(getmaxx()/2-150,250, getmaxx()/2+150, 300);
		}
	if (numero==1 && color==3)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, YELLOW);
			setcolor(BLACK);
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(getmaxx()/2-100,100, "RECTANGULO");

			bar(getmaxx()/2-150 ,150,getmaxx()/2+150 ,200);
			setfillstyle(SOLID_FILL, YELLOW);
			bar(getmaxx()/2-150,200, getmaxx()/2+150, 250);
			setfillstyle(SOLID_FILL, YELLOW);
			bar(getmaxx()/2-150,250, getmaxx()/2+150, 300);
		}
	if (numero==2 && color==1)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, RED);
			setcolor(RED);
			settextstyle(3,HORIZ_DIR,4);		
			outtextxy(getmaxx()/2-100,100, "Cuadrado");
			rectangle(left, top, right, bottom);
			setfillstyle(SOLID_FILL,RED);
			floodfill(left+10,top+10,RED);
		}
	if (numero==2 && color==2)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, GREEN);
			setcolor(GREEN);
			settextstyle(3,HORIZ_DIR,4);		
			outtextxy(getmaxx()/2-100,100, "Cuadrado");
			rectangle(left, top, right, bottom);
			setfillstyle(SOLID_FILL,GREEN);
			floodfill(left+10,top+10,GREEN);			
		}
	if (numero==2 && color==3)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, YELLOW);
			setcolor(YELLOW);
			settextstyle(3,HORIZ_DIR,4);		
			outtextxy(getmaxx()/2-100,100, "Cuadrado");
			rectangle(left, top, right, bottom);
			setfillstyle(SOLID_FILL,YELLOW);
			floodfill(left+10,top+10,YELLOW);		
		}
	if (numero==3 && color==1)
		{
			int gd = DETECT, gm;
			initgraph(&gd, &gm, "C:\\TC\\BGI");
			setbkcolor(WHITE);
			cleardevice();
			setfillstyle(SOLID_FILL, RED);
			setcolor(RED);
			settextstyle(3,HORIZ_DIR,5);		
			outtextxy(getmaxx()/3-100,100, "Circulo");
			circle(x, y, radius);
			setfillstyle(SOLID_FILL,RED);
			floodfill(left+10,top+10,RED);
		}	
	getch();
	closegraph();
}
