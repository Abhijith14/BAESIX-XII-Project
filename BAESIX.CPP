//THE BAESIX---THE SOCIAL MEDIA....
#include<iostream.h>
#include<stdlib.h>
#include<DOS.h>
#include<process.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<time.h>
/*==============================================================================
==============================================================================*/
class intr_o
{


	public:
		void intro();
		void graphicintro();
		char cpyrgt();
		char license();
		char acknow();
};
intr_o N;
/*==============================================================================
==============================================================================*/
class outlin_e
{
	public:
		char SL;
		void ASK();
		void license();

};
class use_r
{
	private:
		char name[30],gender;
		char pass1[30],pass2[30];
		char email[50];
		char city[30],state[30],country[30],hometown[30];
		char rel[10],dob[20],phone[10];
	public:
		void modify(int);
		char* ret_city()
		{
			return city;
		}
		char* ret_state()
		{
			 return state;
		}
		char* ret_country()
		{
			return country;

		}
		char* ret_hometown()
		{
			   return hometown;
		}
		char* ret_user()
		{
			return email;
		}
		char* ret_pass()
		{
			return pass2;
		}
		char* ret_name()
		{
			return name;
		}
		char* ret_rel()
		{
			return rel;
		}
		char* ret_phone()
		{
			return phone;
		}
		void newdat();

		void d_lay();
		void e_ror();
		void D_el();
		void wai_t();
		void inbox();
};
class idea_share
{
       private:
		char story[30],date[9],typer[30];
       public:
		idea_share()
		{
		      strcpy(story,"Sorry. No Stories Available!");
		}
		void Enter();
		char* Show()
		{
		      return(story);
		}
		char* ret_date()
		{
		      return(date);
		}
		char* ret_type()
		{
			return(typer);
		}
};
class hoo_k
{
	private:
		int ans;
		char ch1;
		void show1();
	public:

		void work();
		void logout(char);
		char* oldloc();
};
class C_msg
{
	 public:
		 int nomb;
		 char To[30],from[30],cont[50],check;
		 void message();
		 void clearnotify();
		 void notifyme();
		 C_msg()
		 {
			nomb=0;
			check='N';
		 }
		 char ret_check()
		 {
			return check;
		 }
		 char* ret_to()
		 {
			return To;
		 }


};
outlin_e A;       // OBJECT DECLARED
use_r B;          // OBJECT DECLARED
hoo_k C;          // OBJECT DECLARED
C_msg M;          // OBJECT DECLARED
idea_share I;     // OBJECT DECLARED
/*==============================================================================
==============================================================================*/
char label[30],prof;
int c1=0,c2=0,num1,BAESIX;
void login(char*,char*);
void user();
void create();
void del(char);
void online();
union REGS in,out;
int callmouse()
{
	in.x.ax=1;
	int86(51,&in,&out);
	return 1;
}
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
      //	closegraph();
}

void intr_o::intro()
{
	 int x,y;
	 int gd=DETECT, gm;
	 initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	 callmouse();
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
	 outtextxy(x+80,y+120,"ANAGHA &  ");
	 delay(200);
	 outtextxy(x+140,y+120,"  FAHIM");
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
	 callmouse();
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

	  closegraph();
}
char intr_o::cpyrgt()
{ //restorecrtmode();
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	char accept;
	callmouse();
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
char intr_o::license()
{
	clrscr();
	char agree1;
	int gd=DETECT, gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	callmouse();
	cout<<"\n\t\t\t      LICENSE- THE BAESIX";
	cout<<"\n\t\t\t      -_-_-_-_-_-_-_-_-_-_";
	cout<<"\n\nCopyright@ 2018-2019 \2The Codewriter Team.\2";
	cout<<"\nEnd User Licence Agreement for The BAESIX. Please read carefully.:";
	cout<<"\n\nBy using this website (or any site based on this site) you shall be ";
	cout<<"\ndeemed to have accepted the terms and conditions set out below.";
	cout<<"\n\n1. The BAESIX is making this website freely available on the basis that it is ";
	cout<<"      accepted as found and that the user checks its fitness for purpose prior to ";
	cout<<"    use. ";
	cout<<"\n\n2.This website is provided as/is, without any express or implied warranties ";
	cout<<"\n    whatsoever.";
	cout<<"\n\n3.In no event will the authors, partners or contributors be held liable for any ";
	cout<<"    damages, ";
	cout<<"claims or other liabilities direct or indirect, arising from the ";
	cout<<"\n    use/access of this website. ";
	cout<<"\n\nThe BAESIX will from time to time update the Site. However, The BAESIX ";
	cout<<"\naccepts no obligation ";
	cout<<"to provide any support to users.";
	cout<<"\n\n\t\t Read Our Full License T&C?(Y/N):  ";
	cin>>agree1;
	getch();
	closegraph();
	return(agree1);
}
char intr_o::acknow()
{
	clrscr();
	char accept;
	int gd=DETECT, gm;
	initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
	callmouse();
	cout<<"\n\t\t\t      ACKNOWLEDGEMENT";
	cout<<"\n\t\t\t      -_-_-_-_-_-_-_-_";
	cout<<"\n\nThe \"The BAESIX\" team Gratefully acknowledges JYOTHI TEACHER for her Inspiration";
	cout<<"and LEKSHMI TEACHER for instilling the seeds of C++ in us!";
	cout<<"\nThe team also acknowledges the whole CLASS XII for supporting us to make this a huge SUCCESS!";
	cout<<"\n\n\tAccept & Proceed?(Y/N):  ";
	cin>>accept;
	closegraph();
	return(accept);
}
void clearslate_protocol()
{
	clrscr();
	   int i;
	char ce=178,ch;
		clrscr();
			callmouse();
			int gd5=DETECT,gm5;
			initgraph(&gd5,&gm5,"C:\\TURBOC3\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
				line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
		  //	online();

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
			gotoxy(10,15);
			cout<<"ARE YOU SURE TO EXIT ? :  ";
			cin>>ch;
			closegraph();
	if(ch=='Y')
	{
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		circle(15,10,5);        //DES
		circle(30,10,5);        //DES
		circle(45,10,5);        //DES
		setcolor(GREEN);
		settextstyle(0,0,4);
		outtextxy(160,60,"BAESIX");
		line(10,20,629,20);    // horizontal line
		line(10,460,629,460);  // horizontal line
		line(10,100,629,100);  // horizontal line
		line(10,20,10,460);    // vertical line
		line(629,20,629,460);  // vertical line
		circle(300,200,30);      //PROFILE
		line(278,220,230,300);   //PROFILE
		line(322,222,370,300);   //PROFILE
		circle(300,230,100);     //PROFILE
		gotoxy(10,23);
		callmouse();
		cout<<"ANY UNSAVED DATA WILL BE LOST!!!";
		gotoxy(6,24);
		for(i=0;i<70;i++)
		{
			delay(35);
			setcolor(4);
			cout<<ce;
		}
		closegraph();
		clrscr();
		int gd1=DETECT,gm1;
		initgraph(&gd1,&gm1,"C:\\TURBOC3\\BGI");
		circle(15,10,5);        //DES
		circle(30,10,5);        //DES
		circle(45,10,5);        //DES
		setcolor(GREEN);
		settextstyle(0,0,4);
		outtextxy(160,60,"BAESIX");
		line(10,20,629,20);    // horizontal line
		line(10,460,629,460);  // horizontal line
		line(10,100,629,100);  // horizontal line
		line(10,20,10,460);    // vertical line
		line(629,20,629,460);  // vertical line
		circle(300,200,30);      //PROFILE
		line(278,220,230,300);   //PROFILE
		line(322,222,370,300);   //PROFILE
		circle(300,230,100);     //PROFILE
		gotoxy(20,23);
		cout<<"EXITTING ";
		for(int i=0;i<20;i++)
		{
			delay(100);
			cout<<'\4' ;
		}

		gotoxy(20,23);
		cout<<"THANK YOU!!";
		delay(2000);
		exit(0);
		closegraph();
	}

	else
	{
		B.d_lay();
		clrscr();

		A.ASK();
	}
	getch();

}

char* find_name()
{
	char a[30];
	fstream N;
	N.open("create.dat",ios::in|ios::binary);
	while(!N.eof())
	{
		N.read((char*)&B,sizeof(B));
		if(strcmp(label,B.ret_user())==0)
		{
			strcpy(a,B.ret_name());
		}
	}
	N.close();
	return(a);
}
void idea_share::Enter()
{
	  fstream N;
	  N.open("idea.dat",ios::in|ios::out|ios::binary);
	  _strdate(date);
	  strcpy(typer,find_name());
	  gotoxy(5,9);
	 cout<<"ENTER YOUR IDEA TO BE SHARED :  ";
	 settextstyle(0,0,0);
	 outtextxy(40,150,"(max 30 characters)");
	 gets(story);
	  N.write((char*)&I,sizeof(I));gets(story);
	  N.close();
}
void ideatime()
{
	 char datebuf[9];
	   fstream N;
	  N.open("idea.dat",ios::in|ios::out|ios::binary);

	  while(!N.eof())
	  {

		char k[30];
		N.read((char*)&I,sizeof(I));
		gotoxy(5,11);
		strcpy(k,I.Show());

		if(strcmp(k,"Sorry. No Stories Available!")==0)
		{

		      I.Enter();
		      B.inbox();
		}
		else
		{
			_strdate(datebuf);
		     if(strcmp(datebuf,I.ret_date())==0)
		     {
			gotoxy(7,9);
			cout<<"STORY BY "<<I.ret_type()<<" ( "<<I.ret_date()<<" )";
			gotoxy(7,10);
			cout<<"-----------------";
		      //	gotoxy(25,9);
		      //	cout<<"CONTENT";
			gotoxy(9,13);
			puts(k);
		  /*	gotoxy(25,11);
			puts(k);
			puts(I.ret_date());  */

		     }
		     else
		     {
		      //	 remove("idea.dat");
			   I.Enter();
			      B.inbox();
		     }

		  }
	  }
	  N.close();
	  getch();

}
void outlin_e::license()
{
	cout<<"\t\tCopyright \2æ2018-2019æ\2 The Codewriter Team.";
	cout<<"\n\tEnd User Licence Agreement for The BAESIX. Please read carefully.;";
	cout<<"\n\tBy using this website (or any site based on this site) you shall be deemed";
	cout<<"to have accepted the terms and conditions set out below.";
	cout<<"\n\tThe BAESIX is making this website freely available on the basis that";
	cout<<"it is accepted as found and that the user checks its fitness for purpose prior to use.";
	cout<<"\n\tThis website is provided ‘as-is', without any express or implied warranties whatsoever.";
	cout<<"In no event will the authors, partners or contributors be held liable for any damages,";
	cout<<"claims or other liabilities direct or indirect, arising from the use/access of this website.";
	cout<<"\n\tThe BAESIX will from time to time update the Site. However, The BAESIX accepts no obligation";
	cout<<"to provide any support to users.";
}

void C_msg::message()
{
	clrscr();


			int gd3=DETECT,gm3;
			initgraph(&gd3,&gm3,"C:\\TURBOC3\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
	fstream N;
	N.open("compose.dat",ios::out|ios::in|ios::app|ios::binary);
	nomb++;
	callmouse();
	gotoxy(9,12);
	cout<<"COMPOSE TO         : ";
	gets(To);
	gotoxy(9,14);
	cout<<"TYPE YOUR MESSAGE  : ";
	gets(cont);
	strcpy(from,find_name());
	N.write((char*)&M,sizeof(M));
	N.close();
	B.inbox();
	C.work();
	closegraph();

}


void C_notify()
{
	callmouse();
	fstream N;
	N.open("compose.dat",ios::in|ios::binary);
	while(!N.eof())
	{
	       N.read((char*)&M,sizeof(M));
	       if(strcmp(M.ret_to(),find_name())==0)
	       {
		  c1=c1+1;
		  if(M.ret_check()=='N')
		      c2=c2+1;
	       }
	}
	N.close();
}
void C_msg::clearnotify()
{

		callmouse();

	fstream N;
	N.open("compose.dat",ios::out|ios::app|ios::binary);
	while(!N.eof())
	{
		N.read((char*)&M,sizeof(M));
		if(strcmp(ret_to(),find_name())==0)
		{
			if(ret_check()=='N')
			{
				check='Y';
				N.write((char*)&M,sizeof(M));
			}

		}
	}
	B.d_lay();
	C.work();
	N.close();
}
void C_msg::notifyme()
{
	 int i=0,y=9;
	 callmouse();
		clrscr();

			int gd3=DETECT,gm3;
			initgraph(&gd3,&gm3,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
	 fstream N;
	N.open("compose.dat",ios::in|ios::binary);
	gotoxy(7,y);
	cout<<"FROM";

	gotoxy(25,y);
	cout<<"CONTENT";
	for(i=1;i<=c2;i++)
	{
      //	do
     //	{
       //	     i++;
	     y=y+2;
	     gotoxy(3,y);

	     while(!N.eof())
	     {
		    N.read((char*)&M,sizeof(M));
		    if(strcmp(ret_to(),find_name())==0)
		    {
			cout<<i<<".";
			gotoxy(7,y);
			puts(from);

			gotoxy(25,y);
			puts(cont);


		  //  else
		    //   cout<<"ERROR";
		    //cout<<"\n";      //use for loop instead of puts(next line);
		    break;
		    }
	     }

	}//while(c2==i);
	getch();
	C.work();
	closegraph();

}
void online()
{
	callmouse();
	ifstream AN;
	BAESIX=0;
	AN.open("create.dat",ios::in|ios::binary);
	while(!AN.eof())
	{
	      AN.read((char*)&B,sizeof(B));
	      BAESIX++;
	}
	AN.close();
 //	BAESIX-=2;
	ifstream N;
	N.open("create.dat",ios::in|ios::binary);
	int i=10,t=0;
	char a[30],b[30];
	       strcpy(b,find_name());
	      while(!N.eof())
	    {
	      N.read((char*)&B,sizeof(B));



	    t++;
	    if(t==BAESIX)
		 break;
	      gotoxy(60,i);

		       strcpy(a,B.ret_name());
	      if(strcmp(b,a)!=0)
	      {     puts(a);
		    i++;

	      }

	    /*  strcpy(an,find_name());
	      if(strcmp(an,B.ret_name())!=0)
	      {
		if(strcmp(an,B.ret_name())==0)
			continue;
		strcpy(a,B.ret_name());
		puts(a);
	      }  */

	}
	N.close();
      //	N.open("create.dat",ios::in|ios::binary);
     //	while(!N.eof())
     //	{
       //		N.read((char*)&B,sizeof(B));
	   //	if(strcmp(b,B.ret_name())==0)
	 //		continue;
		gotoxy(56,5);

		puts(b);
  //	}
   //	N.close();


}
void use_r::e_ror()
{
	clrscr();
	int i;
	char ce=178;
	callmouse();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE


	gotoxy(10,23);
	cout<<"!!ERROR 404";
	gotoxy(6,24);
	for(i=0;i<70;i++)
	{
		delay(35);
		cout<<ce;
	}
	closegraph();
	A.ASK();
}
void use_r::D_el()
{
	clrscr();
	int i;
	char ce=178;
	callmouse();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE


	gotoxy(10,23);
	cout<<"!!DELETING YOUR ACCOUNT..";
	gotoxy(6,24);
	for(i=0;i<70;i++)
	{
		delay(35);
		cout<<ce;
	}
	closegraph();
	A.ASK();
}
void use_r::d_lay()
{
	int i;
	char ce=178;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE


	gotoxy(10,23);
	callmouse();
	cout<<"LOADING...Please Wait..";
	gotoxy(6,24);
	for(i=0;i<70;i++)
	{
		delay(35);
		setcolor(4);
		cout<<ce;
	}

       closegraph();
}
void use_r::wai_t()
{
       int i;
	char ce=178;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE


	gotoxy(10,23);
	callmouse();
	cout<<"MAKING CHANGES TO YOUR ACCOUNT...Please Wait..";
	gotoxy(6,24);
	for(i=0;i<70;i++)
	{
		delay(35);
		setcolor(4);
		cout<<ce;
	}

       closegraph();
       A.ASK();
}
void use_r::inbox()
{
       int i;
	char ce=178;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE


	gotoxy(10,23);
	callmouse();
	cout<<"SENTING YOUR MESSAGE...Please Wait..";
	gotoxy(6,24);
	for(i=0;i<70;i++)
	{
		delay(35);
		setcolor(4);
		cout<<ce;
	}

       closegraph();
       C.work();
}
void outlin_e::ASK()
{
	char k;
	int c;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	callmouse();
       //	do
     //	{

	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(629,20,629,460);  // vertical line
	circle(300,200,30);      //PROFILE
	line(278,220,230,300);   //PROFILE
	line(322,222,370,300);   //PROFILE
	circle(300,230,100);     //PROFILE

       //	A.outline1();

     //  mouseposi(cl);
	settextstyle(0,0,1);
	outtextxy(100,420,"* ENTER ESCAPE BUTTON TO EXIT FROM THE PROGRAM!*");
	gotoxy(20,23);
	cout<<"SIGNUP/LOGIN(S/L)=  ";
	cin>>SL;

	if(SL=='S'||SL=='s')
	{
		B.d_lay();
		k=N.cpyrgt();
		if(k=='Y'||k=='y')
		create();
		else
		exit(0);

	}
	else if(SL=='L'||SL=='l')
	{
		B.d_lay();
		user();

	}
	else if(SL==27)
		clearslate_protocol();
       else
	 B.e_ror();
	closegraph();
}
void hoo_k::work()
{
	char ch;
	int num;
	c2=0;
	clrscr();
	callmouse();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,460,629,460);  // horizontal line
	line(429,130,629,130); // horizontal line
	line(10,20,10,460);    // vertical line
	line(100,20,100,100);  // vertical line
	line(429,20,429,460);  // vertical line
	line(629,20,629,460);  // vertical line
	gotoxy(60,8);
	cout<<"FRIENDS ONLINE";
	online();
	gotoxy(9,12);
	cout<<"HOW CAN I HELP YOU?? \2\2";
	rectangle(60,150,400,190);    //HELP
	rectangle(60,200,400,400);    //HELP Info

	settextstyle(1,0,1);
	outtextxy(70,220,"1. SHARE YOUR IDEAS.");
	outtextxy(70,240,"2. EDIT YOUR PROFILE.");
	outtextxy(70,260,"3. DELETE YOUR PROFILE.");
	outtextxy(70,280,"4. VIEW NOTIFICATIONS.");
	outtextxy(70,300,"5. COMPOSE A MESSAGE.");
	outtextxy(70,320,"6. VIEW LICENSE");
	outtextxy(70,340,"7. LOG OUT.");
	setcolor(WHITE);
	line(30,60,50,35);     //HOME
	line(50,35,70,60);     //HOME
	line(30,60,70,60);     //HOME
	line(30,60,30,90);     //HOME
	line(70,60,70,90);     //HOME
	line(30,90,70,90);     //HOME

	line(45,90,45,75);     //DOORHOME
	line(55,90,55,75);     //DOORHOME
	line(45,75,55,75);     //DOORHOME

	circle(580,50,10);     //PROFILE
	line(575,58,560,80);   //PROFILE
	line(585,58,600,80);   //PROFILE
	circle(580,60,30);     //PROFILE

	gotoxy(35,12);
	cin>>ans;
	closegraph();
	switch(ans)
	{
		case 1:
			B.d_lay();
			clrscr();
			callmouse();
			int gd4=DETECT,gm4;
			initgraph(&gd4,&gm4,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

			ideatime();
			closegraph();
			C.work();
			break;

		case 2:
			B.d_lay();

			clrscr();
			callmouse();
			int gd1=DETECT,gm1;
			initgraph(&gd1,&gm1,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			gotoxy(9,12);
			cout<<"HOW CAN I HELP YOU?? \2\2";
			rectangle(60,150,400,190);    //HELP
			rectangle(60,200,400,400);    //HELP Info
			setcolor(GREEN);
			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
			settextstyle(0,0,1);
			outtextxy(40,420,"*YOU CANNOT EDIT YOUR NAME,DOB,GENDER AND ID!*");
			outtextxy(70,220,"1. CHANGE YOUR RELATIONSHIP STATUS!.");
			outtextxy(70,240,"2. EDIT YOUR PHONE NUMBER!.");
			outtextxy(70,260,"3. CHANGE YOUR LOCATION INFO!.");
			outtextxy(70,280,"4. CHANGE YOUR PASSWORD!.");
			outtextxy(70,300,"5. GO BACK TO HOME.");


			gotoxy(35,12);
			cin>>num;
			closegraph();
			B.modify(num);
			break;
		case 3:
			B.d_lay();
			clrscr();
			callmouse();
			int gd2=DETECT,gm2;
			initgraph(&gd2,&gm2,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
				line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

			gotoxy(25,16);
			cout<<"ARE YOU SURE TO DELETE THE ACCOUNT??  ";
			cin>>ch;
			closegraph();
			del(ch);
			break;
		case 4:
			char ch5;
			clrscr();
			callmouse();
			int gd3=DETECT,gm3;
			initgraph(&gd3,&gm3,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
			ifstream AN;
			AN.open("compose.dat",ios::in|ios::binary);
			if(!AN)
			{
			gotoxy(25,16);
			cout<<"FILE NOT FOUND";
			getch();
			B.d_lay();
			C.work();
			break;}
			C_notify();
			gotoxy(25,16);
			if(c2!=0)
			{
				c2--;
				gotoxy(10,15);
			     cout<<"You have "<<c2<<" notifications: ";
			     settextstyle(0,0,0);
			     outtextxy(70,240,"Want to see/clear(S/C) ? ");
			     cin>>ch5;
			     if(ch5=='S')
			     {
				closegraph();
				M.notifyme();
			     }
			     else if(ch5=='C')
			     {
				closegraph();
				M.clearnotify();
			     }
			}
			else
			{
				cout<<"NO NOTIFICATIONS";
			}
			closegraph();
			AN.close();
			break;
		case 5:
			B.d_lay();
			clrscr();
			callmouse();
			int nd=DETECT,nm;
			initgraph(&nd,&nm,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

			closegraph();
			M.message();
			break;
		case 6:

			B.d_lay();
			char agree1,agree2,k;
			k=N.license();
			if(k=='y' || k=='Y')
			{
				k=N.cpyrgt();
				if(k=='y'||k=='Y')
					C.work();
				else
					B.e_ror();
			}
			else if(k=='n'|| k=='N')
			{
			cout<<"\n\n\t\t Want to see Our ACKNOWLEDGEMENTS?(Y/N):  ";
			cin>>agree2;
			if(agree2=='y' || agree2=='Y')
			{
			       k=N.acknow();

				if(k=='y'|| k=='Y')
					C.work();
				else
					B.e_ror();
			}
			}
			else
				B.e_ror();
			getch();
			break;
		case 7:

			clrscr();
			callmouse();
			int gd5=DETECT,gm5;
			initgraph(&gd5,&gm5,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
				line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(429,130,629,130); // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(429,20,429,460);  // vertical line
			line(629,20,629,460);  // vertical line
			gotoxy(60,8);
			cout<<"FRIENDS ONLINE";
			online();

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE
			gotoxy(10,15);
			cout<<"ARE YOU SURE TO LOGOUT ? :  ";
			cin>>ch;
			closegraph();
			C.logout(ch);
			break;

		default:
			gotoxy(35,12);
			B.d_lay();
			C.work();
			break;
	}
	//C.work();
	getch();

}
void del(char ch1)
{
	callmouse();
	if(ch1=='Y'||ch1=='y')
	{
		char a[30],b[30];
		ifstream A;
		ofstream N;
		N.open("temp_create.dat",ios::out|ios::binary);
		A.open("create.dat",ios::in| ios::binary);
		if(!A)
		{
			cout<<"File not Found";
			exit(0);
		}
		else
		{

		     strcpy(a,find_name());
			while(!A.eof())
			{
				A.read((char*)&B, sizeof(B));
				strcpy(b,B.ret_name());
				if(strcmp(a,b)!=0)
				{
					N.write((char*)&B, sizeof(B));
				}

			}
		}
		N.close();
		A.close();
		remove("create.dat");
		rename("temp_create.dat", "create.dat");
		B.D_el();

	}
	else
	{
		C.work();
	}
}


char* hoo_k::oldloc()
{
	char temp1_h[30],temp1_c[30],temp1_s[30],temp1_coun[30];
	B.d_lay();
	clrscr();
	callmouse();
	int grd=DETECT,grm;
	initgraph(&grd,&grm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES

	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,460,629,460);  // horizontal line
	line(429,130,629,130); // horizontal line
	line(10,20,10,460);    // vertical line
	line(100,20,100,100);  // vertical line
	line(429,20,429,460);  // vertical line
	line(629,20,629,460);  // vertical line
	gotoxy(60,8);
	cout<<"FRIENDS ONLINE";
	online();
	gotoxy(9,12);
	cout<<"HOW CAN I HELP YOU?? \2\2";
	rectangle(60,150,400,190);    //HELP
	rectangle(60,200,400,400);    //HELP Info
	setcolor(GREEN);
	line(30,60,50,35);     //HOME
	line(50,35,70,60);     //HOME
	line(30,60,70,60);     //HOME
	line(30,60,30,90);     //HOME
	line(70,60,70,90);     //HOME
	line(30,90,70,90);     //HOME

	line(45,90,45,75);     //DOORHOME
	line(55,90,55,75);     //DOORHOME
	line(45,75,55,75);     //DOORHOME

	circle(580,50,10);     //PROFILE
	line(575,58,560,80);   //PROFILE
	line(585,58,600,80);   //PROFILE
	circle(580,60,30);     //PROFILE

	settextstyle(0,0,1);
	outtextxy(40,420,"*LOCATION INFO!*");
	outtextxy(70,220,"1. CHANGE YOUR HOMETOWN!.");
	outtextxy(70,240,"2. CHANGE YOUR CITY!.");
	outtextxy(70,260,"3. CHANGE YOUR STATE!.");
	outtextxy(70,280,"4. CHANGE YOUR COUNTRY!.");
	outtextxy(70,300,"5. GO BACK TO HOME.");
	gotoxy(35,12);
	cin>>num1;
	closegraph();
	B.d_lay();
	clrscr();
	callmouse();
	int gd1=DETECT,gm1;
	initgraph(&gd1,&gm1,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(100,20,100,100);  // vertical line
	line(629,20,629,460);  // vertical line
       //ONLINE	gotoxy(60,8);

      //HELP	gotoxy(9,12);

	line(30,60,50,35);     //HOME
	line(50,35,70,60);     //HOME
	line(30,60,70,60);     //HOME
	line(30,60,30,90);     //HOME
	line(70,60,70,90);     //HOME
	line(30,90,70,90);     //HOME

	line(45,90,45,75);     //DOORHOME
	line(55,90,55,75);     //DOORHOME
	line(45,75,55,75);     //DOORHOME

	circle(580,50,10);     //PROFILE
	line(575,58,560,80);   //PROFILE
	line(585,58,600,80);   //PROFILE
	circle(580,60,30);     //PROFILE

	gotoxy(3,9);
	if(num1==1)
	{
		cout<<"ENTER YOUR OLD HOMETOWN: ";
		gets(temp1_h);
		return(temp1_h);

	}
	else if(num1==2)
	{
		cout<<"ENTER YOUR OLD CITY: ";
		gets(temp1_c);
		return(temp1_c);

	}
	else if(num1==3)
	{
		cout<<"ENTER YOUR OLD STATE: ";
		gets(temp1_s);
		return(temp1_s);

	}
	else if(num1==4)
	{
		cout<<"ENTER YOUR OLD COUNTRY: ";
		gets(temp1_coun);
		return(temp1_coun);

	}
	else if(num1==5)
	{
		closegraph();
		C.work();

		return(0);
	}
	else
	{
		cout<<"ERROR 404";
		C.work();
		return(0);

	}
	closegraph();
	return(0);
}

void use_r::modify(int n1)
{       int f=0;
	char Fs[30];
	switch(n1)
	{
		case 1:
			char temp1_ph[10],temp_ph[10];
		       clrscr();
		       callmouse();
			int grd=DETECT,grm;
			initgraph(&grd,&grm,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(629,20,629,460);  // vertical line
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

		       fstream N;
		       N.open("create.dat",ios::in|ios::out|ios::app|ios::binary);
		       gotoxy(3,9);
		       cout<<"ENTER YOUR OLD RELATIONSHIP STATUS: ";
		       gets(temp1_ph);
		       if(!N)
		       {
			cout<<"File not Found";
			exit(0);
		       }
		       else
		       {

			  while(!N.eof())
			  {
				N.read((char*)&B,sizeof(B));
				strcpy(Fs,B.ret_rel());
				if(strcmp(temp1_ph,Fs)==0)
				{
				  f=1;
				  N.seekg(0,ios::cur);
				  cout<<"ENTER YOUR NEW RELATIONSHIP STATUS..";
				  gets(temp_ph);
				  strcpy(rel,temp_ph);
				  //del(Y);
			       //	  N.seekg(-sizeof(B),ios::cur);
				//  N.write((char*)&B,sizeof(B));
				N.seekp(N.tellg() - sizeof(B));
				N.write((char*)&B, sizeof(B));

				}
			       /*	else
				  {
				    cout<<"INVALID";
				    getch();
				  }    */

			  }
				if(f==0)
				{
				   cout<<"INVALID";
				 //  getch();
				}
		       }
		       N.close();
		       if(f==1)
		       B.wai_t();
		       getch();
		       closegraph();
		       break;

		case 2:
		       char temp1_phone[10],temp_phone[10];
		       clrscr();
		       callmouse();
			int grd1=DETECT,grm1;
			initgraph(&grd1,&grm1,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(629,20,629,460);  // vertical line
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

		       fstream N_phone;
		       N_phone.open("create.dat",ios::in|ios::app|ios::out|ios::binary);
		       gotoxy(3,9);
		       cout<<"ENTER YOUR OLD PHONE NUMBER: ";
		       gets(temp1_phone);
		       if(!N_phone)
		       {
			cout<<"File not Found";
			exit(0);
		       }
		       else
		       {

			  while(!N_phone.eof())
			  {
				N_phone.read((char*)&B,sizeof(B));
				strcpy(Fs,B.ret_phone());
				if(strcmp(temp1_phone,Fs)==0)
				{       f=1;

				  //N_phone.seekg(0,ios::cur);
				  cout<<"ENTER YOUR NEW PHONE NUMBER..";
				  gets(temp_phone);
				  strcpy(phone,temp_phone);
				  N_phone.seekp(N_phone.tellg() - sizeof(B));
				  N_phone.write((char*)&B, sizeof(B));
				}
			      /*	else
				  {
				    cout<<"INVALID";
				    getch();
				  }    */

			  }
				if(f==0)
				{
				   cout<<"INVALID";
				 //  getch();
				}
		       }
		       N_phone.close();
		       B.wai_t();
		       getch();
		       closegraph();
		       break;

		case 3:
		       char num[30];
		       char temp_h[30],temp_c[30],temp_s[30],temp_coun[30];
		       clrscr();
		       callmouse();
			int gd1=DETECT,gm1;
			initgraph(&gd1,&gm1,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(629,20,629,460);  // vertical line
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

		     closegraph();
		       fstream N_loc;
		       N_loc.open("create.dat",ios::in| ios::out|ios::binary);
		       C.oldloc();
		       if(!N_loc)
		       {
			cout<<"File not Found";
			exit(0);
		       }
		       else
		       {

			  while(!N_loc.eof())
			  {
				N_loc.read((char*)&B,sizeof(B));
				if(num1==1)
				{
				  if(strcmp(C.oldloc(),B.ret_hometown())==0)
				  {
				    N_loc.seekg(0,ios::cur);
				    cout<<"ENTER YOUR NEW HOMETOWN: ";
				    gets(temp_h);
				    strcpy(hometown,temp_h);
				    N_loc.seekp(N_loc.tellg() - sizeof(B));
				    N_loc.write((char*)&B, sizeof(B));
				    B.wai_t();
				  }
				  else
				  {
				    cout<<"INVALID";
				    getch();
				  }
				}
				else if(num1==2)
				{
				  if(strcmp(C.oldloc(),B.ret_city())==0)
				  {
				    N_loc.seekg(0,ios::cur);
				    cout<<"ENTER YOUR CURRENT CITY: ";
				    gets(temp_c);
				    strcpy(city,temp_c);
				    N_loc.seekp(N_loc.tellg() - sizeof(B));
				    N_loc.write((char*)&B, sizeof(B));
				    B.wai_t();
				  }
				  else
				  {
				    cout<<"INVALID";
				    getch();
				  }
				}
				else if(num1==3)
				{
				  if(strcmp(C.oldloc(),B.ret_state())==0)
				  {
				    N_loc.seekg(0,ios::cur);
				    cout<<"ENTER YOUR CURRENT STATE: ";
				    gets(temp_s);
				    N_loc.seekp(N_loc.tellg() - sizeof(B));
				    N_loc.write((char*)&B, sizeof(B));
				    B.wai_t();
				  }
				  else
				  {
				    cout<<"INVALID";
				    getch();
				  }
				}
				else if(num1==4)
				{
				  if(strcmp(C.oldloc(),B.ret_country())==0)
				  {
				    N_loc.seekg(0,ios::cur);
				    cout<<"ENTER YOUR CURRENT COUNTRY: ";
				    gets(temp_coun);
				    N_loc.seekp(N_loc.tellg() - sizeof(B));
				    N_loc.write((char*)&B, sizeof(B));
				    B.wai_t();
				  }
				  else
				  {
				    cout<<"INVALID";
				    getch();
				  }
				}

			  }
		       }
		       N_loc.close();
		       B.d_lay();
		       getch();
		       break;

		case 4:
		       char temp1_pass[30],temp_pass[30],temp_pass2[30];
		       clrscr();
		       callmouse();
		       int gd6=DETECT,gm6;
			initgraph(&gd6,&gm6,"C:\\TC\\BGI");
			circle(15,10,5);        //DES
			circle(30,10,5);        //DES
			circle(45,10,5);        //DES
			setcolor(GREEN);
			settextstyle(0,0,4);
			outtextxy(160,60,"BAESIX");
			line(10,20,629,20);    // horizontal line
			line(10,100,629,100);  // horizontal line
			line(10,460,629,460);  // horizontal line
			line(10,20,10,460);    // vertical line
			line(100,20,100,100);  // vertical line
			line(629,20,629,460);  // vertical line
			  //ONLINE	gotoxy(60,8);

			   //HELP	gotoxy(9,12);

			line(30,60,50,35);     //HOME
			line(50,35,70,60);     //HOME
			line(30,60,70,60);     //HOME
			line(30,60,30,90);     //HOME
			line(70,60,70,90);     //HOME
			line(30,90,70,90);     //HOME

			line(45,90,45,75);     //DOORHOME
			line(55,90,55,75);     //DOORHOME
			line(45,75,55,75);     //DOORHOME

			circle(580,50,10);     //PROFILE
			line(575,58,560,80);   //PROFILE
			line(585,58,600,80);   //PROFILE
			circle(580,60,30);     //PROFILE

		       fstream N_pass;
		       N_pass.open("create.dat",ios::in| ios::out|ios::binary);
		      /* int flag=0;
			char h[20],j[20],c[20];
			do
			{
				if(flag==0)
					cout<<"\n\n\t\tEnter Your Old Password:  ";
				else
					cout<<"\n\n\t\tPlease Enter Your Old Password Correctly:  ";
				gets(c);
				flag++;
			}while(strcmp(G.pass1,c)==0);
			cout<<"\n\n\t\tEnter your New Password:  ";
			gets(h);
			cout<<"\n\n\t\tRe-Enter your New Password:  ";
			gets(j);
			if(strcmp(h,j)==0)
				strcpy(G.pass1,h);
			else
				cout<<"\n\n\t\tPassword Do Not Match!"; */

		       gotoxy(3,9);
		       cout<<"ENTER YOUR OLD PASSWORD:  ";
		       gets(temp1_pass);
		       if(!N_pass)
		       {
			cout<<"File not Found";
			exit(0);
		       }
		       else
		       {


			  while(!N_pass.eof())
			  {

				N_pass.read((char*)&B,sizeof(B));
				strcpy(Fs,B.ret_pass());
				if(strcmp(temp1_pass,Fs)==0)
				{
				  f=1;
				  cout<<"ENTER YOUR NEW PASSWORD:  ";
				  gets(temp_pass);
				  cout<<"REENTER YOUR PASSWORD:  ";
				  gets(temp_pass2);
				  strcpy(pass1,temp_pass);
				  strcpy(pass2,temp_pass2);
				  if(strcmp(pass1,pass2)==0)
					cout<<"Passwords Match \2";
			       //	  puts(pass2);
			       //	  getch();
				  else
				  {	cout<<"Passwords Do Not Match!!";
					B.d_lay();
					C.work();
				  }
				 // del('Y');
				  N_pass.seekg(-sizeof(B),ios::cur);
				  N_pass.write((char*)&B,sizeof(B));
				}
			  }
			  if(f==0)
			  {
			     cout<<"INVALID";
			    getch();
			  }


		       }
		       N_pass.close();
		       B.wai_t();
		       getch();
		       closegraph();
		       break;




		case 5:
		       B.d_lay();
		       C.work();
		       break;

	       default:
			B.d_lay();
			C.work();
			break;
	}


}
void hoo_k::logout(char ch1)
{
	callmouse();
	if(ch1=='y'||ch1=='Y')
	{

		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		circle(15,10,5);        //DES
		circle(30,10,5);        //DES
		circle(45,10,5);        //DES
		setcolor(GREEN);
		settextstyle(0,0,4);
		outtextxy(160,60,"BAESIX");
		line(10,20,629,20);    // horizontal line
		line(10,460,629,460);  // horizontal line
		line(10,100,629,100);  // horizontal line
		line(10,20,10,460);    // vertical line
		line(629,20,629,460);  // vertical line
		circle(300,200,30);      //PROFILE
		line(278,220,230,300);   //PROFILE
		line(322,222,370,300);   //PROFILE
		circle(300,230,100);     //PROFILE


		gotoxy(20,23);
		cout<<"Logging Out ";
		for(int i=0;i<20;i++)
		{
			delay(100);
			cout<<'\4' ;
		}

		gotoxy(20,23);
		cout<<"Logged Out!                                        ";
		delay(2000);
		A.ASK();
		closegraph();
	}
	else
	{
		B.d_lay();
		clrscr();

		C.work();
	}
	getch();
}
void user()
{
		char Uid[30],Pid[30];

		int gd=DETECT,gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		circle(15,10,5);        //DES
		circle(30,10,5);        //DES
		circle(45,10,5);        //DES
		setcolor(GREEN);
		settextstyle(0,0,4);
		outtextxy(160,60,"BAESIX");
		line(10,20,629,20);    // horizontal line
		line(10,460,629,460);  // horizontal line
		line(10,100,629,100);  // horizontal line
		line(10,20,10,460);    // vertical line
		line(629,20,629,460);  // vertical line
		circle(300,200,30);      //PROFILE
		line(278,220,230,300);   //PROFILE
		line(322,222,370,300);   //PROFILE
		circle(300,230,100);     //PROFILE


		callmouse();
		gotoxy(20,23);
		cout<<"Enter The Username=  ";
		gets(Uid);
		gotoxy(20,25);
		cout<<"Enter The Password=  ";
		char ch;
		int x=0;
		while(1)
		{
		    ch=getch();
		    if(ch==13)
		    {
		      Pid[x]='\0';
		      break;
		    }
		    if(ch==8&&x!=0)
		    {
		      cout<<"\b \b";
		      if(x<=10&&x>0)
			x--;
		    }
		    else if(x<10&&ch!=8)
		    {
		      cout<<"*";
		      Pid[x]=ch;
		      x++;
		    }
		}
		B.d_lay();
		login(Uid,Pid);
		closegraph();

}

void use_r::newdat()
{
	callmouse();
	gotoxy(3,9);
	cout<<"Enter Your Name         :  ";
	gets(name);
     /*	if(strcmp(name,find_name())==0)
	{
		if(BAESIX==1)
	       {
			gotoxy(5,15);
			cout<<"ACCOUNT NAME ALREADY EXISTS!";
			delay(2000);
			A.ASK();
	       }
	}       */

	settextstyle(0,0,0);
	outtextxy(28,180,"(DD/MM/YYYY)");
	gotoxy(3,11);
	cout<<"Enter Your Date Of Birth:  ";
	gets(dob);
	gotoxy(3,13);
	cout<<"Enter Your Gender(M/F)  :  ";
	cin>>gender;
	gotoxy(3,15);
	cout<<"Enter Your E-Mail ID    :  ";
	gets(email);

	gotoxy(3,17);
	cout<<"Enter Your Mobile Number:  ";
	gets(phone);
	gotoxy(3,19);
	cout<<"Enter Your Current City :  ";
	gets(city);
	gotoxy(3,21);
	cout<<"Enter The State         :  ";
	gets(state);
	gotoxy(3,23);
	cout<<"Enter Your Nationality  :  ";
	gets(country);
	gotoxy(3,25);
	cout<<"Enter Your Hometown     :  ";
	gets(hometown);

	gotoxy(40,16);
	cout<<"  Relationship Status :  ";
	gets(rel);
	gotoxy(40,18);
	cout<<"  Enter a Password:  ";
	char ch1;
	int x1=0;
	while(1)
	{
	      ch1=getch();
	      if(ch1==13)
	      {
		    pass1[x1]='\0';
		    break;
	      }
	      if(ch1==8&&x1!=0)
	      {
		    cout<<"\b \b";
		    if(x1<=10&&x1>0)
			x1--;
	      }
	      else if(x1<10&&ch1!=8)
	      {
		    cout<<"*";
		    pass1[x1]=ch1;
		    x1++;
	      }
	}
	gotoxy(40,20);
	cout<<"  Re-enter your Password:  ";

	char ch;
	int x=0;
	while(1)
	{
	      ch=getch();
	      if(ch==13)
	      {
		    pass2[x]='\0';
		    break;
	      }
	      if(ch==8&&x!=0)
	      {
		    cout<<"\b \b";
		    if(x<=10&&x>0)
			x--;
	      }
	      else if(x<10&&ch!=8)
	      {
		    cout<<"*";
		    pass2[x]=ch;
		    x++;
	      }
	}
	gotoxy(40,22);
	if(strcmp(pass1,pass2)==0)
	{
		cout<<"Passwords Match \2";
		gotoxy(44,24);
		cout<<"We wont share ur account info";
		gotoxy(44,25);
		cout<<"with any third party!";
	}
	else
	{	cout<<"Passwords Do Not Match!!";
		delay(2000);
		exit(0);
	}
	delay(2000);


}

void create()
{
	callmouse();
	fstream f1;
	f1.open("create.dat",ios::app|ios::out|ios::binary);
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(100,20,100,100);  // vertical line
	line(629,20,629,460);  // vertical line
       //ONLINE	gotoxy(60,8);

      //HELP	gotoxy(9,12);

	line(30,60,50,35);     //HOME
	line(50,35,70,60);     //HOME
	line(30,60,70,60);     //HOME
	line(30,60,30,90);     //HOME
	line(70,60,70,90);     //HOME
	line(30,90,70,90);     //HOME

	line(45,90,45,75);     //DOORHOME
	line(55,90,55,75);     //DOORHOME
	line(45,75,55,75);     //DOORHOME

	circle(580,50,10);     //PROFILE
	line(575,58,560,80);   //PROFILE
	line(585,58,600,80);   //PROFILE
	circle(580,60,30);     //PROFILE

	B.newdat();
	char x[20],cx[20];
	randomize();
	for(int i=0;i<10;i++)
	{
		x[i]=random(26)+65;
		if(i==2)
			x[i]=random(26)+97;
		if(i%2==0)
			x[i]=random(26)+97;
		if(i==2)
			x[i]='&';
		if(i==6)
			x[i]='!';
		x[9]='\0';
		x[0]=random(26)+65;
	}
	closegraph();
	clrscr();
	int gdn=DETECT,gmn;
	initgraph(&gdn,&gmn,"C:\\TC\\BGI");
	circle(15,10,5);        //DES
	circle(30,10,5);        //DES
	circle(45,10,5);        //DES
	setcolor(GREEN);
	settextstyle(0,0,4);
	outtextxy(160,60,"BAESIX");
	line(10,20,629,20);    // horizontal line
	line(10,100,629,100);  // horizontal line
	line(10,460,629,460);  // horizontal line
	line(10,20,10,460);    // vertical line
	line(100,20,100,100);  // vertical line
	line(629,20,629,460);  // vertical line
       //ONLINE	gotoxy(60,8);

      //HELP	gotoxy(9,12);

	line(30,60,50,35);     //HOME
	line(50,35,70,60);     //HOME
	line(30,60,70,60);     //HOME
	line(30,60,30,90);     //HOME
	line(70,60,70,90);     //HOME
	line(30,90,70,90);     //HOME

	line(45,90,45,75);     //DOORHOME
	line(55,90,55,75);     //DOORHOME
	line(45,75,55,75);     //DOORHOME

	circle(580,50,10);     //PROFILE
	line(575,58,560,80);   //PROFILE
	line(585,58,600,80);   //PROFILE
	circle(580,60,30);     //PROFILE
	gotoxy(3,13);
	cout<<"Security Check:";
	gotoxy(3,14);
	cout<<"**************";
	gotoxy(3,16);
	puts(x);                              //checking for spams
	gotoxy(3,18);
	cout<<"Enter the Captcha Displayed to Help us Prevent Spams:  ";
	gets(cx);
	if(strcmp(cx,x)==0)
	{
		f1.write((char*)&B, sizeof(B));
		BAESIX=1;
	}
	else
		B.e_ror();
	f1.close();
	B.d_lay();
	closegraph();

       C.work();
}
void login(char* Uid,char* Pid)
{
	int found=0;
	char u[30],p[30];
	callmouse();
	ifstream N;
	N.open("create.dat",ios::in|ios::binary);

	if(!N)
	{
		int grd=DETECT,grm;
		initgraph(&grd,&grm,"C:\\TC\\BGI");
		gotoxy(20,25);
		cout<<"YOU HAVE NOT CREATED ANY ACCOUNT......";
		delay(2000);
		A.ASK();
		closegraph();
	}
	else
	{
		while(!N.eof())
		{
			N.read((char*)&B,sizeof(B));
			if(strcmp(Uid,B.ret_user())==0&&strcmp(Pid,B.ret_pass())==0)
			{
				strcpy(label,Uid);
					clrscr();


				found=1;
				C.work();

			}


		}
		if(found==0)
		{      B.e_ror();
		}
	}
	N.close();

}

void main()
{       int accept;
	clrscr();
	N.intro();
	N.graphicintro();
	A.ASK();
	getch();
}
