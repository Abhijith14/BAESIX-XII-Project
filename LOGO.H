//LOGO INTRO....

void logo_ins()
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	////////OUTLINE
	setcolor(WHITE);
	arc(160,220,240,210,100);
	line(75,270,57,320);
	line(57,320,111,308);
	setcolor(GREEN);
	arc(160,220,235,215,85);
	line(90,270,80,300);
	line(80,300,112,290);
	////////INNER
	setcolor(WHITE);
	arc(205,185,170,260,90);
	arc(134,178,320,150,20);
	arc(195,255,250,120,20);
	arc(205,185,185,250,57);
}

