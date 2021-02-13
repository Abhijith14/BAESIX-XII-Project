//THE BAESIX---THE SOCIAL MEDIA....

#include<logo.h>
/*==============================================================================
==============================================================================*/
class intr_o
{


	public:
		void intro();
		void graphicintro();
		char cpyrgt();
};
intr_o N;
/*==============================================================================
==============================================================================*/
void intr_o::intro()
{
	 int x,y;
	 int gd=DETECT, gm;
	 initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	 x=getmaxx()/2;
	 y=getmaxx()/2;
	 settextstyle(TRIPLEX_FONT,0,3);
	 setbkcolor(0);
	 setcolor(rand());
	 logo_ins();
	 settextstyle(TRIPLEX_FONT,0,6);
	 setbkcolor(rand());
	 setcolor(2);
	 outtextxy(x+15,y-110,"BAESIX");
	 settextstyle(SMALL_FONT,0,5);
	 outtextxy(x-25,y-120,"SOCIAL MEDIA REIMAGINED....");
	 settextstyle(8,0,1);
	 settextstyle(SMALL_FONT,0,6);
	 setcolor(4);
	 settextjustify(x,y);
	 outtextxy(x-300,y+120,"A");
	 delay(200);
	 outtextxy(x-280,y+120," C++");
	 delay(200);
	 outtextxy(x-235,y+120,"  PROJECT");
	 delay(200);
	 outtextxy(x-135,y+120,"  DONE");
	 delay(200);
	 outtextxy(x-70,y+120,"  BY:");
	 delay(200);
	 outtextxy(x-30,y+120,"  ABHIJITH, ");
	 delay(200);
	 outtextxy(x+80,y+120,"ANAGHA & ");
	 delay(200);
	 outtextxy(x+160,y+120," FAHIM.");
	 delay(200);
	 getch();
	 closegraph();
}
void intr_o::graphicintro()
{
	 int x,y,i,j;
	 int gd=DETECT, gm;
	 initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	 cleardevice();
	 x=getmaxx()/2;
	 y=getmaxy()/2;
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	 setbkcolor(rand());
	 setcolor(4);
	 int n=150;
	 for(i=0;i<30;i++)
	 {
	   for(j=50;j<100;j++)
	   {
	      setcolor(2);
	      settextstyle(SMALL_FONT,0, 10);
	      outtextxy(x,y,"Loading...");
	      settextstyle(SMALL_FONT,0, 5);
	      outtextxy(x+5,y+5,"Please Wait... ");
	      circle(x,y,j);
	      circle(x,y,n);
	      n--;
	      cleardevice();
	    }
	  }

	 getch();
	  closegraph();
}
char intr_o::cpyrgt()
{ //restorecrtmode();
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	char accept;
	cout<<"\n\t\t\t      DISCLAIMER";
	cout<<"\n\t\t\t      -_-_-_-_-_";
	cout<<"\n\n  BAESIX Is a service that offers free networking with no guarantees";
	cout<<"\n  for uptime or performance and reserves the right to terminate accounts";
	cout<<"\n  at any time for no specific reason. The Owners and operators of BAESIX";
	cout<<"\n  do not verify the information posted on the website and assume no liability";
	cout<<"\n  for the accuracy of such information.";
	cout<<"\n  BAESIX reserves the right to judge what is acceptable use of the website ";
	cout<<"\n  may be changed or deleted to ensure acceptable use without any liability";
	cout<<"\n  assumed for such actions.";
	cout<<"\n  By using this site your certify that:\n";
	cout<<"\n    \4You are at least 18 years of age.\n";
	cout<<"\n    \4You are using this site for personal reason and not for commercial gain.\n";
	cout<<"\n    \4You are using this site only when permitted by law.\n";
	cout<<"\n  This release of liability shall be contrued briadly to provide";
	cout<<"\n  a release and waiver to the maximum extent permissible under applicable";
	cout<<"\n  law. \n\n  I CERTIFY THAT I HAVE READ THIS DOCUMENT AND I FULLY UNDERSTAND";
	cout<<"\n  ITS CONTENT. I AM AWARE THAT THIS IS A RELEASE OF LIABILITY AND A";
	cout<<"\n  CONTRACT AND I AGREE TO IT OF MY OWN FREE WILL.";
	cout<<"\n\n\tAccept & Proceed?(Y/N):  ";
	cin>>accept;
	closegraph();
	return(accept);

}