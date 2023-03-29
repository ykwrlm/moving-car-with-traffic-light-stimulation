#include<stdio.h>
#include<conio.h>
#include<dos.h>//carwithtrafficlight
#include<graphics.h>
//cart3.c
void go();
void stop();
void start();
void scenery();
void bird();
void handup();
void handdown();
int a,b,c,d,e;

void main()
{
int s,i;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

s=0,b=0,c=0,d=0;

for(i=0;i<400;i++)
{

if(i<50)

{
circle(200+s,360,9);

circle(170+s,352,2);

circle(168+s,352,2);

circle(144+s,352,2);

circle(146+s,352,2);

floodfill(201+s,361,WHITE);

floodfill(199+s,359,WHITE);

circle(130+s,360,9);

floodfill(131+s,361,WHITE);

floodfill(129+s,359,WHITE);

line(119+s,360,105+s,360);

line(105+s,360,105+s,345);

line(105+s,345,115+s,345);

line(115+s,345,235+s,345);

line(200+s,340,180+s,345);

line(115+s,345,135+s,330);

line(135+s,330,180+s,330);

line(160+s,330,160+s,345);

rectangle(135+s,333,157+s,342);

rectangle(165+s,333,181+s,341);

circle(170+s,338,3);

floodfill(169+s,339,WHITE);

line(197+s,341,232+s,342);

line(133+s,342,125+s,342);

line(180+s,330,200+s,340);

line(235+s,340,235+s,355);

line(235+s,358,213+s,358);


circle(235+s,345,3);

circle(235+s,345,2);

line(190+s,360,140+s,360);

bird();
{
if(i%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
b=b+3;
}
s=s+3;
delay(100);
cleardevice();

go();
scenery();

}

else if(i>50&&i<100)

{

circle(200+s,360,9);

circle(170+s,352,2);

circle(168+s,352,2);

circle(144+s,352,2);

circle(146+s,352,2);

floodfill(201+s,361,WHITE);

floodfill(199+s,359,WHITE);

circle(130+s,360,9);

floodfill(131+s,361,WHITE);

floodfill(129+s,359,WHITE);

line(119+s,360,105+s,360);

line(105+s,360,105+s,345);

line(105+s,345,115+s,345);

line(115+s,345,235+s,345);

line(200+s,340,180+s,345);

line(115+s,345,135+s,330);

line(135+s,330,180+s,330);

line(160+s,330,160+s,345);

rectangle(135+s,333,157+s,342);

rectangle(165+s,333,181+s,341);

circle(170+s,338,3);

floodfill(169+s,339,WHITE);

line(197+s,341,232+s,342);

line(133+s,342,125+s,342);

line(180+s,330,200+s,340);

line(235+s,340,235+s,355);


line(235+s,358,213+s,358);

circle(235+s,345,3);

circle(235+s,345,2);

line(190+s,360,140+s,360);

bird();
{
if(i%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
b=b+3;
}

delay(100);
cleardevice();
stop();
scenery();

}

else if(i>100&&i<150)

{

circle(200+s,360,9);

circle(170+s,352,2);

circle(168+s,352,2);

circle(144+s,352,2);

circle(146+s,352,2);

floodfill(201+s,361,WHITE);

floodfill(199+s,359,WHITE);

circle(130+s,360,9);

floodfill(131+s,361,WHITE);

floodfill(129+s,359,WHITE);

line(119+s,360,105+s,360);

line(105+s,360,105+s,345);

line(105+s,345,115+s,345);

line(115+s,345,235+s,345);

line(200+s,340,180+s,345);

line(115+s,345,135+s,330);

line(135+s,330,180+s,330);

line(160+s,330,160+s,345);

rectangle(135+s,333,157+s,342);

rectangle(165+s,333,181+s,341);

circle(170+s,338,3);

floodfill(169+s,339,WHITE);

line(197+s,341,232+s,342);

line(133+s,342,125+s,342);

line(180+s,330,200+s,340);

line(235+s,340,235+s,355);

line(235+s,358,213+s,358);

circle(235+s,345,3);

circle(235+s,345,2);

line(190+s,360,140+s,360);


bird();
{
if(i%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
b=b+3;
}

delay(100);
cleardevice();
start();
scenery();

}

else if(i>150&&i<200)

{

circle(200+s,360,9);

circle(170+s,352,2);

circle(168+s,352,2);

circle(144+s,352,2);

circle(146+s,352,2);

floodfill(201+s,361,WHITE);

floodfill(199+s,359,WHITE);

circle(130+s,360,9);

floodfill(131+s,361,WHITE);

floodfill(129+s,359,WHITE);

line(119+s,360,105+s,360);

line(105+s,360,105+s,345);

line(105+s,345,115+s,345);

line(115+s,345,235+s,345);

line(200+s,340,180+s,345);

line(115+s,345,135+s,330);

line(135+s,330,180+s,330);

line(160+s,330,160+s,345);

rectangle(135+s,333,157+s,342);

rectangle(165+s,333,181+s,341);

circle(170+s,338,3);

floodfill(169+s,339,WHITE);

line(197+s,341,232+s,342);

line(133+s,342,125+s,342);

line(180+s,330,200+s,340);

line(235+s,340,235+s,355);

line(235+s,358,213+s,358);

circle(235+s,345,3);

circle(235+s,345,2);

line(190+s,360,140+s,360);


bird();
{
if(i%2==0)
{
handup();
}
else
{
handdown();
}
delay(100);
b=b+3;
}

s=s+3;
delay(100);
cleardevice();
go();
scenery();


}

}

getch();
}


void scenery()
{
int X=getmaxx();
int Y=getmaxy();
setfillstyle(1,WHITE);
line(0,Y/2,X/4,Y/4);
line(X/4,Y/4,X/2,Y/2);
line(X/2,Y/2,(3*X)/4,Y/4);
line((3*X)/4,Y/4,X,Y/2);
circle(100,90,30);
line(0,Y/2,X,Y/2);
}


void go()

{

circle(450,100,10);

circle(450,130,10);

setfillstyle(1,GREEN);
circle(450,160,10);
floodfill(452,162,WHITE);


line(450,154,450,165);

line(450,154,444,158);

line(450,154,456,158);



rectangle(447,180,451,376);

rectangle(433,80,465,180);

settextstyle(3,0,2);

outtextxy(200,375,"computer graphics project");

line(0,376,640,376);

line(0,410,640,410);



}





void stop()

{

setfillstyle(1,RED);

circle(450,100,10);

floodfill(452,102,WHITE);

circle(450,130,10);

circle(450,160,10);



rectangle(447,180,451,376);

rectangle(433,80,465,180);

settextstyle(3,0,2);

outtextxy(200,375,"computer graphics project");

line(0,376,640,376);

line(0,410,640,410);

}





void start()

{

circle(450,100,10);

setfillstyle(1,YELLOW);

circle(450,130,10);

floodfill(452,132,WHITE);

circle(450,160,10);



rectangle(447,180,451,376);

rectangle(433,80,465,180);

settextstyle(3,0,2);

outtextxy(200,375,"computer graphics project");

line(0,376,640,376);

line(0,410,640,410);

}

void bird()
{
//bird
circle(50+b,100,5);
line(53+b,98,60+b,100);
line(53+b,102,60+b,100);
circle(50+b,98,1);
ellipse(35+b,100,0,360,10,5);
line(28+b,100,15+b,95);
line(28+b,100,14+b,96);
line(29+b,100,13+b,97);
line(29+b,101,12+b,98);
line(29+b,102,10+b,99);
line(29+b,103,12+b,100);

}

void handdown()
{
c=b;
//handdown
ellipse(35+c,106,210,360,6,15);
line(36+c,100,30+c,110);
line(39+c,107,36+c,113);
line(36+c,107,33+c,113);

}

void handup()
{
d=b;
//handup
ellipse(35+d,94,0,150,6,15);
line(36+d,100,30+d,90);
line(36+d,87,38+d,93);
line(34+d,87,36+d,93);

}

