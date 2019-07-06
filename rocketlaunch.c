#include<GL/glut.h>



#include<math.h>

#include<string.h>



void display();

void myinit();

void mymouse(int button,int state,int x,int y);

void starting();

void internal();

void idle();

void mykey(unsigned char key,int x,int y);

void circle_draw(int h,int k,int r);

void plotpixels(int h,int k,int x,int y);

void draw_pixel(int cx,int cy);

void working();

void flow1();

void flow2();

void rotate();

void ignite();

void triangle(float a[2],float b[2],float c[2]);

void divide_triangle(float a[2],float b[2],float c[2],int k);

void launch();

void body();

void flag();

void oxygentankpipe();

void fueltankpipe();

void pump_pipe1();

void pump_pipe2();

void pumphexagon();

void satellite();

void cumbustionchamberpipe1();

void cumbustionchamberpipe2();

void cumbustionchamber();

void nozzel();





typedef float rectangle[3];





int flag0,flag1;



/*---------------starting----------------*/

rectangle body1[]={{-40.0,252.0},{-40.0,-220.0},{40.0,-220.0},{40.0,252.0}};



rectangle body2[]={{-40.0,252.0},{40.0,252.0},{12.0,320.0},{-12.0,320.0}};



rectangle body3[]={{-12.0,340.0},{-12.0,320.0},{12.0,320.0},{12.0,340.0},

{4.0,360.0},{-4.0,360.0}};



rectangle body4[]={{-40.0,-240.0},{-40.0,-0.0},{-84.0,-160.0},{-84.0,-272.0},

{-72.0,-272.0},{-52.0,-252.0},{-40.0,-252.0}};

rectangle body5[]={{40.0,-240.0},{40.0,-0.0},{84.0,-160.0},{84.0,-272.0},

{72.0,-272.0},{52.0,-252.0},{40.0,-252.0}};



rectangle body6[]={{-84.0,-160.0},{-88.0,-140.0},{-92.0,-160.0},{-92.0,-272.0},

{-84.0,-272.0}};

rectangle body7[]={{84.0,-160.0},{88.0,-140.0},{92.0,-160.0},{92.0,-272.0},

{84.0,-272.0}};



rectangle body8[]={{-32.0,-228.0},{32.0,-228.0},{32.0,-220.0},{-32.0,-220.0}};



rectangle body9[]={{-20.0,-220.0},{20.0,-220.0},{20.0,-80.0},{-20.0,-80.0}};

rectangle body10[]={{-20.0,252.0},{-20.0,160.0},{20.0,160.0},{20.0,252.0}};





rectangle india1[]={{-32.0,80.0},{-32.0,70.0},{32.0,70.0},{32.0,80.0}};

rectangle india2[]={{-32.0,70.0},{-32.0,60.0},{32.0,60.0},{32.0,70.0}};

rectangle india3[]={{-32.0,60.0},{-32.0,50.0},{32.0,50.0},{32.0,60.0}};

rectangle chakra[]={{-8.0,70.0},{-8.0,60.0},{8.0,60.0},{8.0,70.0}};



rectangle tower[]={{160.0,360.0},{160.0,200.0},{160.0,40.0},{160.0,-120.0},

{160.0,-280.0},{200.0,-280.0},{200.0,-200.0},{200.0,-40.0},{200.0,120.0},

{200.0,280.0},{200.0,360.0}};



rectangle ground[]={{-480.0,-240.0},{-480.0,-320.0},{480.0,-320.0},{480.0,-240.0}};



rectangle hill1[]={{280.0,-240.0},{280.0,-160.0},{320.0,-100.0},{360.0,-80.0},

{400.0,-72.0},{428.0,-80.0},{440.0,-120.0},{480.0,-160.0},{480.0,-240.0},{360.0,-240.0}};

rectangle hill2[]={{-480.0,-240.0},{-240.0,-40.0},{-200.0,-40.0},{-160.0,-20.0},

{-120.0,-20.0},{-80.0,0.0},{60.0,0.0},{220,-120.0},{240.0,-120.0},{360.0,-240.0}};

rectangle hill3[]={{-480.0,-240.0},{-480.0,-160.0},{-400.0,-80.0},{-340.0,-80.0},

{-320.0,-120.0},{-280.0,-160.0},{-240.0,-180.0},{-200.0,-240.0}};



rectangle stars[]={{-320.0,40.0},{-440.0,120.0},{-400.0,280.0},{-320.0,320.0},{-200.0,240.0},

{-120.0,380.0},{-360.0,180.0},{-160.0,80.0},{-440.0,-40.0},{-280.0,-120.0},{-160.0,-160.0},

{-320.0,-280.0},

{240.0,320.0},{400.0,360.0},{360.0,240.0},{440.0,160.0},{360.0,0.0},{280.0,80.0},

{240.0,160.0},{120.0,120.0},{80.0,200.0},{240.0,-80.0},{360.0,-160.0},{360.0,-280.0}};



/*-------------timer to countdown the launch----------------*/

rectangle time0[]={{-292.0,160.0},{-312.0,144.0},{-312.0,120.0},{-292.0,104.0},

{-248.0,104.0},{-228.0,120.0},{-228.0,144.0},{-248.0,160.0}};

float time1[2]={-280.0,152.0};

float time2[2]={-260.0,152.0};

float time3[2]={-260.0,136.0};

float time4[2]={-280.0,136.0};

float time5[2]={-280.0,120.0};

float time6[2]={-260.0,120.0};



float time7[2]={-292.0,152.0};

float time8[2]={-292.0,120.0};





/*---------------key2 contains key pressed-------------*/

unsigned char key2='\0';







/*----------------internal-----------------*/

rectangle fuel[]={{-32.0,244.0},{-32.0,168.0},{32.0,168.0},{32.0,244.0}};

rectangle oxygen[]={{-32.0,160.0},{-32.0,80.0},{4.0,80.0},{4.0,160.0}};

rectangle pipe1[]={{-20.0,80.0},{-20.0,-100.0},{-12.0,-100.0},{-12.0,80.0}};

rectangle pipe2[]={{12.0,168.0},{12.0,-100.0},{20.0,-100.0},{20.0,168.0}};

rectangle cc[]={{-12.0,-80.0},{-32.0,-100.0},{-32.0,-140.0},{-12.0,-160.0},

{12.0,-160.0},{32.0,-140.0},{32.0,-100.0},{12.0,-80.0}};

rectangle ec[]={{-12.0,-160.0},{-32.0,-220.0},{32.0,-220.0},{12.0,-160.0}};

rectangle ccpipe1[]={{-28.0,-60.0},{-28.0,-68.0},{-4.0,-68.0},{-4.0,-60.0},

{-24.0,-68.0},{-24.0,-100.0},{-8.0,-100.0},{-8.0,-68.0}};

rectangle ccpipe2[]={{28.0,-60.0},{28.0,-68.0},{4.0,-68.0},{4.0,-60.0},

{24.0,-68.0,0.0},{24.0,-100.0},{8.0,-100.0},{8.0,-68.0}};

rectangle pump1[]={{-12.0,32.0},{-32.0,12.0},{-32.0,-12.0},{-12.0,-32.0},

{12.0,-32.0},{32.0,-12.0},{32.0,12.0},{12.0,32.0}};

rectangle pump2[]={{-12.0,12.0},{-12.0,-12.0},{12.0,-12.0},{12.0,12.0}};

rectangle pumppipe1[]={{-28.0,44.0},{-28.0,36.0},{-4.0,36.0},{-4.0,44.0},

{-24.0,36.0},{-24.0,4.0},{-8.0,4.0},{-8.0,36.0}};

rectangle pumppipe2[]={{28.0,44.0},{28.0,36.0},{4.0,36.0},{4.0,44.0},

{24.0,36.0},{24.0,4.0},{8.0,4.0},{8.0,36.0}};

rectangle sate[]={{-8.0,272.0},{-8.0,252.0},{8.0,252.0},{8.0,272.0},

{-8.0,268.0},{-20.0,252.0},{8.0,268.0},{20.0,252.0}};



int raster[2]={0,160};





/*----------------flow points--------------*/

typedef float points[2];



points fuelpoint[]={{16.0,164.0},{16.0,156.0},{16.0,148.0},{16.0,140.0},{16.0,132.0},

{16.0,124.0},{16.0,116.0},{16.0,108.0},{16.0,100.0},{16.0,92.0},{16.0,84.0},

{16.0,76.0},{16.0,68.0},{16.0,60.0},{16.0,52.0},



{16.0,-28},{16.0,-36},{16.0,-44},{16.0,-52.0}};



points oxypoint[]={{-16.0,76.0},{-16.0,68.0},{-16.0,60.0},{-16.0,52.0},



{-16.0,-28.0},{-16.0,-36.0},{-16.0,-44.0},{-16.0,-52.0}};



int count=0;



/*-------------rotate-------------*/

float theta=0.0;

float x=18.0,y=18.0;

#define radian 3.14159/180.0



/*-------------countex is used to achieve delay between the events during working stage--------*/

int countex=0;







void main(int argc,char** argv)

{

glutInit(&argc,argv);

glutInitDisplayMode(GLUT_RGB| GLUT_DOUBLE);

glutInitWindowSize(1017,705);

glutInitWindowPosition(0,0);

glutCreateWindow("rocket");

myinit();

glutDisplayFunc(display);

glutIdleFunc(idle);

glutKeyboardFunc(mykey);

glutMouseFunc(mymouse);

glutMainLoop();

}





void myinit()

{

glClearColor(0.1,0.1,0.1,1.0);

gluOrtho2D(-480.0,480.0,-320.0,400.0);

}



void Write(float x, float y, float scale, char *s) {

    int i, len = strlen(s);

    glPushMatrix();

    glTranslatef(x, y, 0);

    glScalef(scale, scale, scale);

    for (i = 0; i < len; i++)

        glutStrokeCharacter(GLUT_STROKE_ROMAN, s[i]);

    glPopMatrix();

}



void display()

{

int i;



if(!flag0){

	glClear(GL_COLOR_BUFFER_BIT);

	glClearColor(0.0,0,0.0,0);

	glColor3f(1,1,1);

	Write(-410,300,0.2,"GRAPHICAL IMPLEMENTATION ON ROCKET LAUNCHING SIMULATION");

   Write(-80,260,0.2,"USING OPENGL");



  Write(-230,200,0.2,"BANGALORE INSTITUTE OF TECHNOLOGY");

 Write(-100,140,0.2,"SUBMITTED BY:"); 

 glColor3f(0.9,8.0,0.0);

 Write(-380,70,0.2,"CHAVVA VENKATA PRATHEEK REDDY"); 

 Write(-380,40,0.15,"(1BI16CS215)");

glColor3f(1,1,1);



Write(-150,0,0.2,"UNDER THE GUIDANCE OF:");//

glColor3f(0,1.1,1.9);//

Write(-400,-70,0.2,"Dr. M. KEMPANNA");// 

Write(140,-70,0.2,"VARSHITHA K. C."); //

Write(-400,-100,0.2,"Asst.Prof.,Dept of CSE");//

Write(140,-100,0.2,"Asst.Prof.,Dept of CSE");//

glColor3f(1,1,1);

Write(-150,-250,0.2,"Press   to continue");

glColor3f(1,0,0); 

  Write(-60,-250,0.2,"'C'");



}



else{

 

glClear(GL_COLOR_BUFFER_BIT);





/*---------------stars---------------*/

glPointSize(2);

glBegin(GL_POINTS);

glColor3f(1.0,1.0,1.0);

for(i=0;i<=23;i++)

{

glVertex2fv(stars[i]);

}

glEnd();







/*------------ground----------------*/

glBegin(GL_POLYGON);

glColor3f(0.0,0.5,0.0);

for(i=0;i<=3;i++)

{

glVertex2fv(ground[i]);

}

glEnd();





/*------------hill1-----------------*/

glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.3);

for(i=0;i<=9;i++)

{

glVertex2fv(hill1[i]);

}

glEnd();

glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=9;i++)

{

glVertex2fv(hill1[i]);

}

glEnd();







/*-----------hill2------------------*/

glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.3);

for(i=0;i<=9;i++)

{

glVertex2fv(hill2[i]);

}

glEnd();

glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=9;i++)

{

glVertex2fv(hill2[i]);

}

glEnd();









/*-----------hill3------------------*/

glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.3);

for(i=0;i<=7;i++)

{

glVertex2fv(hill3[i]);

}

glEnd();

glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=7;i++)

{

glVertex2fv(hill3[i]);

}

glEnd();







/*--------------displays the options untill any key is pressed---------------*/

if(!flag1)

{

int shift=8;



char option0[]="HELP :-";

raster[0]=-448;

raster[1]=260;

for(i=0;i<7;i++)

{

raster[0]=raster[0]+shift;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,option0[i]);

}

	



char option1[]="Press s or S :- To show the rocket prepared to launch.";

raster[0]=-448;

raster[1]=240;

for(i=0;i<54;i++)

{

raster[0]=raster[0]+shift;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,option1[i]);

}





char option2[]="Press i or I :- To show the internal structure of the rocket.";

raster[0]=-448;

raster[1]=220;

for(i=0;i<61;i++)

{

raster[0]=raster[0]+shift;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,option2[i]);

}





char option3[]="Press w or W :- To show the working of the rocket,then press left mouse button to show the launching of the rocket.";

raster[0]=-448;

raster[1]=200;

for(i=0;i<116;i++)

{

raster[0]=raster[0]+shift;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,option3[i]);

}





char option4[]="Press q or Q :- To exit.";

raster[0]=-448;

raster[1]=180;

for(i=0;i<24;i++)

{

raster[0]=raster[0]+8;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,option4[i]);

}

}





/*----------------calls corresponding function for the key pressed----------------*/

if(key2=='i'||key2=='I') internal();

if(key2=='s'||key2=='S') starting();

if(key2=='w'||key2=='W') working(); 

if(key2=='q'||key2=='Q') exit(0);



glFlush();

}

glutSwapBuffers();



}







void mykey(unsigned char key,int x,int y)

{

	switch(key){

	case 'c': flag0 = 1;

		break;

	case 'b': flag0 = 0;

		break;

	case 'i':

	case 'I':

	case 's':

	case 'S':

	case 'w':

	case 'W': flag1 = 1;

	}

key2=key;

}









void starting()

{

/*-------displays body of the rocket by calling body() function---------------*/



body();



/*-------displays flag on the rocket by calling flag() function---------------*/

flag();



glFlush();

}









void internal()

{

int i;



/*---------body and tower--------*/

body();





/*---------fuel tank-------------*/

glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.3);

for(i=0;i<=3;i++)

glVertex2fv(fuel[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(fuel[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-32.0,240.0);

glVertex2f(32.0,240.0);

glVertex2f(32.0,220.0);

glVertex2f(-32.0,220.0);

glVertex2f(-32.0,200);

glVertex2f(32.0,200);

glVertex2f(32.0,180.0);

glVertex2f(-32.0,180.0);

glEnd();





char feul[]="Fuel Tank";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-20.0,220.0);

glVertex2f(-120.0,220.0);

glEnd();



raster[0]=-120;

raster[1]=220;

for(i=8;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,feul[i]);

}









/*---------oxygen tank-----------*/



glBegin(GL_POLYGON);

glColor3f(0.5,0.4,0.3);

for(i=0;i<=3;i++)

glVertex2fv(oxygen[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(oxygen[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-32.0,160.0);

glVertex2f(4.0,160.0);

glVertex2f(4.0,140.0);

glVertex2f(-32.0,140.0);

glVertex2f(-32.0,120.0);

glVertex2f(4.0,120.0);

glVertex2f(4.0,100.0);

glVertex2f(-32.0,100.0);

glEnd();



char oxy[]="Oxygen Tank";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-20.0,140.0);

glVertex2f(-120.0,140.0);

glEnd();



raster[0]=-120;

raster[1]=140;

for(i=10;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,oxy[i]);

}





/*---------fuel tank pipe--------*/

fueltankpipe();



char pipe[]="Pipe";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-16.0,72.0);

glVertex2f(-120.0,72.0);

glEnd();



raster[0]=-120;

raster[1]=72;

for(i=3;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,pipe[i]);

}





/*---------oxygen tank pipe------*/

oxygentankpipe();









/*---------cumbustion chamber----------------*/



/*---------cumbustion chamber pipe1----------*/

cumbustionchamberpipe1();







/*---------cumbustion chamber pipe2----------*/

cumbustionchamberpipe2();





/*---------cumbustion chamber----------------*/

cumbustionchamber();





glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-36.0,-96.0);

glVertex2f(-36.0,-104.0);

glVertex2f(36.0,-96.0);

glVertex2f(36.0,-104.0);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-36.0,-96.0);

glVertex2f(-36.0,-104.0);

glVertex2f(36.0,-104.0);

glVertex2f(36.0,-96.0);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-36.0,-136.0);

glVertex2f(-36.0,-144.0);

glVertex2f(36.0,-144.0);

glVertex2f(36.0,-136.0);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-36.0,-136.0);

glVertex2f(-36.0,-144.0);

glVertex2f(36.0,-144.0);

glVertex2f(36.0,-136.0);

glEnd();



char ccum[]="Combustion Chamber";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-20.0,-120.0);

glVertex2f(-120.0,-120.0);

glEnd();



raster[0]=-120;

raster[1]=-120;

for(i=17;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,ccum[i]);

}







/*----------nozzle---------------------------*/

nozzel();





glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-16.0,-156.0);

glVertex2f(-16.0,-164.0);

glVertex2f(16.0,-164.0);

glVertex2f(16.0,-156.0);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-16.0,-156.0);

glVertex2f(-16.0,-164.0);

glVertex2f(16.0,-164.0);

glVertex2f(16.0,-156.0);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-28.0,-196.0);

glVertex2f(-28.0,-204.0);

glVertex2f(28.0,-204.0);

glVertex2f(28.0,-196.0);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex2f(-28.0,-196.0);

glVertex2f(-28.0,-204.0);

glVertex2f(28.0,-204.0);

glVertex2f(28.0,-196.0);

glEnd();



char nozzel[]="Nozzel";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-20.0,-200.0);

glVertex2f(-120.0,-200.0);

glEnd();



raster[0]=-120;

raster[1]=-200;

for(i=5;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,nozzel[i]);

}





/*---------pump----------------------------------*/



/*---------pump pipe1-------------------*/

pump_pipe1();





/*----------pump pipe2-------------------*/

pump_pipe2();





/*----------pump hexagon-----------------*/

pumphexagon();





/*----------pump circle------------------*/

int xc=0,yc=0,ra=28;

circle_draw(xc,yc,ra);





char pump[]="Pump";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-20.0,-0.0);

glVertex2f(-120.0,-0.0);

glEnd();



raster[0]=-120;

raster[1]=-0;

for(i=3;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,pump[i]);

}





/*----------satellite-------------------*/

satellite();



char sat[]="Satellite";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-0.0,268.0);

glVertex2f(-120.0,268.0);

glEnd();



raster[0]=-120;

raster[1]=268;

for(i=8;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,sat[i]);

}



glFlush();

}









void working()

{

int i;



/*---------body and tank---------*/

body();



/*---------show LAUNCH button-------*/

glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

glVertex2f(-292.0,104.0);

glVertex2f(-292.0,80.0);

glVertex2f(-244.0,80.0);

glVertex2f(-244.0,104.0);

glEnd();





char launch[]="LAUNCH";

raster[0]=-244;

raster[1]=88;

for(i=5;i>=0;i--)

{

raster[0]=raster[0]-8;

glColor3f(0.0,0.0,1.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,launch[i]);

}





/*---------fuel tank-------------*/



glBegin(GL_POLYGON);

glColor3f(0.0,0.0,1.);

for(i=0;i<=3;i++)

glVertex2fv(fuel[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(fuel[i]);

glEnd();





/*---------oxygen tank-----------*/



glBegin(GL_POLYGON);

glColor3f(0.0,1.,0.0);

for(i=0;i<=3;i++)

glVertex2fv(oxygen[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(oxygen[i]);

glEnd();







/*---------fuel tank pipe--------*/

fueltankpipe();





/*---------oxygen tank pipe------*/

oxygentankpipe();









/*---------cumbustion chamber----------------*/



/*---------cumbustion chamber pipe1----------*/

cumbustionchamberpipe1();





/*---------cumbustion chamber pipe2----------*/

cumbustionchamberpipe2();







/*---------cumbustion chamber----------------*/

cumbustionchamber();







glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-36.0,-96.0);

glVertex2f(-36.0,-104.0);

glVertex2f(36.0,-96.0);

glVertex2f(36.0,-104.0);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-36.0,-136.0);

glVertex2f(-36.0,-144.0);

glVertex2f(36.0,-144.0);

glVertex2f(36.0,-136.0);

glEnd();









/*----------nozzle---------------------------*/

nozzel();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-16.0,-156.0);

glVertex2f(-16.0,-164.0);

glVertex2f(16.0,-164.0);

glVertex2f(16.0,-156.0);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex2f(-28.0,-196.0);

glVertex2f(-28.0,-204.0);

glVertex2f(28.0,-204.0);

glVertex2f(28.0,-196.0);

glEnd();





/*---------pump----------------------------------*/



/*---------pump pipe1-------------------*/

pump_pipe1();





/*----------pump pipe2-------------------*/

pump_pipe2();





/*----------pump hexagon-----------------*/

pumphexagon();





/*----------pump circle------------------*/

int xc=0,yc=0,ra=28;

circle_draw(xc,yc,ra);





/*----------satellite-------------------*/

satellite();





if(count!=0)

{

rotate();

flow1();

}

}









void body()

{

int i;





if(key2=='s'||key2=='S')

{

glBegin(GL_POLYGON);

glColor3f(0.95,0.95,0.95);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();

}





if(key2=='i'||key2=='I'||key2=='w'||key2=='W')

{

glBegin(GL_POLYGON);

glColor3f(0.5,0.5,0.5);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();



}





if(key2=='s'||key2=='S'||key2=='i'||key2=='I'||key2=='w'||key2=='W')

{

glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=3;i++)

glVertex2fv(body2[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body2[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.95,0.95,0.95);

for(i=0;i<=5;i++)

glVertex2fv(body3[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body3[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=6;i++)

glVertex2fv(body4[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=6;i++)

glVertex2fv(body4[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=6;i++)

glVertex2fv(body5[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=6;i++)

glVertex2fv(body5[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1.0,1.0,1.0);

for(i=0;i<=4;i++)

glVertex2fv(body6[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=4;i++)

glVertex2fv(body6[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1.0,1.0,1.0);

for(i=0;i<=4;i++)

glVertex2fv(body7[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=4;i++)

glVertex2fv(body7[i]);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.6,0.6,0.6);

for(i=0;i<=3;i++)

glVertex2fv(body8[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body8[i]);

glEnd();

}





if(key2=='i'||key2=='I')

{

char fin[]="Wing";



glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2f(-80.0,-240.0);

glVertex2f(-120.0,-240.0);

glEnd();



raster[0]=-120;

raster[1]=-240;

for(i=3;i>=0;i--)

{

raster[0]=raster[0]-7;

glColor3f(1.0,0.0,0.0);

glRasterPos2iv(raster);

glutBitmapCharacter(GLUT_BITMAP_8_BY_13,fin[i]);

}

}





if(key2=='s'||key2=='S')

{

glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body9[i]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2f(-40.0,-80.0);

glVertex2f(40.0,-80.0);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body10[i]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2f(-40.0,160.0);

glVertex2f(40.0,160.0);

glEnd();

}





if(key2=='s'||key2=='S'||key2=='i'||key2=='I'||key2=='w'||key2=='W')

{

glBegin(GL_LINE_LOOP);

glColor3f(1.0,1.0,1.0);

glVertex2fv(tower[0]);

glVertex2fv(tower[1]);

glVertex2fv(tower[2]);

glVertex2fv(tower[3]);

glVertex2fv(tower[4]);

glVertex2fv(tower[6]);

glVertex2fv(tower[3]);

glVertex2fv(tower[7]);

glVertex2fv(tower[2]);

glVertex2fv(tower[8]);

glVertex2fv(tower[1]);

glVertex2fv(tower[9]);

glVertex2fv(tower[0]);

glVertex2fv(tower[10]);

glVertex2fv(tower[9]);

glVertex2fv(tower[8]);

glVertex2fv(tower[7]);

glVertex2fv(tower[6]);

glVertex2fv(tower[5]);

glVertex2fv(tower[4]);

glEnd();





glBegin(GL_LINES);

glColor3f(1.0,1.0,1.0);

glVertex2f(12.0,340.0);

glVertex2f(160.0,340.0);

glEnd();



glBegin(GL_LINES);

glColor3f(1.0,1.0,1.0);

glVertex2f(12.0,320.0);

glVertex2f(160.0,320.0);

glEnd();

}

}







void flag()

{

glBegin(GL_POLYGON);

glColor3f(1.0,0.5,0.0);

glVertex2fv(india1[0]);

glVertex2fv(india1[1]);

glVertex2fv(india1[2]);

glVertex2fv(india1[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1.0,1.0,1.0);

glVertex2fv(india2[0]);

glVertex2fv(india2[1]);

glVertex2fv(india2[2]);

glVertex2fv(india2[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.0,0.6,0.0);

glVertex2fv(india3[0]);

glVertex2fv(india3[1]);

glVertex2fv(india3[2]);

glVertex2fv(india3[3]);

glEnd();



int i;


glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(chakra[i]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2fv(chakra[0]);

glVertex2fv(chakra[2]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2fv(chakra[1]);

glVertex2fv(chakra[3]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2f(-8.0,65.0);

glVertex2f(8.0,65.0);

glEnd();

}







void fueltankpipe()

{

int i;

glBegin(GL_POLYGON);

glColor3f(0.9,0.9,0.9);

for(i=0;i<=3;i++)

glVertex2fv(pipe1[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(pipe1[i]);

glEnd();

}



void oxygentankpipe()

{

int i;

glBegin(GL_POLYGON);

glColor3f(0.9,0.9,0.9);

for(i=0;i<=3;i++)

glVertex2fv(pipe2[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(pipe2[i]);

glEnd();

}





void pump_pipe1()

{

glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(pumppipe1[0]);

glVertex3fv(pumppipe1[1]);

glVertex3fv(pumppipe1[2]);

glVertex3fv(pumppipe1[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(pumppipe1[4]);

glVertex3fv(pumppipe1[5]);

glVertex3fv(pumppipe1[6]);

glVertex3fv(pumppipe1[7]);

glEnd();





glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(pumppipe1[0]);

glVertex3fv(pumppipe1[1]);

glVertex3fv(pumppipe1[2]);

glVertex3fv(pumppipe1[3]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(pumppipe1[4]);

glVertex3fv(pumppipe1[5]);

glVertex3fv(pumppipe1[6]);

glVertex3fv(pumppipe1[7]);

glEnd();



}







void pump_pipe2()

{

glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(pumppipe2[0]);

glVertex3fv(pumppipe2[1]);

glVertex3fv(pumppipe2[2]);

glVertex3fv(pumppipe2[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(pumppipe2[4]);

glVertex3fv(pumppipe2[5]);

glVertex3fv(pumppipe2[6]);

glVertex3fv(pumppipe2[7]);

glEnd();





glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(pumppipe2[0]);

glVertex3fv(pumppipe2[1]);

glVertex3fv(pumppipe2[2]);

glVertex3fv(pumppipe2[3]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(pumppipe2[4]);

glVertex3fv(pumppipe2[5]);

glVertex3fv(pumppipe2[6]);

glVertex3fv(pumppipe2[7]);

glEnd();

}





void pumphexagon()

{

int i;



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

for(i=0;i<=7;i++)

glVertex2fv(pump1[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=7;i++)

glVertex2fv(pump1[i]);

glEnd();

}





void satellite()

{

glBegin(GL_POLYGON);

glColor3f(0.2,0.2,0.2);

glVertex2fv(sate[0]);

glVertex2fv(sate[1]);

glVertex2fv(sate[2]);

glVertex2fv(sate[3]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2fv(sate[4]);

glVertex2fv(sate[5]);

glVertex2fv(sate[6]);

glVertex2fv(sate[7]);

glEnd();

}





void cumbustionchamberpipe1()

{

glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(ccpipe1[0]);

glVertex3fv(ccpipe1[1]);

glVertex3fv(ccpipe1[2]);

glVertex3fv(ccpipe1[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(ccpipe1[4]);

glVertex3fv(ccpipe1[5]);

glVertex3fv(ccpipe1[6]);

glVertex3fv(ccpipe1[7]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(ccpipe1[0]);

glVertex3fv(ccpipe1[1]);

glVertex3fv(ccpipe1[2]);

glVertex3fv(ccpipe1[3]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(ccpipe1[4]);

glVertex3fv(ccpipe1[5]);

glVertex3fv(ccpipe1[6]);

glVertex3fv(ccpipe1[7]);

glEnd();

}





void cumbustionchamberpipe2()

{

glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(ccpipe2[0]);

glVertex3fv(ccpipe2[1]);

glVertex3fv(ccpipe2[2]);

glVertex3fv(ccpipe2[3]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

glVertex3fv(ccpipe2[4]);

glVertex3fv(ccpipe2[5]);

glVertex3fv(ccpipe2[6]);

glVertex3fv(ccpipe2[7]);

glEnd();





glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(ccpipe2[0]);

glVertex3fv(ccpipe2[1]);

glVertex3fv(ccpipe2[2]);

glVertex3fv(ccpipe2[3]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

glVertex3fv(ccpipe2[4]);

glVertex3fv(ccpipe2[5]);

glVertex3fv(ccpipe2[6]);

glVertex3fv(ccpipe2[7]);

glEnd();

}





void cumbustionchamber()

{

int i;



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

for(i=0;i<=7;i++)

glVertex2fv(cc[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=7;i++)

glVertex2fv(cc[i]);

glEnd();

}





void nozzel()

{

int i;



glBegin(GL_POLYGON);

glColor3f(0.3,0.3,0.3);

for(i=0;i<=3;i++)

glVertex2fv(ec[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(ec[i]);

glEnd();

}





void circle_draw(int h,int k,int r)

{

int d=1-r,x=0,y=r;

while(y>x)

{

plotpixels(h,k,x,y);

if(d<0) d=d+(2*x+3);

else

{

d=d+(2*(x-y)+5);

--y;

}

++x;

}

plotpixels(h,k,x,y);

}





void plotpixels(int h,int k,int x,int y)

{

draw_pixel(x+h,y+k);

draw_pixel(-x+h,y+k);

draw_pixel(x+h,-y+k);

draw_pixel(-x+h,-y+k);

draw_pixel(y+h,x+k);

draw_pixel(-y+h,x+k);

draw_pixel(y+h,-x+k);

draw_pixel(-y+h,-x+k);

}



void draw_pixel(int cx,int cy)

{

glPointSize(2);

glColor3f(0.0,0.0,0.0);

glBegin(GL_POINTS);

glVertex2i(cx,cy);

glEnd();

}





void mymouse(int button,int state,int x,int y)

{

if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)

count=count+1;

}





void idle()

{

theta=theta+325.0;

if(theta>360.0)

theta=theta-360.0;

x=18.0*cos(radian*theta);

y=18.0*sin(radian*theta);

glutPostRedisplay();

}





void rotate()

{

glBegin(GL_QUADS);

glColor3f(0.3,0.4,0.5);

glVertex2f(x,y);

glVertex2f(-y,x);

glVertex2f(-x,-y);

glVertex2f(y,-x);

glEnd();

}







void flow1()

{

countex=countex+1;

/*-----------------flows--------------*/



/*-----------fuelpoints and oxypoints translate by decreasing the y-axis value------------*/
int i;

for(i=14;i>=0;i--)

{

fuelpoint[i][1]=fuelpoint[i][1]-2;

}

int m;

for(m=3;m>=0;m--)

{

oxypoint[m][1]=oxypoint[m][1]-2;

}



glPointSize(4);



/*---------------fuel flow-------------*/
int k;

for(k=14;k>=0;k--)

{

if(fuelpoint[k][1]==44.0) fuelpoint[k][1]=164.0;

}

int l;

for(l=14;l>=0;l--)

{

glBegin(GL_POINTS);

glColor3f(0.0,0.0,1.0);

glVertex2fv(fuelpoint[l]);

glEnd();

}





/*---------------oxygen flow-----------*/
int n;

for(n=3;n>=0;n--)

{

if(oxypoint[n][1]==44.0) oxypoint[n][1]=76.0;

}

int o;

for(o=3;o>=0;o--)

{

glBegin(GL_POINTS);

glColor3f(0.0,0.5,0.0);

glVertex2fv(oxypoint[o]);

glEnd();

}





/*-------------display timer countdown-----------------*/

glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=7;i++)

glVertex2fv(time0[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(1.0,0.0,0.0);

for(i=0;i<=7;i++)

glVertex2fv(time0[i]);

glEnd();



/*-------------display 10----------------*/

if(countex<=15)

{

glLineWidth(3);

glBegin(GL_LINES);

glColor3f(0.0,0.0,1.0);

glVertex2fv(time7);

glVertex2fv(time8);

glEnd();



glBegin(GL_LINE_LOOP);

glVertex2fv(time1);

glVertex2fv(time4);

glVertex2fv(time5);

glVertex2fv(time6);

glVertex2fv(time3);

glVertex2fv(time2);

glEnd();

glLineWidth(1);

}



/*-------------display 9----------------*/

if(countex>=16&&countex<=30)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_LOOP);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time4);

glEnd();



glBegin(GL_LINES);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time6);

glVertex2fv(time5);

glEnd();

glLineWidth(1);

}



if(countex>=30)

flow2();

}





void flow2()

{

int i;

for(i=18;i>=15;i--)

{

fuelpoint[i][1]=fuelpoint[i][1]-2;

}


int m;

for(m=7;m>=4;m--)

{

oxypoint[m][1]=oxypoint[m][1]-2;

}



glPointSize(4);

/*-----------------fuel flow------------*/
int k;

for(k=18;k>=15;k--)

{

if(fuelpoint[k][1]==-60.0) fuelpoint[k][1]=-28.0;

}

int l;

for(l=18;l>=15;l--)

{

glBegin(GL_POINTS);

glColor3f(0.0,0.0,1.0);

glVertex2fv(fuelpoint[l]);

glEnd();

}


int n;

for(n=7;n>=4;n--)

{

if(oxypoint[n][1]==-60.0) oxypoint[n][1]=-28.0;

}


int o;

for(o=7;o>=4;o--)

{

glBegin(GL_POINTS);

glColor3f(0.0,0.5,0.0);

glVertex2fv(oxypoint[o]);

glEnd();

}





/*-------------display 8----------------*/

if(countex>=31&&countex<=45)

{

glLineWidth(3);

glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,1.0);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time5);

glVertex2fv(time4);

glEnd();



glBegin(GL_LINES);

glVertex2fv(time3);

glVertex2fv(time4);

glEnd();

glLineWidth(1);

}



if(countex>=40)

ignite();

}







void ignite()

{

/*-------first inlet---------*/

float v01[2]={-24.0,-92.0};

float v02[2]={-8.0,-80.0};



float v03[2]={24.0,-92.0};

float v04[2]={8.0,-80.0};

/*-------got from cc[]-----------*/

float v1[2]={-12.0,-80.0};

float v2[2]={-32.0,-100.0};

float v3[2]={-32.0,-140.0};

float v4[2]={-12.0,-160.0};

float v5[2]={12.0,-160.0};

float v6[2]={32.0,-140.0};

float v7[2]={32.0,-100.0};

float v8[2]={12.0,-80.0};



/*-------got from ec[]-----------*/

float v9[2]={-32.0,-220.0};

float v10[2]={32.0,-220.0};



/*-------extra points created------*/

float v11[2]={0.0,-220.0};

float v12[2]={0.0,-240.0};





int n=4;



/*----------fuel and oxygen inlet into combustion chamber-------------*/



glBegin(GL_TRIANGLES);



glColor3f(0.0,0.5,0.0);

divide_triangle(v01,v02,v5,n);

divide_triangle(v01,v02,v6,n);



glColor3f(0.0,0.5,0.0);

divide_triangle(v5,v6,v01,n);

divide_triangle(v5,v6,v02,n);





glColor3f(0.0,0.0,1.0);

divide_triangle(v03,v04,v3,n);

divide_triangle(v03,v04,v4,n);



glColor3f(0.0,0.0,1.0);

divide_triangle(v3,v4,v03,n);

divide_triangle(v3,v4,v04,n);



glEnd();







/*-----------fuel and oxygen mix in combustion chamber--------------*/

if(countex>=55)

{

glBegin(GL_TRIANGLES);



glColor3f(0.0,0.5,0.0);

divide_triangle(v1,v8,v4,n);

divide_triangle(v1,v8,v5,n);



glColor3f(0.0,0.5,0.0);

divide_triangle(v4,v5,v1,n);

divide_triangle(v4,v5,v8,n);





glColor3f(0.0,0.5,0.0);

divide_triangle(v2,v3,v7,n);

divide_triangle(v2,v3,v6,n);



glColor3f(0.0,0.0,1.0);

divide_triangle(v6,v7,v2,n);

divide_triangle(v6,v7,v3,n);



glEnd();

}









/*---------------fuel and oxygen mix in nozzel------------*/



/*-------------display 7----------------*/

if(countex>=46&&countex<=60)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINES);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time3);

glVertex2fv(time6);

glEnd();

glLineWidth(1);

}





if(countex>=65)

{

glBegin(GL_TRIANGLES);



glColor3f(0.0,0.5,0.0);

divide_triangle(v4,v5,v9,n);

divide_triangle(v4,v5,v10,n);



glColor3f(0.0,0.0,1.0);

divide_triangle(v9,v10,v4,n);

divide_triangle(v9,v10,v5,n);





glColor3f(0.0,0.5,0.0);

divide_triangle(v9,v11,v4,n);

divide_triangle(v9,v11,v5,n);



glColor3f(0.0,0.5,0.0);

divide_triangle(v10,v11,v4,n);

divide_triangle(v10,v11,v5,n);



glEnd();

}







/*-------combustion chamber exhaust gas---------*/



/*-------------display 6----------------*/

if(countex>=61&&countex<=75)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time2);

glVertex2fv(time1);

glVertex2fv(time4);

glVertex2fv(time5);

glVertex2fv(time6);

glVertex2fv(time3);

glVertex2fv(time4);

glEnd();

glLineWidth(1);

}





if(countex>=85)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

for(int c=0;c<=7;c++)

glVertex2fv(cc[c]);

glEnd();



/*-------nozzel exhaust gas---------------------*/

glBegin(GL_POLYGON);

glColor3f(1.0,1.,0.0);

for(int f=0;f<=3;f++)

glVertex2fv(ec[f]);

glEnd();



/*-------combustion chamber exhaust gas---------*/

glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v1,v8,v4,n);

divide_triangle(v1,v8,v5,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v4,v5,v1,n);

divide_triangle(v4,v5,v8,n);







glColor3f(1.0,0.0,0.0);

divide_triangle(v1,v2,v5,n);

divide_triangle(v1,v2,v6,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v5,v6,v1,n);

divide_triangle(v5,v6,v2,n);







glColor3f(1.0,0.0,0.0);

divide_triangle(v2,v3,v7,n);

divide_triangle(v2,v3,v6,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v6,v7,v2,n);

divide_triangle(v6,v7,v3,n);







glColor3f(1.0,0.0,0.0);

divide_triangle(v3,v4,v7,n);

divide_triangle(v3,v4,v8,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v7,v8,v3,n);

divide_triangle(v7,v8,v4,n);



glEnd();



/*-------nozzel exhaust gas---------------------*/

glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v4,v5,v9,n);

divide_triangle(v4,v5,v10,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v4,n);

divide_triangle(v9,v10,v5,n);





glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v4,n);

divide_triangle(v9,v11,v5,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v10,v11,v4,n);

divide_triangle(v10,v11,v5,n);



glEnd();

}



/*-------triangle exhaust gas1----------------*/



/*-------------display 5----------------*/

if(countex>=76&&countex<=90)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time2);

glVertex2fv(time1);

glVertex2fv(time4);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time5);

glEnd();

glLineWidth(1);

}





if(countex>=95)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

glVertex2f(-32.0,-220.0);

glVertex2f(32.0,-220.0);

glVertex2f(0.0,-240.0);

glEnd();







glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v12,n);

divide_triangle(v9,v10,v12,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v12,n);

divide_triangle(v10,v11,v12,n);



glEnd();

}



/*-------triangle exhaust gas2----------------*/



/*-------------display 4----------------*/

if(countex>=91&&countex<=105)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time1);

glVertex2fv(time4);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time2);

glEnd();

glLineWidth(1);

}





if(countex>=105)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

glVertex2f(-32.0,-220.0);

glVertex2f(32.0,-220.0);

glVertex2f(0.0,-260.0);

glEnd();



v12[1]=-260.0;



glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v12,n);

divide_triangle(v9,v10,v12,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v12,n);

divide_triangle(v10,v11,v12,n);



glEnd();

}



/*-------triangle exhaust gas3----------------*/

if(countex>=115)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

glVertex2f(-32.0,-220.0);

glVertex2f(32.0,-220.0);

glVertex2f(0.0,-280.0);

glEnd();





v12[1]=-280.0;



glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v12,n);

divide_triangle(v9,v10,v12,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v12,n);

divide_triangle(v10,v11,v12,n);



glEnd();

}



/*-------triangle exhaust gas4----------------*/



/*-------------display 3----------------*/

if(countex>=106&&countex<=120)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time5);

glEnd();



glBegin(GL_LINES);

glVertex2fv(time3);

glVertex2fv(time4);

glEnd();

glLineWidth(1);

}





if(countex>=125)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

glVertex2f(-32.0,-220.0);

glVertex2f(32.0,-220.0);

glVertex2f(0.0,-300.0);

glEnd();





v12[1]=-300.0;



glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v12,n);

divide_triangle(v9,v10,v12,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v12,n);

divide_triangle(v10,v11,v12,n);



glEnd();

}



/*-------triangle exhaust gas5----------------*/



/*-------------display 2----------------*/

if(countex>=121&&countex<=135)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time4);

glVertex2fv(time5);

glVertex2fv(time6);

glEnd();

glLineWidth(1);

}





if(countex>=135)

{

glBegin(GL_POLYGON);

glColor3f(1.0,1.0,0.0);

glVertex2f(-32.0,-220.0);

glVertex2f(32.0,-220.0);

glVertex2f(0.0,-320.0);

glEnd();



v12[1]=-320.0;





glBegin(GL_TRIANGLES);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v10,v12,n);

divide_triangle(v9,v10,v12,n);



glColor3f(1.0,0.0,0.0);

divide_triangle(v9,v11,v12,n);

divide_triangle(v10,v11,v12,n);



glEnd();

}





/*-------------display 1----------------*/

if(countex>=136&&countex<=150)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_STRIP);

glVertex2fv(time1);

glVertex2fv(time5);

glEnd();

glLineWidth(1);

}



/*-------------display 0----------------*/

if(countex>=151&&countex<=165)

{

glLineWidth(3);

glColor3f(0.0,0.0,1.0);

glBegin(GL_LINE_LOOP);

glVertex2fv(time1);

glVertex2fv(time2);

glVertex2fv(time3);

glVertex2fv(time6);

glVertex2fv(time5);

glVertex2fv(time4);

glEnd();

glLineWidth(1);

}





if(countex>=155)

{

launch();

}

}





void triangle(float a[2],float b[2],float c[2])

{



glVertex2fv(a);

glVertex2fv(b);

glVertex2fv(c);

}





void divide_triangle(float a[2],float b[2],float c[2],int k)

{

float ab[2],ac[2],bc[2];

int j;

if(k>0)

{

for(j=0;j<2;j++) ab[j]=(a[j]+b[j])/2;

for(j=0;j<2;j++) ac[j]=(a[j]+c[j])/2;

for(j=0;j<2;j++) bc[j]=(b[j]+c[j])/2;



divide_triangle(ab,ac,a,k-1);

divide_triangle(ac,bc,c,k-1);

divide_triangle(ab,bc,b,k-1);

}

else

triangle(a,b,c);

}





void launch()

{

int i;



/*------------remove LAUNCH button--------------------*/

glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

glVertex2f(-292.0,104.0);

glVertex2f(-292.0,80.0);

glVertex2f(-244.0,80.0);

glVertex2f(-244.0,104.0);

glEnd();





/*----------timer countdown remove-------------------*/

glBegin(GL_POLYGON);

glColor3f(0,0,0);

for(i=0;i<=7;i++)

glVertex2fv(time0[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0,0,0);

for(i=0;i<=7;i++)

glVertex2fv(time0[i]);

glEnd();





/*----------tower lines remove-------------*/

glBegin(GL_LINES);

glColor3f(0,0,0);

glVertex2f(12.0,340.0);

glVertex2f(160.0,340.0);

glEnd();



glBegin(GL_LINES);

glColor3f(0,0,0);

glVertex2f(12.0,320.0);

glVertex2f(160.0,320.0);

glEnd();





/*-----------ground translate--------------*/	

float shift=40.0;



for(i=3;i>=0;i--)

{

ground[i][1]=ground[i][1]-shift;

}



/*-----------tower translate---------------*/

for(i=10;i>=0;i--)

{

tower[i][1]=tower[i][1]-shift;

}



/*-----------hills translate---------------*/

for(i=9;i>=0;i--)

{

hill1[i][1]=hill1[i][1]-shift;

}



for(i=9;i>=0;i--)

{

hill2[i][1]=hill2[i][1]-shift;

}



for(i=7;i>=0;i--)

{

hill3[i][1]=hill3[i][1]-shift;

}



/*-----------stars translate---------------*/

for(i=23;i>=0;i--)

{

stars[i][1]=stars[i][1]-40;



if(stars[i][1]==-320.0)

{

stars[i][1]=400;

} 

}



/*-----------body------------------*/

glBegin(GL_POLYGON);

glColor3f(0.95,0.95,0.95);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body1[i]);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=3;i++)

glVertex2fv(body2[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body2[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.95,0.95,0.95);

for(i=0;i<=5;i++)

glVertex2fv(body3[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body3[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=6;i++)

glVertex2fv(body4[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=6;i++)

glVertex2fv(body4[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.7,0.7,0.7);

for(i=0;i<=6;i++)

glVertex2fv(body5[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=6;i++)

glVertex2fv(body5[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1.0,1.0,1.0);

for(i=0;i<=4;i++)

glVertex2fv(body6[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=4;i++)

glVertex2fv(body6[i]);

glEnd();



glBegin(GL_POLYGON);

glColor3f(1.0,1.0,1.0);

for(i=0;i<=4;i++)

glVertex2fv(body7[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=4;i++)

glVertex2fv(body7[i]);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.6,0.6,0.6);

for(i=0;i<=3;i++)

glVertex2fv(body8[i]);

glEnd();



glBegin(GL_LINE_LOOP);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body8[i]);

glEnd();





glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body9[i]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2f(-40.0,-80.0);

glVertex2f(40.0,-80.0);

glEnd();



glBegin(GL_POLYGON);

glColor3f(0.0,0.0,0.0);

for(i=0;i<=3;i++)

glVertex2fv(body10[i]);

glEnd();



glBegin(GL_LINES);

glColor3f(0.0,0.0,0.0);

glVertex2f(-40.0,160.0);

glVertex2f(40.0,160.0);

glEnd();



flag();

}