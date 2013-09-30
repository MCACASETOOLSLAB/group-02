#include"graphics.h"
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
int i=0,j=0;
int left, top,right ,bottom;

initwindow(800,700,"barber Problem");
outtextxy(100,50,"Process Synchronization Using barber Problem");

// First Chair Drawing
left=100, top =100,right =200, bottom =200; 
rectangle(left,top,right,bottom);
//Second Chair Drawing
left=300, top =100,right =400, bottom =200; 
rectangle(left,top,right,bottom);
// Third Chair Drawing
left=500, top =100,right =600, bottom =200; 
rectangle(left,top,right,bottom);
//Fourth Chair Drawing
left=450, top =450,right =550, bottom =550; 
rectangle(left,top,right,bottom);
// Barber 
outtextxy(105,125,"empty");
outtextxy(305,125,"empty");
outtextxy(505,125,"empty");
outtextxy(455,480,"empty");
outtextxy(100,480,"Avail. resource");
outtextxy(100,500,"1");

outtextxy(100,600,"Waiting Chair Empty");
outtextxy(100,650,"3");
// Customer 1 moves

for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person1");
}

outtextxy(105,125,"                ");
outtextxy(105,125,"WtChairfull");
outtextxy(100,650,"2");// For Waiting Chair
delay(3000);
outtextxy(300,500,"BarberChairempty");
delay(3000);
outtextxy(210,500,"                         ");
outtextxy(210,500,"Occupy Barber Chair                         ");
outtextxy(100,650,"3");
outtextxy(105,125,"                          ");
outtextxy(105,125,"empty");

outtextxy(455,480,"full           ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"0");
delay(3000);
outtextxy(210,500,"                                        ");
outtextxy(210,500,"                     done                    ");
delay(3000);
outtextxy(455,480,"empty         ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"1");

//Person1 leaves
for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person1 leave");
}
delay(5000);

/********************************************/

//Person 2 moves

for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person2");
}

outtextxy(105,125,"              ");
outtextxy(105,125,"WtChairfull");
delay(3000);
outtextxy(300,500,"BarberChairempty");
delay(3000);
outtextxy(210,500,"                          ");
outtextxy(210,500,"Occupy Barber Chair                         ");
//give message to chair 1 empty
outtextxy(105,125,"                        ");
outtextxy(105,125,"empty");

outtextxy(455,480,"full        ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"0");

//
//Customer 3 comes
for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person3");
   
}
outtextxy(105,125,"                 ");
outtextxy(105,125,"WtChairFull");
outtextxy(100,650,"2");

//Customer 4 comess
for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person4");
   
}
outtextxy(305,125,"                   ");
outtextxy(305,125,"WtChairfull");
outtextxy(100,650,"1");

// Customer 5 comes
for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person5");
   
}
outtextxy(505,125,"                   ");
outtextxy(505,125,"WtChairfull");
outtextxy(100,650,"0");


//Customer 6 comes
for(i=800,j=400; i >= 50; i--)
{
     delay(10);
     outtextxy(i,j,"person6");
   
}

outtextxy(300,400,"WtChairfull");
outtextxy(300,400,"All Resource allocated better leave    ");

for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person6 leave");
}
delay(5000);

//person 2 resumes 

outtextxy(210,500,"                                        ");
outtextxy(210,500,"                     done                         ");
delay(3000);
for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person2 leave");
}
delay(5000);
outtextxy(100,500,"1");

//persone 3 resumes
outtextxy(300,500,"BarberChairempty");
delay(3000);
outtextxy(210,500,"                         ");
outtextxy(210,500,"Occupy Barber Chair                         ");
outtextxy(105,125,"                      ");
outtextxy(105,125,"empty");

outtextxy(455,480,"full                 ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"0");
delay(3000);
outtextxy(210,500,"                                        ");
outtextxy(210,500,"                       done                            ");
delay(3000);
outtextxy(455,480,"empty         ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"1");
outtextxy(100,650,"1");//For Wait Queue
//Person3 leaves
for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person3 leave");
}
delay(5000);

//person 4 resumes
outtextxy(300,500,"BarberChairempty");
delay(3000);
outtextxy(210,500,"                         ");
outtextxy(210,500,"Occupy Barber Chair                         ");
outtextxy(305,125,"                         ");
outtextxy(305,125,"empty");

outtextxy(455,480,"full               ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"0");
delay(3000);
outtextxy(210,500,"                                        ");
outtextxy(210,500,"                        done                            ");
delay(3000);
outtextxy(455,480,"empty         ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"1");
outtextxy(100,650,"2"); // For Wait Queue
//Person4 leaves
for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person4 leave");
}
delay(5000);

// person 5 resumes

outtextxy(300,500,"BarberChairempty");
delay(3000);
outtextxy(210,500,"                         ");
outtextxy(210,500,"Occupy Barber Chair                         ");
outtextxy(505,125,"                          ");
outtextxy(505,125,"empty");

outtextxy(455,480,"full               ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"0");
delay(3000);
outtextxy(210,500,"                                        ");
outtextxy(210,500,"                     done                          ");
delay(3000);
outtextxy(455,480,"empty         ");
outtextxy(100,480,"Available resource");
outtextxy(100,500,"1"); 
outtextxy(100,650,"3"); // For Wait Queue
//Person5 leaves
for(i=50,j=400; i <= 800; i++)
{
     delay(10);
     outtextxy(i,j,"person5 leave");
}
delay(5000);

/*************************/
 
cleardevice();
outtextxy(300,400,"Thank You For Watching");
delay(5000);
closegraph();
}
