/* #####(THIS PROJECT IS TO CREATING THE  BLOCK DIAGRAM OF COMPUTER USING GRAPHIC CLASS)######
# AUTOUR: SAGAR C N           # used libary's: # used predifened functions:                  #
# PHONE NUMBER: 8197589728    #  conio.h       # setcolor(),setbkcolor(),rectangle()         #
# 1ST BCA JSS COLLEGE         #  graphics.h    # outtextxy(),setfillstyle(),floodfill()      #
#  MYSORE	                  #                # settextstyle()                              #
############################################################################################*/

#include<conio.h>
#include<graphics.h>
class project{
 public: //declaration of member functions
	void head();
	void input();
	void block();
	void cu();
	void alu();
	void mu();
	void output();

};
void project:: input()
{  //this function is used to design the input block
	setcolor(WHITE);
	rectangle(5,215,100,275);
	setfillstyle(8,CYAN);
	floodfill(31,216,WHITE);
	setcolor(GREEN);
	outtextxy(30,245,"INPUT");

}
void project::output()
{  //this function is used to design the input block
	setcolor(WHITE);
	rectangle(538,215,634,275);
	setfillstyle(8,CYAN);
	floodfill(539,245,WHITE);
	setcolor(RED);
	outtextxy(568,245,"OUTPUT");

}
void project:: block()
{ //this function is used to design the main cpu block
	setcolor(WHITE);
	rectangle(150,100,488,430);
	setfillstyle(8,BLUE);
	floodfill(151,101,WHITE);
// small cpu  name designing
	rectangle(280,80,340,100);
	setfillstyle(8,CYAN);
	floodfill(281,81,WHITE);
	setcolor(9);
	outtextxy(300,90,"CPU");
}
void project:: cu()
{ //this function is used to design the control unit block
	setcolor(WHITE);
	rectangle(170,120,468,200);
	setfillstyle(11,MAGENTA);
	floodfill(171,121,WHITE);
	setcolor(BLUE);
	outtextxy(260,160,"CONTROL UNIT");
 }

void project:: alu()
{ //this function is used to design the arithmetic and logical unit block
	setcolor(WHITE);
	rectangle(170,220,468,300);
	setfillstyle(11,MAGENTA);
	floodfill(171,221,WHITE);
	setcolor(BLUE);
	outtextxy(210,260,"ARITHMETIC & LOGICAL UNIT");

}
void project::mu()
{ //this function is used to design the memory unit block
	setcolor(WHITE);
	rectangle(170,320,468,400);
	setfillstyle(11,MAGENTA);
	floodfill(171,321,WHITE);
	setcolor(BLUE);
	outtextxy(260,360,"MEMORY UNIT");
}
void project:: head()
{ //this function is used to design  headline and arrows
// heading  of the project
	settextstyle(10,0,2);
	outtextxy(80,00,"BLOCK DAIGRAM OF COMPUTER ");
//two side arrow for input and output block
	outtextxy(100,215, "-> ");
	outtextxy(488,215, "-> ");
//two  down arrow for cu to alu
	settextstyle(0,1,0);
	outtextxy(250,183, " <-  ");
	outtextxy(270,183, " <-  ");
	outtextxy(250,200, " <-  ");
	outtextxy(270,200, " <-  ");
//two up  arrow for cu to alu
	outtextxy(350,175, " ->  ");
	outtextxy(370,175, " ->  ");
	outtextxy(350,190, " ->  ");
	outtextxy(370,190, " ->  ");
//two  down arrow for alu to mu
	outtextxy(250,283, " <-  ");
	outtextxy(270,283, " <-  ");
	outtextxy(250,300, " <-  ");
	outtextxy(270,300, " <-  ");
///two  up arrow for alu to mu
	outtextxy(350,275, " ->  ");
	outtextxy(370,275, " ->  ");
	outtextxy(350,290, " ->  ");
	outtextxy(370,290, " ->  ");

 }



int main(){
	project p; //object creating
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\Turboc3\\bgi"); //intializing the graphic driver and mode
	setbkcolor(LIGHTGRAY); //color set for whole window
	// funtion call usinf object of class
	p.input();
	p.block();
	p.cu();
	p.alu();
	p.mu();
	p.output();
	p.head();
	getch();
	closegraph();
	return 0;
}

