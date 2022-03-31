#include<graphics.h>
#include<conio.h>
void ofApp()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TDM-GCC-32/bin/g++.exe");
	//drawing a stroke
	line(130, 100, 410, 410);

	//drawing a straight line across x axis.

	line(200, 400, 400, 400);


	//drawing a circle
	circle(140, 150, 80);

	
	//drawing a rectangle
	rectangle(40,70,410, 290);

    //setting up fill color to determine the color of the rectangle
	

	setcolor(BLUE);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(180, 180, BLUE);

	//drawing path (specificly im drawing an arc path)
	arc(300, 300, 0, 180, 30);

	getch();
	closegraph();
}