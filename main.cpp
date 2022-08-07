#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>

float x,y,i;
float PI=3.1416;

using namespace std;
GLfloat sunPosition1=0;
GLfloat sunSpeed1= 0.5;
GLfloat cloudPosition1=0;
GLfloat couldSpeed1=1;
GLfloat cloudPosition2=0;
GLfloat couldSpeed2=0.8;
GLfloat policecarPosition=0.0f;
GLfloat policecarSpeed=2.5f;
GLfloat ambulancePosition2=0;
GLfloat ambulacespeed2=2;
GLfloat menPosition2=0;
GLfloat menspeed2=0.5;
GLfloat carPosition2=0;
GLfloat carSpeed2=1.8;
GLfloat sunPosition2=0;
GLfloat sunSpeed2= 0.5;
GLfloat cloudPosition3=0;
GLfloat couldSpeed3=1;
GLfloat cloudPosition4=0;
GLfloat couldSpeed4=0.8;
GLfloat carPosition1=0;
GLfloat carSpeed1=2;
GLfloat ambulancePosition1=0;
GLfloat ambulacespeed1=2;
GLfloat doctorPosition = 0.0f;
GLfloat doctorspeed = 0.5f;
GLfloat policecarPosition2=0;
GLfloat policecarSpeed2=2.5;
GLfloat hujurPosition1 = 0.0f;
GLfloat hujurPosition2 = 0.0f;
GLfloat bmenPosition1 = 0.0f;
GLfloat emenPosition1 = 0.0f;
GLfloat lmenPosition1 = 0.0f;
GLfloat hujurspeed1 = 0.5f;



void display1 (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
   glBegin(GL_QUADS);
	glColor3ub(10, 196, 236 );
	glVertex2i(-100,-20);
	glVertex2i(-100,100);
	glVertex2i(100,100);
	glVertex2i(100,-20);
	glEnd();

    //Sun Move
    glPushMatrix();
    glTranslatef(sunPosition1,0.0f,0.0f);

    //Sun draw

	float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(247, 254, 0);
    x=70; y=75; radius =10;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    glPopMatrix();

    //cloud1 move
    glPushMatrix();
    glTranslatef(cloudPosition1,0,0);
    //Cloud Draw
    //Cloud-1

    //P-1


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-75; y=92; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();



    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-79; y=87; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();


    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-85; y=82; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-80; y=81; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-73; y=85; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-74; y=79; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
    glPopMatrix();

    //cloud2 move
    glPushMatrix();
    glTranslatef(cloudPosition2,0,0);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-35; y=78; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-41; y=73; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-47; y=67; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-40; y=66; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-33; y=70; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();


    //House side background
	  glBegin(GL_QUADS);
	glColor3ub(50,205,50);
	glVertex2i(-100,-20);
	glVertex2i(-100,-40);
	glVertex2i(100,-40);
	glVertex2i(100,-20);
	glEnd();


    //Road background
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-100,-40);
	glVertex2i(-100,-100);
	glVertex2i(100,-100);
	glVertex2i(100,-40);
	glEnd();

	//Road Mark
	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
    glVertex2i(-70,-70);
    glVertex2i(-50,-70);
    glVertex2i(-60,-70);
    glVertex2i(-40,-70);
    glVertex2i(-30,-70);
    glVertex2i(-10,-70);
    glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Footpath
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(100,-40);
	glVertex2i(100,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-40);
		glColor3ub(203, 67, 53  );
    glVertex2i(100,-25);
	glVertex2i(100,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-25);
	glEnd();

	//Background House

	// Left 2nd Background
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(-101,-20);
	glVertex2i(-101,15);
	glVertex2i(-95,15);
	glVertex2i(-95,-20);
	glEnd();

    // Left 2nd Background
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(-55,-20);
	glVertex2i(-55,18);
	glVertex2i(-36,18);
	glVertex2i(-36,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226 );
	glVertex2i(-52,-5);
	glVertex2i(-52,15);
	glVertex2i(-42,15);
	glVertex2i(-42,-5);
	glEnd();

	//Tree-1 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-48,-25);
	glVertex2i(-48,-10);
	glVertex2i(-46,-10);
	glVertex2i(-46,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-55,-12);
	glVertex2i(-47,9);
	glVertex2i(-39,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-54,-5);
	glVertex2i(-47,15);
	glVertex2i(-40,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-53,2);
	glVertex2i(-47,22);
	glVertex2i(-41,2);
	glEnd();


      //Masque Draw

      //Masque Gombuj
	   glBegin(GL_TRIANGLE_FAN);
    glColor3ub(94, 31, 125 );
    x=-76; y=25; radius =13;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();


	 //Masque design
	  glBegin(GL_QUADS);
	glColor3ub(159, 164, 236);
	glVertex2i(-98,-22);
	glVertex2i(-98,23);
	glVertex2i(-54,23);
	glVertex2i(-54,-22);
	glEnd();


	 //Masque footer design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-98,-22);
	glVertex2i(-99,-25);
	glVertex2i(-53,-25);
	glVertex2i(-54,-22);
	glEnd();



	 //Masque door design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-81,-25);
	glVertex2i(-81,-1);
	glVertex2i(-71,-1);
	glVertex2i(-71,-25);
	glEnd();

	//Masque door top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-81,-1);
	glVertex2i(-82,1);
	glVertex2i(-76,12);
	glVertex2i(-70,1);
	glVertex2i(-71,-1);
	glEnd();


	//Masque left 1st window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-89,-25);
	glVertex2i(-89,-6);
	glVertex2i(-83,-6);
	glVertex2i(-83,-25);
	glEnd();

	//Masque left 1st window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-89,-6);
	glVertex2i(-90,-4);
	glVertex2i(-86.5,3);
	glVertex2i(-82,-4);
	glVertex2i(-83,-6);
	glEnd();


	//Masque left 2nd window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-91,-25);
	glVertex2i(-91,-11);
	glVertex2i(-96,-11);
	glVertex2i(-96,-25);
	glEnd();

	//Masque left 2nd window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-96,-11);
	glVertex2i(-97,-9);
	glVertex2i(-93.99,-1);
	glVertex2i(-90,-9);
	glVertex2i(-91,-11);
	glEnd();


	//Masque right 1st window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-69,-25);
	glVertex2i(-69,-6);
	glVertex2i(-63,-6);
	glVertex2i(-63,-25);
	glEnd();

	//Masque right 1st window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-69,-6);
	glVertex2i(-70,-4);
	glVertex2i(-66.5,4);
	glVertex2i(-62,-4);
	glVertex2i(-63,-6);
	glEnd();

	//Masque right 2nd window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-61,-25);
	glVertex2i(-61,-11);
	glVertex2i(-56,-11);
	glVertex2i(-56,-25);
	glEnd();

	//Masque right 2nd window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-61,-11);
	glVertex2i(-62,-9);
	glVertex2i(-58.5,-1);
	glVertex2i(-55,-9);
	glVertex2i(-56,-11);
	glEnd();

	 //Masque Top box design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-99,23);
	glVertex2i(-99,20);
	glVertex2i(-53,20);
	glVertex2i(-53,23);
	glEnd();

	//Masque Laft meaner design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-98,60);
	glVertex2i(-98,23);
	glVertex2i(-94,23);
	glVertex2i(-94,60);
	glEnd();

	//Masque Laft meaner art design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-98,43);
	glVertex2i(-98,41);
	glVertex2i(-94,41);
	glVertex2i(-94,43);
	glEnd();

	//Masque Laft meaner top design
	glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125);
	glVertex2i(-98,60);
	glVertex2i(-99,62);
	glVertex2i(-96.5,70);
	glVertex2i(-93,62);
	glVertex2i(-94,60);

	glEnd();

	//Masque Right meaner design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-54,60);
	glVertex2i(-54,23);
	glVertex2i(-58,23);
	glVertex2i(-58,60);
	glEnd();

	//Masque Right meaner art design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-54,43);
	glVertex2i(-54,41);
	glVertex2i(-58,41);
	glVertex2i(-58,43);
	glEnd();

	//Masque Laft meaner top design
	glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125);

	glVertex2i(-58,60);
	glVertex2i(-59,62);
	glVertex2i(-56.5,70);
	glVertex2i(-53,62);
	glVertex2i(-54,60);

	glEnd();

	//Background House

    //Middle Right Background
	glBegin(GL_QUADS);
	glColor3ub(77, 86, 86);
	glVertex2i(-5,-20);
	glVertex2i(-5,30);
	glVertex2i(10,30);
	glVertex2i(10,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(110, 178, 236);
	glVertex2i(-4,-10);
	glVertex2i(-4,25);
	glVertex2i(5,25);
	glVertex2i(5,-10);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-4, 20);
	glVertex2i(5, 20);
	glVertex2i(-4, 14);
	glVertex2i(5, 14);
	glVertex2i(-4, 8);
	glVertex2i(5, 8);
	glVertex2i(-4, 2);
	glVertex2i(5, 2);
	glVertex2i(-4, -4);
	glVertex2i(5, -4);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(151, 154, 154 );
	glVertex2i(4,-20);
	glVertex2i(4,25);
	glVertex2i(30,25);
	glVertex2i(30,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(110, 178, 236);
	glVertex2i(6,-10);
	glVertex2i(6,22);
	glVertex2i(15,22);
	glVertex2i(15,-10);
	glEnd();


	//1st HOUSE DESIGN

	//Body Structure
	glBegin(GL_QUADS);
	glColor3ub(125, 206, 160);
	glVertex2i(-40,-22);
	glVertex2i(-40,40);
	glVertex2i(-4,40);
	glVertex2i(-4,-22);
	glEnd();

	//Building down
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(-40,-22);
	glVertex2i(-41,-25);
	glVertex2i(-3,-25);
	glVertex2i(-4,-22);
	glEnd();

	//Building top
	glBegin(GL_TRIANGLES);
	glColor3ub(135, 54, 0 );
	glVertex2i(-42,40);
	glVertex2i(-2,40);
	glVertex2i(-22,55);
	glEnd();

	//Building 2nd top
	glBegin(GL_QUADS);
	glColor3ub(135, 54, 0);
	glVertex2i(-42,5);
	glVertex2i(-40,10);
	glVertex2i(-4,10);
	glVertex2i(-2,5);
	glEnd();

	//Left top window
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-37,35);
	glVertex2i(-29,35);
	glVertex2i(-29,14);
	glVertex2i(-37,14);
	glEnd();

    //Left top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-33, 35);
	glVertex2i(-33, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-37, 24.5);
	glVertex2i(-29, 24.5);

	glEnd();

	//Middle top window
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-26,35);
	glVertex2i(-18,35);
	glVertex2i(-18,14);
	glVertex2i(-26,14);
	glEnd();

	//Middle top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-22, 35);
	glVertex2i(-22, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-26, 24.5);
	glVertex2i(-18, 24.5);

	glEnd();

	//Right top window
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-15,35);
	glVertex2i(-7,35);
	glVertex2i(-7,14);
	glVertex2i(-15,14);
	glEnd();

	//Right top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-11, 35);
	glVertex2i(-11, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-15, 24.5);
	glVertex2i(-7, 24.5);

	glEnd();

	//Left down window
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-37,-18);
	glVertex2i(-29,-18);
	glVertex2i(-29,2);
	glVertex2i(-37,2);
	glEnd();

	//Left down window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-33, -18);
	glVertex2i(-33, 2);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-37, -8);
	glVertex2i(-29, -8);

	glEnd();

	//Right down window
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-15,-18);
	glVertex2i(-7,-18);
	glVertex2i(-7,2);
	glVertex2i(-15,2);
	glEnd();

	//Right down window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(-11, -18);
	glVertex2i(-11, 2);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-15, -8);
	glVertex2i(-7, -8);

	glEnd();

	//Door design
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-26,-22);
	glVertex2i(-18,-22);
	glVertex2i(-18,0);
	glVertex2i(-26,0);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(-22, -22);
	glVertex2i(-22, 0);

	glEnd();


		//Tree 3 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(9,-23);
	glVertex2i(9,-10);
	glVertex2i(11,-10);
	glVertex2i(11,-23);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(3,-11);
	glVertex2i(10,9);
	glVertex2i(17,-11);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(4,-5);
	glVertex2i(10,15);
	glVertex2i(16,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(5,2);
	glVertex2i(10,21);
	glVertex2i(15,2);
	glEnd();


	//Background Right house Draw

	//House Part
	glBegin(GL_QUADS);
	glColor3ub(179, 182, 183 );
	glVertex2i(83,28);
	glVertex2i(83,-20);
	glVertex2i(102,-20);
	glVertex2i(102,28);
	glEnd();

	//House Left window Part
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(83,24);
	glVertex2i(83,20);
	glVertex2i(92,20);
	glVertex2i(92,24);
	glEnd();

	//House Right window Part
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(95,24);
	glVertex2i(95,20);
	glVertex2i(102,20);
	glVertex2i(102,24);
	glEnd();

	//House Middle window Part
	glBegin(GL_QUADS);
	glColor3ub(247, 249, 249 );
	glVertex2i(83,16);
	glVertex2i(83,12);
	glVertex2i(102,12);
	glVertex2i(102,16);
	glEnd();

	//House Down left  Part
	glBegin(GL_QUADS);
	glColor3ub(97, 106, 107 );
	glVertex2i(86,10);
	glVertex2i(86,-20);
	glVertex2i(88,-20);
	glVertex2i(88,10);
	glEnd();

	//House Middle window Part
	glBegin(GL_QUADS);
	glColor3ub(97, 106, 107 );
	glVertex2i(96,10);
	glVertex2i(96,-20);
	glVertex2i(98,-20);
	glVertex2i(98,10);
	glEnd();


	//Shopping Mall Design

	//Down part
	glBegin(GL_QUADS);
	glColor3ub(104, 35, 31);
	glVertex2i(85,-22);
	glVertex2i(86,-25);
	glVertex2i(14,-25);
	glVertex2i(15,-22);
	glEnd();

	//Left Down->1 part
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(16,-22);
	glVertex2i(16,2);
	glVertex2i(36,2);
	glVertex2i(36,-22);
	glEnd();

	//Left ->2 part
	glBegin(GL_QUADS);
	glColor3ub(245, 103, 16);
	glVertex2i(15,6);
	glVertex2i(15,2);
	glVertex2i(36,2);
	glVertex2i(36,6);
	glEnd();

	//Left ->3 part
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(16,6);
	glVertex2i(16,29);
	glVertex2i(36,29);
	glVertex2i(36,6);
	glEnd();

	//Left ->4 part
	glBegin(GL_QUADS);
	glColor3ub(80, 33, 18);
	glVertex2i(16,31);
	glVertex2i(16,29);
	glVertex2i(36,29);
	glVertex2i(36,31);
	glEnd();

	//Left Top part
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(13,39);
	glVertex2i(16,31);
	glVertex2i(36,31);
	glVertex2i(36,36);
	glEnd();

	//Right Down->1 part
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(60,-22);
	glVertex2i(61.99,2);
	glVertex2i(84,2);
	glVertex2i(84,-22);
	glEnd();

	//Right ->2 part
	glBegin(GL_QUADS);
	glColor3ub(245, 103, 16);
	glVertex2i(60,6);
	glVertex2i(60,2);
	glVertex2i(85,2);
	glVertex2i(85,6);
	glEnd();

	//Right ->3 part
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(60,6);
	glVertex2i(60,29);
	glVertex2i(84,29);
	glVertex2i(84,6);
	glEnd();

	//Right ->4 part
	glBegin(GL_QUADS);
	glColor3ub(80, 33, 18);
	glVertex2i(60,31);
	glVertex2i(60,29);
	glVertex2i(84,29);
	glVertex2i(84,31);
	glEnd();

	//Right Top part
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(60,36);
	glVertex2i(60,31);
	glVertex2i(84,31);
	glVertex2i(83,35);
	glEnd();


	//Gate body design
	glBegin(GL_QUADS);
	glColor3ub(234, 29, 16);
	glVertex2i(36,-22);
	glVertex2i(36,42);
	glVertex2i(66,49);
	glVertex2i(62,-22);
	glEnd();

	//Gate design
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(43,-22);
	glVertex2i(43,0);
	glVertex2i(54,0);
	glVertex2i(54,-22);
	glEnd();

	//Gate Top box design
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(40,35);
	glVertex2i(60,35);
	glVertex2i(60,15);
	glVertex2i(40,15);
	glEnd();

	//Art in Market

	//Door Art

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(49, -22);
	glVertex2i(49, 0);

	glEnd();

	//Left Down part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(20, -22);
	glVertex2i(20, 2);
	glEnd();

	//Left Down part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(33, -22);
	glVertex2i(33, 2);
	glEnd();

	//Left Top part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(20, 6);
	glVertex2i(20, 30);
	glEnd();

	//Left Top part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(33, 6);
	glVertex2i(33, 30);
	glEnd();

	//Right Down part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(66, -22);
	glVertex2i(66, 2);
	glEnd();

	//Left Down part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(80, -22);
	glVertex2i(80, 2);
	glEnd();

	//Left Top part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(66, 6);
	glVertex2i(66, 30);
	glEnd();

	//Left Top part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(80, 6);
	glVertex2i(80, 30);
	glEnd();

	//Tree 2 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(0,-25);
	glVertex2i(0,-10);
	glVertex2i(-2,-10);
	glVertex2i(-2,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-8,-12);
	glVertex2i(-1,9);
	glVertex2i(6,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-7,-5);
	glVertex2i(-1,15);
	glVertex2i(5,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-6,2);
	glVertex2i(-1,22);
	glVertex2i(4,2);
	glEnd();

	//Tree 4 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(91,-25);
	glVertex2i(91,-10);
	glVertex2i(93,-10);
	glVertex2i(93,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(84,-12);
	glVertex2i(92,9);
	glVertex2i(100,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(85,-5);
	glVertex2i(92,15);
	glVertex2i(99,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(86,2);
	glVertex2i(92,22);
	glVertex2i(98,2);
	glEnd();

		//Lamp Draw

	 //Lamp 1
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-70,-25);
	glVertex2i(-68,-25);
	glVertex2i(-68,0);
	glVertex2i(-70,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-72,5);
	glVertex2f(-66,5);
	glVertex2f(-69,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(-68,0);
	glVertex2i(-70,0);
    glVertex2i(-71,5);
	glVertex2i(-67,5);
    glEnd();



    //Lamp 2
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(72,-25);
	glVertex2i(70,-25);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
	glVertex2f(68,5);
	glVertex2f(71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glVertex2i(73,5);
	glVertex2i(69,5);
    glEnd();

    //Lamp 3
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-5,-25);
	glVertex2i(-7,-25);
	glVertex2i(-7,0);
	glVertex2i(-5,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-9,5);
	glVertex2f(-3,5);
	glVertex2f(-6,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(-7,0);
	glVertex2i(-5,0);
    glVertex2i(-4,5);
	glVertex2i(-8,5);
    glEnd();

    	//Man 5 Draw (GURD)
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(128, 71, 71);
	glVertex2i(41,-25);
	glVertex2i(40,-17);
	glVertex2i(37,-17);
	glVertex2i(39,-25);

	//Right leg
	glVertex2i(37,-25);
	glVertex2i(39,-17);
	glVertex2i(36,-17);
	glVertex2i(35,-25);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(128, 71, 71);
	glVertex2i(40,-18);
	glVertex2i(40,-10);
	glVertex2i(38,-11);
	glVertex2i(36,-10);
	glVertex2i(36,-18);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(41,-10);
	glVertex2i(40,-10);
	glVertex2i(40,-14);
	glVertex2i(41,-14);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(41, -14);
	glVertex2i(40, -15);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(36,-10);
	glVertex2i(35,-10);
	glVertex2i(35,-14);
	glVertex2i(36,-14);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(35, -14);
	glVertex2i(36, -15);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(1,0,0);
	glVertex2i(37,-25);
	glVertex2i(36,-23);
	glVertex2i(35,-25);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(41,-25);
	glVertex2i(40,-23);
	glVertex2i(39,-25);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(38, -11);
	glVertex2i(38, -8);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157);
    x=38; y=-7; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2i(41,-6);
	glVertex2i(39,-4);
	glVertex2i(37,-4);
	glVertex2i(35,-6);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(36,-7);
	glVertex2i(40,-7);
	glVertex2i(40,-9);
	glVertex2i(36,-9);
	glEnd();


		glPushMatrix();
glTranslatef(hujurPosition2,0.0f,0.0f);
	//Man 4 Draw (HUJUR-2)
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(243, 216, 216 );
	glVertex2i(-68,-27);
	glVertex2i(-67,-19);
	glVertex2i(-64,-19);
	glVertex2i(-66,-27);

	//Right leg
	glVertex2i(-64,-27);
	glVertex2i(-66,-19);
	glVertex2i(-63,-19);
	glVertex2i(-62,-27);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(243, 156, 18);
	glVertex2i(-68,-25);
	glVertex2i(-67,-12);
	glVertex2i(-65,-13);
	glVertex2i(-63,-12);
	glVertex2i(-62,-25);
	glEnd();

    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2i(-65, -14);
	glVertex2i(-65, -18);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(243, 156, 18);
	glVertex2i(-68,-12);
	glVertex2i(-67,-12);
	glVertex2i(-67,-17);
	glVertex2i(-68,-17);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-68, -17);
	glVertex2i(-67, -17);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(243, 156, 18);
	glVertex2i(-63,-12);
	glVertex2i(-62,-12);
	glVertex2i(-62,-16);
	glVertex2i(-63,-16);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-62, -16);
	glVertex2i(-63, -17);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-64,-27);
	glVertex2i(-63,-25);
	glVertex2i(-62,-27);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-68,-27);
	glVertex2i(-67,-25);
	glVertex2i(-66,-27);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-65, -13);
	glVertex2i(-65, -10);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-65; y=-9; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(-68,-8);
	glVertex2i(-66,-6);
	glVertex2i(-64,-6);
	glVertex2i(-62,-8);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-63,-9);
	glVertex2i(-67,-9);
	glVertex2i(-67,-11);
	glVertex2i(-63,-11);
	glEnd();
	glPopMatrix();


		glPushMatrix();
glTranslatef(bmenPosition1,0.0f,0.0f);
	//Man 6 Draw (Visitor)
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(127, 50, 19 );
	glVertex2i(68,-30);
	glVertex2i(67,-22);
	glVertex2i(64,-22);
	glVertex2i(66,-30);

	//Right leg
	glVertex2i(64,-30);
	glVertex2i(66,-22);
	glVertex2i(63,-22);
	glVertex2i(62,-30);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(15, 189, 157  );
	glVertex2i(67,-22);
	glVertex2i(67,-15);
	glVertex2i(65,-16);
	glVertex2i(63,-15);
	glVertex2i(63,-22);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157 );
	glVertex2i(68,-15);
	glVertex2i(67,-15);
	glVertex2i(67,-19);
	glVertex2i(68,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(68, -19);
	glVertex2i(67, -20);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157  );
	glVertex2i(63,-15);
	glVertex2i(62,-15);
	glVertex2i(62,-19);
	glVertex2i(63,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(62, -19);
	glVertex2i(63, -20);
	glEnd();

	//Bag
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2i(62, -22);
	glVertex2i(62, -28);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(64,-30);
	glVertex2i(63,-28);
	glVertex2i(62,-30);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(68,-30);
	glVertex2i(67,-28);
	glVertex2i(66,-30);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(65, -16);
	glVertex2i(65, -13);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=65; y=-12; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2i(68,-11);
	glVertex2i(66,-9);
	glVertex2i(64,-9);
	glVertex2i(62,-11);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(63,-12);
	glVertex2i(67,-12);
	glVertex2i(67,-14);
	glVertex2i(63,-14);
	glEnd();
	glPopMatrix();


	//Man 3 Draw (HUJUR-1)
	//Left Leg
glPushMatrix();
glTranslatef(hujurPosition1,0.0f,0.0f);
	glBegin(GL_QUADS);
	glColor3ub(243, 216, 216 );
	glVertex2i(-88,-33);
	glVertex2i(-87,-25);
	glVertex2i(-84,-25);
	glVertex2i(-86,-33);

	//Right leg
	glVertex2i(-84,-33);
	glVertex2i(-86,-25);
	glVertex2i(-83,-25);
	glVertex2i(-82,-33);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(-88,-31);
	glVertex2i(-87,-18);
	glVertex2i(-85,-19);
	glVertex2i(-83,-18);
	glVertex2i(-82,-31);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(-88,-18);
	glVertex2i(-87,-18);
	glVertex2i(-87,-22);
	glVertex2i(-88,-22);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-88, -22);
	glVertex2i(-87, -23);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(-83,-18);
	glVertex2i(-82,-18);
	glVertex2i(-82,-22);
	glVertex2i(-83,-22);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-82, -22);
	glVertex2i(-83, -23);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-84,-33);
	glVertex2i(-83,-31);
	glVertex2i(-82,-33);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-88,-33);
	glVertex2i(-87,-31);
	glVertex2i(-86,-33);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-85, -19);
	glVertex2i(-85, -16);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-85; y=-15; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(-88,-14);
	glVertex2i(-86,-12);
	glVertex2i(-84,-12);
	glVertex2i(-82,-14);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-83,-15);
	glVertex2i(-87,-15);
	glVertex2i(-87,-17);
	glVertex2i(-83,-17);
	glEnd();
	glPopMatrix();



glPushMatrix();
glTranslatef(menPosition2,0.0f,0.0f);
	//Man 1 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(44, 80, 197);
	glVertex2i(-22,-40);
	glVertex2i(-21,-33);
	glVertex2i(-18,-33);
	glVertex2i(-20,-40);

	//Right leg
	glVertex2i(-18,-40);
	glVertex2i(-20,-33);
	glVertex2i(-17,-33);
	glVertex2i(-16,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(56, 225, 38 );
	glVertex2i(-21,-33);
	glVertex2i(-21,-26);
	glVertex2i(-19,-27);
	glVertex2i(-17,-26);
	glVertex2i(-17,-33);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(-22,-26);
	glVertex2i(-21,-26);
	glVertex2i(-21,-30);
	glVertex2i(-22,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-22, -30);
	glVertex2i(-21, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(-17,-26);
	glVertex2i(-16,-26);
	glVertex2i(-16,-30);
	glVertex2i(-17,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-16, -30);
	glVertex2i(-17, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-18,-40);
	glVertex2i(-17,-38);
	glVertex2i(-16,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-22,-40);
	glVertex2i(-21,-38);
	glVertex2i(-20,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-19, -27);
	glVertex2i(-19, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-19; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-22,-22);
	glVertex2i(-20,-20);
	glVertex2i(-18,-20);
	glVertex2i(-16,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-17,-23);
	glVertex2i(-21,-23);
	glVertex2i(-21,-25);
	glVertex2i(-17,-25);
	glEnd();

	//Man 2 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0 );
	glVertex2i(-15,-40);
	glVertex2i(-14,-33);
	glVertex2i(-11,-33);
	glVertex2i(-13,-40);

	//Right leg
	glVertex2i(-11,-40);
	glVertex2i(-13,-33);
	glVertex2i(-10,-33);
	glVertex2i(-9,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(-14,-35);
	glVertex2i(-14,-26);
	glVertex2i(-12,-27);
	glVertex2i(-10,-26);
	glVertex2i(-10,-35);
	glEnd();

	    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2i(-12, -27);
	glVertex2i(-12, -35);
	glEnd();

		    glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(241, 15, 15 );
	glVertex2i(-11, -28);
	glVertex2i(-11, -32);
		glVertex2i(-12, -30);
	glVertex2i(-10, -30);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(-15,-26);
	glVertex2i(-14,-26);
	glVertex2i(-14,-30);
	glVertex2i(-15,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-15, -30);
	glVertex2i(-14, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(-10,-26);
	glVertex2i(-9,-26);
	glVertex2i(-9,-30);
	glVertex2i(-10,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-9, -30);
	glVertex2i(-10, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-11,-40);
	glVertex2i(-10,-38);
	glVertex2i(-9,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-15,-40);
	glVertex2i(-14,-38);
	glVertex2i(-13,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-12, -27);
	glVertex2i(-12, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-12; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-15,-22);
	glVertex2i(-13,-20);
	glVertex2i(-11,-20);
	glVertex2i(-9,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-10,-23);
	glVertex2i(-14,-23);
	glVertex2i(-14,-25);
	glVertex2i(-10,-25);
	glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(ambulancePosition2,0.0f,0.0f);
	// ambulance body
	glBegin(GL_POLYGON);
	glColor3ub(253, 254, 254);
	glVertex2f(-90, -50);
	glVertex2f(-50, -50);
	glVertex2f(-51, -40);
	glVertex2f(-55, -35);
	glVertex2f(-60, -20);
	glVertex2f(-85, -20);
	glVertex2f(-90, -35);
	glEnd();
	       //ambulance sine
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(-51,-40);
	glVertex2i(-51,-39);
    glVertex2i(-90,-39);
	glVertex2i(-90,-40);
		glVertex2i(-80,-25);
	glVertex2i(-79,-25);
	glVertex2i(-79,-35);
	glVertex2i(-80,-35);
		glVertex2i(-82,-29);
	glVertex2i(-77,-29);
	glVertex2i(-77,-31);
	glVertex2i(-82,-31);
		glVertex2i(-70,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,-18);
	glVertex2i(-70,-18);
    glEnd();


            	        //ambulance glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(-75,-23);
	glVertex2i(-68,-23);
    glVertex2i(-68,-35);
	glVertex2i(-75,-35);
		glVertex2i(-61,-23);
	glVertex2i(-56,-35);
	glVertex2i(-66,-35);
	glVertex2i(-66,-23);
    glEnd();
       //ambulance bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-88,-50);
	glVertex2i(-91,-50);
    glVertex2i(-91,-46);
	glVertex2i(-88,-46);
		glVertex2i(-52,-50);
	glVertex2i(-52,-46);
	glVertex2i(-49,-46);
	glVertex2i(-49,-50);
    glEnd();

               //ambulance Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(-90,-35);
	glVertex2i(-89,-35);
    glVertex2i(-89,-40);
	glVertex2i(-90,-40);
	glColor3ub(251, 250, 32);
		glVertex2i(-51,-40);
	glVertex2i(-55,-40);
	glVertex2i(-55,-42);
	glVertex2i(-51,-42);
    glEnd();


        //ambulance wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //ambulance wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
glTranslatef(carPosition2,0.0f,0.0f);
    	        //car body
	glBegin(GL_QUADS);
	glColor3ub(125, 60, 152);
	glVertex2i(50,-70);
	glVertex2i(85,-70);
    glVertex2i(87,-80);
	glVertex2i(48,-80);
		glVertex2i(58,-70);
	glVertex2i(61,-60);
	glVertex2i(76,-60);
	glVertex2i(78,-70);
    glEnd();

        	        //car glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(59,-70);
	glVertex2i(62,-61);
    glVertex2i(75,-61);
	glVertex2i(77,-70);
		glVertex2i(69,-70);
	glVertex2i(69,-61);
	glVertex2i(73,-61);
	glVertex2i(75,-70);
    glEnd();

        //car bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(46,-80);
	glVertex2i(53,-80);
    glVertex2i(53,-76);
	glVertex2i(46,-76);
		glVertex2i(88,-80);
	glVertex2i(82,-80);
	glVertex2i(82,-76);
	glVertex2i(88,-76);
    glEnd();


        glLineWidth(2);
        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
        glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

            //car Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(84,-70);
	glVertex2i(85,-70);
    glVertex2i(85,-75);
	glVertex2i(84,-75);
	glColor3ub(226, 224, 224);
		glVertex2i(51,-70);
	glVertex2i(49,-70);
	glVertex2i(49,-72);
	glVertex2i(51,-72);
    glEnd();

    //Car wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Car wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

glPopMatrix();


	glPushMatrix();
    glTranslatef(policecarPosition,0.0f,0.0f);

	//Police Car
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2i(45,-90);
	glVertex2i(48,-78);
	glVertex2i(57,-75);
	glVertex2i(65,-65);
	glVertex2i(83,-65);
	glVertex2i(86,-75);
	glVertex2i(93,-75);
	glVertex2i(95,-90);
	glEnd();

	//Front window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(65,-67);
	glVertex2i(73,-67);
	glVertex2i(73,-74);
	glVertex2i(60,-74);
	glEnd();

	//Back window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(74,-67);
	glVertex2i(82,-67);
	glVertex2i(84,-74);
	glVertex2i(74,-74);
	glEnd();

	//Body Art
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(35, 57, 186);
	glVertex2i(52, -80);
	glVertex2i(88, -80);
	glEnd();

	//Front art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(44,-90);
	glVertex2i(48,-90);
	glVertex2i(48,-87);
	glVertex2i(44,-87);
	glEnd();

	//Back art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(92,-90);
	glVertex2i(97,-90);
	glVertex2i(97,-87);
	glVertex2i(92,-87);
	glEnd();

	//Front Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(47,-82);
	glVertex2i(50,-82);
	glVertex2i(50,-79);
	glVertex2i(48,-79);
	glEnd();

	//Back Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(91,-82);
	glVertex2i(94,-82);
	glVertex2i(93,-79);
	glVertex2i(91,-79);
	glEnd();

	//Top Light
	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(67,-65);
	glVertex2i(69,-65);
	glVertex2i(69,-63);
	glVertex2i(67,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(8, 68, 189 );
	glVertex2i(69,-65);
	glVertex2i(71,-65);
	glVertex2i(71,-63);
	glVertex2i(69,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(71,-65);
	glVertex2i(73,-65);
	glVertex2i(73,-63);
	glVertex2i(71,-63);
	glEnd();

	//Front tire
	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Back Tire
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Back Tire Middle
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    glPopMatrix();



    glFlush();

}

void display1N (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
   glBegin(GL_QUADS);
	glColor3ub(7, 26, 116 );
	glVertex2i(-100,-20);
	glVertex2i(-100,100);
	glVertex2i(100,100);
	glVertex2i(100,-20);
	glEnd();

	//Star
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,90);
	glVertex2i(-70,90);
	glVertex2i(-50,90);
	glVertex2i(-30,90);
	glVertex2i(-10,90);
	glVertex2i(10,90);
	glVertex2i(30,90);
	glVertex2i(50,90);
	glVertex2i(70,90);
	glVertex2i(90,90);
	glEnd();

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,70);
	glVertex2i(-70,70);
	glVertex2i(-50,70);
	glVertex2i(-30,70);
	glVertex2i(-10,70);
	glVertex2i(10,70);
	glVertex2i(30,70);
	glVertex2i(50,70);
	glVertex2i(70,70);
	glVertex2i(90,70);
	glEnd();

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,50);
	glVertex2i(-70,50);
	glVertex2i(-50,50);
	glVertex2i(-30,50);
	glVertex2i(-10,50);
	glVertex2i(10,50);
	glVertex2i(30,50);
	glVertex2i(50,50);
	glVertex2i(70,50);
	glVertex2i(90,50);
	glEnd();

    //Sun Move
    glPushMatrix();
    glTranslatef(sunPosition1,0.0f,0.0f);

    //Sun draw

	float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    x=70; y=75; radius =10;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    glPopMatrix();

    //cloud1 move
    glPushMatrix();
    glTranslatef(cloudPosition1,0,0);
    //Cloud Draw
    //Cloud-1

    //P-1


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-75; y=92; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();



    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-79; y=87; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();


    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-85; y=82; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-80; y=81; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-73; y=85; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234  );
    x=-74; y=79; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
    glPopMatrix();

    //cloud2 move
    glPushMatrix();
    glTranslatef(cloudPosition2,0,0);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-35; y=78; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-41; y=73; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-47; y=67; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-40; y=66; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-33; y=70; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();


    //House side background
	  glBegin(GL_QUADS);
	glColor3ub(50,205,50);
	glVertex2i(-100,-20);
	glVertex2i(-100,-40);
	glVertex2i(100,-40);
	glVertex2i(100,-20);
	glEnd();


    //Road background
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-100,-40);
	glVertex2i(-100,-100);
	glVertex2i(100,-100);
	glVertex2i(100,-40);
	glEnd();

	//Road Mark
	glLineWidth(2);
	glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
    glVertex2i(-70,-70);
    glVertex2i(-50,-70);
    glVertex2i(-60,-70);
    glVertex2i(-40,-70);
    glVertex2i(-30,-70);
    glVertex2i(-10,-70);
    glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Footpath
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(100,-40);
	glVertex2i(100,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-40);
		glColor3ub(203, 67, 53  );
    glVertex2i(100,-25);
	glVertex2i(100,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-25);
	glEnd();

	//Background House

	// Left 2nd Background
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(-101,-20);
	glVertex2i(-101,15);
	glVertex2i(-95,15);
	glVertex2i(-95,-20);
	glEnd();

    // Left 2nd Background
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(-55,-20);
	glVertex2i(-55,18);
	glVertex2i(-36,18);
	glVertex2i(-36,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226 );
	glVertex2i(-52,-5);
	glVertex2i(-52,15);
	glVertex2i(-42,15);
	glVertex2i(-42,-5);
	glEnd();

	//Tree-1 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-48,-25);
	glVertex2i(-48,-10);
	glVertex2i(-46,-10);
	glVertex2i(-46,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-55,-12);
	glVertex2i(-47,9);
	glVertex2i(-39,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-54,-5);
	glVertex2i(-47,15);
	glVertex2i(-40,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-53,2);
	glVertex2i(-47,22);
	glVertex2i(-41,2);
	glEnd();


      //Masque Draw

      //Masque Gombuj
	   glBegin(GL_TRIANGLE_FAN);
    glColor3ub(94, 31, 125 );
    x=-76; y=25; radius =13;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();


	 //Masque design
	  glBegin(GL_QUADS);
	glColor3ub(159, 164, 236);
	glVertex2i(-98,-22);
	glVertex2i(-98,23);
	glVertex2i(-54,23);
	glVertex2i(-54,-22);
	glEnd();


	 //Masque footer design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-98,-22);
	glVertex2i(-99,-25);
	glVertex2i(-53,-25);
	glVertex2i(-54,-22);
	glEnd();



	 //Masque door design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-81,-25);
	glVertex2i(-81,-1);
	glVertex2i(-71,-1);
	glVertex2i(-71,-25);
	glEnd();

	//Masque door top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-81,-1);
	glVertex2i(-82,1);
	glVertex2i(-76,12);
	glVertex2i(-70,1);
	glVertex2i(-71,-1);
	glEnd();


	//Masque left 1st window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-89,-25);
	glVertex2i(-89,-6);
	glVertex2i(-83,-6);
	glVertex2i(-83,-25);
	glEnd();

	//Masque left 1st window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-89,-6);
	glVertex2i(-90,-4);
	glVertex2i(-86.5,3);
	glVertex2i(-82,-4);
	glVertex2i(-83,-6);
	glEnd();


	//Masque left 2nd window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-91,-25);
	glVertex2i(-91,-11);
	glVertex2i(-96,-11);
	glVertex2i(-96,-25);
	glEnd();

	//Masque left 2nd window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-96,-11);
	glVertex2i(-97,-9);
	glVertex2i(-93.99,-1);
	glVertex2i(-90,-9);
	glVertex2i(-91,-11);
	glEnd();


	//Masque right 1st window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-69,-25);
	glVertex2i(-69,-6);
	glVertex2i(-63,-6);
	glVertex2i(-63,-25);
	glEnd();

	//Masque right 1st window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-69,-6);
	glVertex2i(-70,-4);
	glVertex2i(-66.5,4);
	glVertex2i(-62,-4);
	glVertex2i(-63,-6);
	glEnd();

	//Masque right 2nd window design
	 glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-61,-25);
	glVertex2i(-61,-11);
	glVertex2i(-56,-11);
	glVertex2i(-56,-25);
	glEnd();

	//Masque right 2nd window top design
	 glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125 );
	glVertex2i(-61,-11);
	glVertex2i(-62,-9);
	glVertex2i(-58.5,-1);
	glVertex2i(-55,-9);
	glVertex2i(-56,-11);
	glEnd();

	 //Masque Top box design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-99,23);
	glVertex2i(-99,20);
	glVertex2i(-53,20);
	glVertex2i(-53,23);
	glEnd();

	//Masque Laft meaner design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-98,60);
	glVertex2i(-98,23);
	glVertex2i(-94,23);
	glVertex2i(-94,60);
	glEnd();

	//Masque Laft meaner art design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-98,43);
	glVertex2i(-98,41);
	glVertex2i(-94,41);
	glVertex2i(-94,43);
	glEnd();

	//Masque Laft meaner top design
	glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125);
	glVertex2i(-98,60);
	glVertex2i(-99,62);
	glVertex2i(-96.5,70);
	glVertex2i(-93,62);
	glVertex2i(-94,60);

	glEnd();

	//Masque Right meaner design
	  glBegin(GL_QUADS);
	glColor3ub(206, 230, 231 );
	glVertex2i(-54,60);
	glVertex2i(-54,23);
	glVertex2i(-58,23);
	glVertex2i(-58,60);
	glEnd();

	//Masque Right meaner art design
	  glBegin(GL_QUADS);
	glColor3ub(94, 31, 125 );
	glVertex2i(-54,43);
	glVertex2i(-54,41);
	glVertex2i(-58,41);
	glVertex2i(-58,43);
	glEnd();

	//Masque Laft meaner top design
	glBegin(GL_POLYGON);
	glColor3ub(94, 31, 125);

	glVertex2i(-58,60);
	glVertex2i(-59,62);
	glVertex2i(-56.5,70);
	glVertex2i(-53,62);
	glVertex2i(-54,60);

	glEnd();

	//Background House

    //Middle Right Background
	glBegin(GL_QUADS);
	glColor3ub(77, 86, 86);
	glVertex2i(-5,-20);
	glVertex2i(-5,30);
	glVertex2i(10,30);
	glVertex2i(10,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(110, 178, 236);
	glVertex2i(-4,-10);
	glVertex2i(-4,25);
	glVertex2i(5,25);
	glVertex2i(5,-10);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-4, 20);
	glVertex2i(5, 20);
	glVertex2i(-4, 14);
	glVertex2i(5, 14);
	glVertex2i(-4, 8);
	glVertex2i(5, 8);
	glVertex2i(-4, 2);
	glVertex2i(5, 2);
	glVertex2i(-4, -4);
	glVertex2i(5, -4);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(151, 154, 154 );
	glVertex2i(4,-20);
	glVertex2i(4,25);
	glVertex2i(30,25);
	glVertex2i(30,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(110, 178, 236);
	glVertex2i(6,-10);
	glVertex2i(6,22);
	glVertex2i(15,22);
	glVertex2i(15,-10);
	glEnd();


	//1st HOUSE DESIGN

	//Body Structure
	glBegin(GL_QUADS);
	glColor3ub(125, 206, 160);
	glVertex2i(-40,-22);
	glVertex2i(-40,40);
	glVertex2i(-4,40);
	glVertex2i(-4,-22);
	glEnd();

	//Building down
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(-40,-22);
	glVertex2i(-41,-25);
	glVertex2i(-3,-25);
	glVertex2i(-4,-22);
	glEnd();

	//Building top
	glBegin(GL_TRIANGLES);
	glColor3ub(135, 54, 0 );
	glVertex2i(-42,40);
	glVertex2i(-2,40);
	glVertex2i(-22,55);
	glEnd();

	//Building 2nd top
	glBegin(GL_QUADS);
	glColor3ub(135, 54, 0);
	glVertex2i(-42,5);
	glVertex2i(-40,10);
	glVertex2i(-4,10);
	glVertex2i(-2,5);
	glEnd();

	//Left top window
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(-37,35);
	glVertex2i(-29,35);
	glVertex2i(-29,14);
	glVertex2i(-37,14);
	glEnd();

    //Left top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-33, 35);
	glVertex2i(-33, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-37, 24.5);
	glVertex2i(-29, 24.5);

	glEnd();

	//Middle top window
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(-26,35);
	glVertex2i(-18,35);
	glVertex2i(-18,14);
	glVertex2i(-26,14);
	glEnd();

	//Middle top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-22, 35);
	glVertex2i(-22, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-26, 24.5);
	glVertex2i(-18, 24.5);

	glEnd();

	//Right top window
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(-15,35);
	glVertex2i(-7,35);
	glVertex2i(-7,14);
	glVertex2i(-15,14);
	glEnd();

	//Right top window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-11, 35);
	glVertex2i(-11, 14);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-15, 24.5);
	glVertex2i(-7, 24.5);

	glEnd();

	//Left down window
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(-37,-18);
	glVertex2i(-29,-18);
	glVertex2i(-29,2);
	glVertex2i(-37,2);
	glEnd();

	//Left down window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-33, -18);
	glVertex2i(-33, 2);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-37, -8);
	glVertex2i(-29, -8);

	glEnd();

	//Right down window
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(-15,-18);
	glVertex2i(-7,-18);
	glVertex2i(-7,2);
	glVertex2i(-15,2);
	glEnd();

	//Right down window design
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(-11, -18);
	glVertex2i(-11, 2);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-15, -8);
	glVertex2i(-7, -8);

	glEnd();

	//Door design
	glBegin(GL_QUADS);
	glColor3ub(46, 134, 193);
	glVertex2i(-26,-22);
	glVertex2i(-18,-22);
	glVertex2i(-18,0);
	glVertex2i(-26,0);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(-22, -22);
	glVertex2i(-22, 0);

	glEnd();


		//Tree 3 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(9,-23);
	glVertex2i(9,-10);
	glVertex2i(11,-10);
	glVertex2i(11,-23);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(3,-11);
	glVertex2i(10,9);
	glVertex2i(17,-11);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(4,-5);
	glVertex2i(10,15);
	glVertex2i(16,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(5,2);
	glVertex2i(10,21);
	glVertex2i(15,2);
	glEnd();


	//Background Right house Draw

	//House Part
	glBegin(GL_QUADS);
	glColor3ub(179, 182, 183 );
	glVertex2i(83,28);
	glVertex2i(83,-20);
	glVertex2i(102,-20);
	glVertex2i(102,28);
	glEnd();

	//House Left window Part
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(83,24);
	glVertex2i(83,20);
	glVertex2i(92,20);
	glVertex2i(92,24);
	glEnd();

	//House Right window Part
	glBegin(GL_QUADS);
	glColor3ub(23, 32, 42);
	glVertex2i(95,24);
	glVertex2i(95,20);
	glVertex2i(102,20);
	glVertex2i(102,24);
	glEnd();

	//House Middle window Part
	glBegin(GL_QUADS);
	glColor3ub(247, 249, 249 );
	glVertex2i(83,16);
	glVertex2i(83,12);
	glVertex2i(102,12);
	glVertex2i(102,16);
	glEnd();

	//House Down left  Part
	glBegin(GL_QUADS);
	glColor3ub(97, 106, 107 );
	glVertex2i(86,10);
	glVertex2i(86,-20);
	glVertex2i(88,-20);
	glVertex2i(88,10);
	glEnd();

	//House Middle window Part
	glBegin(GL_QUADS);
	glColor3ub(97, 106, 107 );
	glVertex2i(96,10);
	glVertex2i(96,-20);
	glVertex2i(98,-20);
	glVertex2i(98,10);
	glEnd();


	//Shopping Mall Design

	//Down part
	glBegin(GL_QUADS);
	glColor3ub(104, 35, 31);
	glVertex2i(85,-22);
	glVertex2i(86,-25);
	glVertex2i(14,-25);
	glVertex2i(15,-22);
	glEnd();

	//Left Down->1 part
	glBegin(GL_QUADS);
	glColor3ub(19, 47, 112 );
	glVertex2i(16,-22);
	glVertex2i(16,2);
	glVertex2i(36,2);
	glVertex2i(36,-22);
	glEnd();

	//Left ->2 part
	glBegin(GL_QUADS);
	glColor3ub(245, 103, 16);
	glVertex2i(15,6);
	glVertex2i(15,2);
	glVertex2i(36,2);
	glVertex2i(36,6);
	glEnd();

	//Left ->3 part
	glBegin(GL_QUADS);
	glColor3ub(19, 47, 112 );
	glVertex2i(16,6);
	glVertex2i(16,29);
	glVertex2i(36,29);
	glVertex2i(36,6);
	glEnd();

	//Left ->4 part
	glBegin(GL_QUADS);
	glColor3ub(80, 33, 18);
	glVertex2i(16,31);
	glVertex2i(16,29);
	glVertex2i(36,29);
	glVertex2i(36,31);
	glEnd();

	//Left Top part
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(13,39);
	glVertex2i(16,31);
	glVertex2i(36,31);
	glVertex2i(36,36);
	glEnd();

	//Right Down->1 part
	glBegin(GL_QUADS);
	glColor3ub(19, 47, 112 );
	glVertex2i(60,-22);
	glVertex2i(61.99,2);
	glVertex2i(84,2);
	glVertex2i(84,-22);
	glEnd();

	//Right ->2 part
	glBegin(GL_QUADS);
	glColor3ub(245, 103, 16);
	glVertex2i(60,6);
	glVertex2i(60,2);
	glVertex2i(85,2);
	glVertex2i(85,6);
	glEnd();

	//Right ->3 part
	glBegin(GL_QUADS);
	glColor3ub(19, 47, 112 );
	glVertex2i(60,6);
	glVertex2i(60,29);
	glVertex2i(84,29);
	glVertex2i(84,6);
	glEnd();

	//Right ->4 part
	glBegin(GL_QUADS);
	glColor3ub(80, 33, 18);
	glVertex2i(60,31);
	glVertex2i(60,29);
	glVertex2i(84,29);
	glVertex2i(84,31);
	glEnd();

	//Right Top part
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(60,36);
	glVertex2i(60,31);
	glVertex2i(84,31);
	glVertex2i(83,35);
	glEnd();


	//Gate body design
	glBegin(GL_QUADS);
	glColor3ub(234, 29, 16);
	glVertex2i(36,-22);
	glVertex2i(36,42);
	glVertex2i(66,49);
	glVertex2i(62,-22);
	glEnd();

	//Gate design
	glBegin(GL_QUADS);
	glColor3ub(19, 47, 112 );
	glVertex2i(43,-22);
	glVertex2i(43,0);
	glVertex2i(54,0);
	glVertex2i(54,-22);
	glEnd();

	//Gate Top box design
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(40,35);
	glVertex2i(60,35);
	glVertex2i(60,15);
	glVertex2i(40,15);
	glEnd();

	//Art in Market

	//Door Art

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(49, -22);
	glVertex2i(49, 0);

	glEnd();

	//Left Down part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(20, -22);
	glVertex2i(20, 2);
	glEnd();

	//Left Down part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(33, -22);
	glVertex2i(33, 2);
	glEnd();

	//Left Top part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(20, 6);
	glVertex2i(20, 30);
	glEnd();

	//Left Top part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(33, 6);
	glVertex2i(33, 30);
	glEnd();

	//Right Down part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(66, -22);
	glVertex2i(66, 2);
	glEnd();

	//Left Down part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(80, -22);
	glVertex2i(80, 2);
	glEnd();

	//Left Top part Art-1

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(66, 6);
	glVertex2i(66, 30);
	glEnd();

	//Left Top part Art-2

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
    glVertex2i(80, 6);
	glVertex2i(80, 30);
	glEnd();

	//Tree 2 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(0,-25);
	glVertex2i(0,-10);
	glVertex2i(-2,-10);
	glVertex2i(-2,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-8,-12);
	glVertex2i(-1,9);
	glVertex2i(6,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-7,-5);
	glVertex2i(-1,15);
	glVertex2i(5,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-6,2);
	glVertex2i(-1,22);
	glVertex2i(4,2);
	glEnd();

	//Tree 4 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(91,-25);
	glVertex2i(91,-10);
	glVertex2i(93,-10);
	glVertex2i(93,-25);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(84,-12);
	glVertex2i(92,9);
	glVertex2i(100,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(85,-5);
	glVertex2i(92,15);
	glVertex2i(99,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(86,2);
	glVertex2i(92,22);
	glVertex2i(98,2);
	glEnd();

		//Lamp Draw

	 //Lamp 1
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-70,-25);
	glVertex2i(-68,-25);
	glVertex2i(-68,0);
	glVertex2i(-70,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-72,5);
	glVertex2f(-66,5);
	glVertex2f(-69,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(-68,0);
	glVertex2i(-70,0);
    glVertex2i(-71,5);
	glVertex2i(-67,5);
    glEnd();



    //Lamp 2
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(72,-25);
	glVertex2i(70,-25);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
	glVertex2f(68,5);
	glVertex2f(71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(70,0);
	glVertex2i(72,0);
    glVertex2i(73,5);
	glVertex2i(69,5);
    glEnd();

    //Lamp 3
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-5,-25);
	glVertex2i(-7,-25);
	glVertex2i(-7,0);
	glVertex2i(-5,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-9,5);
	glVertex2f(-3,5);
	glVertex2f(-6,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(-7,0);
	glVertex2i(-5,0);
    glVertex2i(-4,5);
	glVertex2i(-8,5);
    glEnd();

glPushMatrix();
glTranslatef(menPosition2,0.0f,0.0f);
//Man 1 patient
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(44, 80, 197);
	glVertex2i(-22,-40);
	glVertex2i(-21,-33);
	glVertex2i(-18,-33);
	glVertex2i(-20,-40);

	//Right leg
	glVertex2i(-18,-40);
	glVertex2i(-20,-33);
	glVertex2i(-17,-33);
	glVertex2i(-16,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(56, 225, 38 );
	glVertex2i(-21,-33);
	glVertex2i(-21,-26);
	glVertex2i(-19,-27);
	glVertex2i(-17,-26);
	glVertex2i(-17,-33);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(-22,-26);
	glVertex2i(-21,-26);
	glVertex2i(-21,-30);
	glVertex2i(-22,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-22, -30);
	glVertex2i(-21, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(-17,-26);
	glVertex2i(-16,-26);
	glVertex2i(-16,-30);
	glVertex2i(-17,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-16, -30);
	glVertex2i(-17, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-18,-40);
	glVertex2i(-17,-38);
	glVertex2i(-16,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-22,-40);
	glVertex2i(-21,-38);
	glVertex2i(-20,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-19, -27);
	glVertex2i(-19, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-19; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-22,-22);
	glVertex2i(-20,-20);
	glVertex2i(-18,-20);
	glVertex2i(-16,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-17,-23);
	glVertex2i(-21,-23);
	glVertex2i(-21,-25);
	glVertex2i(-17,-25);
	glEnd();

	//Man 2 doctor
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0 );
	glVertex2i(-15,-40);
	glVertex2i(-14,-33);
	glVertex2i(-11,-33);
	glVertex2i(-13,-40);

	//Right leg
	glVertex2i(-11,-40);
	glVertex2i(-13,-33);
	glVertex2i(-10,-33);
	glVertex2i(-9,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(-14,-35);
	glVertex2i(-14,-26);
	glVertex2i(-12,-27);
	glVertex2i(-10,-26);
	glVertex2i(-10,-35);
	glEnd();

		    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2i(-12, -27);
	glVertex2i(-12, -35);
	glEnd();

		    glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(241, 15, 15 );
	glVertex2i(-11, -28);
	glVertex2i(-11, -32);
		glVertex2i(-12, -30);
	glVertex2i(-10, -30);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(-15,-26);
	glVertex2i(-14,-26);
	glVertex2i(-14,-30);
	glVertex2i(-15,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-15, -30);
	glVertex2i(-14, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(-10,-26);
	glVertex2i(-9,-26);
	glVertex2i(-9,-30);
	glVertex2i(-10,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-9, -30);
	glVertex2i(-10, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-11,-40);
	glVertex2i(-10,-38);
	glVertex2i(-9,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-15,-40);
	glVertex2i(-14,-38);
	glVertex2i(-13,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-12, -27);
	glVertex2i(-12, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-12; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-15,-22);
	glVertex2i(-13,-20);
	glVertex2i(-11,-20);
	glVertex2i(-9,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-10,-23);
	glVertex2i(-14,-23);
	glVertex2i(-14,-25);
	glVertex2i(-10,-25);
	glEnd();
glPopMatrix();



//Man 5 guard
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(128, 71, 71);
	glVertex2i(41,-25);
	glVertex2i(40,-17);
	glVertex2i(37,-17);
	glVertex2i(39,-25);

	//Right leg
	glVertex2i(37,-25);
	glVertex2i(39,-17);
	glVertex2i(36,-17);
	glVertex2i(35,-25);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(128, 71, 71);
	glVertex2i(40,-18);
	glVertex2i(40,-10);
	glVertex2i(38,-11);
	glVertex2i(36,-10);
	glVertex2i(36,-18);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(41,-10);
	glVertex2i(40,-10);
	glVertex2i(40,-14);
	glVertex2i(41,-14);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(41, -14);
	glVertex2i(40, -15);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(36,-10);
	glVertex2i(35,-10);
	glVertex2i(35,-14);
	glVertex2i(36,-14);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(35, -14);
	glVertex2i(36, -15);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(1,0,0);
	glVertex2i(37,-25);
	glVertex2i(36,-23);
	glVertex2i(35,-25);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(41,-25);
	glVertex2i(40,-23);
	glVertex2i(39,-25);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(38, -11);
	glVertex2i(38, -8);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=38; y=-7; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(41,-6);
	glVertex2i(39,-4);
	glVertex2i(37,-4);
	glVertex2i(35,-6);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(36,-7);
	glVertex2i(40,-7);
	glVertex2i(40,-9);
	glVertex2i(36,-9);
	glEnd();



glPushMatrix();
glTranslatef(ambulancePosition2,0.0f,0.0f);
	// ambulance body
	glBegin(GL_POLYGON);
	glColor3ub(253, 254, 254);
	glVertex2f(-90, -50);
	glVertex2f(-50, -50);
	glVertex2f(-51, -40);
	glVertex2f(-55, -35);
	glVertex2f(-60, -20);
	glVertex2f(-85, -20);
	glVertex2f(-90, -35);
	glEnd();
	       //ambulance sine
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(-51,-40);
	glVertex2i(-51,-39);
    glVertex2i(-90,-39);
	glVertex2i(-90,-40);
		glVertex2i(-80,-25);
	glVertex2i(-79,-25);
	glVertex2i(-79,-35);
	glVertex2i(-80,-35);
		glVertex2i(-82,-29);
	glVertex2i(-77,-29);
	glVertex2i(-77,-31);
	glVertex2i(-82,-31);
		glVertex2i(-70,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,-18);
	glVertex2i(-70,-18);
    glEnd();


            	        //ambulance glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(-75,-23);
	glVertex2i(-68,-23);
    glVertex2i(-68,-35);
	glVertex2i(-75,-35);
		glVertex2i(-61,-23);
	glVertex2i(-56,-35);
	glVertex2i(-66,-35);
	glVertex2i(-66,-23);
    glEnd();
       //ambulance bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-88,-50);
	glVertex2i(-91,-50);
    glVertex2i(-91,-46);
	glVertex2i(-88,-46);
		glVertex2i(-52,-50);
	glVertex2i(-52,-46);
	glVertex2i(-49,-46);
	glVertex2i(-49,-50);
    glEnd();

               //ambulance Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(-90,-35);
	glVertex2i(-89,-35);
    glVertex2i(-89,-40);
	glVertex2i(-90,-40);
	glColor3ub(251, 250, 32);
		glVertex2i(-51,-40);
	glVertex2i(-55,-40);
	glVertex2i(-55,-42);
	glVertex2i(-51,-42);
    glEnd();

     //Night Light
    glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(-50,-43);
	glVertex2i(-50,-41);
    glVertex2i(-15,-45);
	glVertex2i(-30,-48);
	glEnd();


        //ambulance wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //ambulance wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
glTranslatef(carPosition2,0.0f,0.0f);
    	        //car body
	glBegin(GL_QUADS);
	glColor3ub(125, 60, 152);
	glVertex2i(50,-70);
	glVertex2i(85,-70);
    glVertex2i(87,-80);
	glVertex2i(48,-80);
		glVertex2i(58,-70);
	glVertex2i(61,-60);
	glVertex2i(76,-60);
	glVertex2i(78,-70);
    glEnd();

        	        //car glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(59,-70);
	glVertex2i(62,-61);
    glVertex2i(75,-61);
	glVertex2i(77,-70);
		glVertex2i(69,-70);
	glVertex2i(69,-61);
	glVertex2i(73,-61);
	glVertex2i(75,-70);
    glEnd();

        //car bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(46,-80);
	glVertex2i(53,-80);
    glVertex2i(53,-76);
	glVertex2i(46,-76);
		glVertex2i(88,-80);
	glVertex2i(82,-80);
	glVertex2i(82,-76);
	glVertex2i(88,-76);
    glEnd();


        glLineWidth(2);
        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
        glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

            //car Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(84,-70);
	glVertex2i(85,-70);
    glVertex2i(85,-75);
	glVertex2i(84,-75);
	glColor3ub(226, 224, 224);
		glVertex2i(51,-70);
	glVertex2i(49,-70);
	glVertex2i(49,-72);
	glVertex2i(51,-72);
    glEnd();

    //Front Light Night
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(49,-73);
	glVertex2i(49,-70);
	glVertex2i(14,-76);
	glVertex2i(29,-79);
	glEnd();

    //Car wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Car wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

glPopMatrix();


	glPushMatrix();
    glTranslatef(policecarPosition,0.0f,0.0f);

	//Police Car
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2i(45,-90);
	glVertex2i(48,-78);
	glVertex2i(57,-75);
	glVertex2i(65,-65);
	glVertex2i(83,-65);
	glVertex2i(86,-75);
	glVertex2i(93,-75);
	glVertex2i(95,-90);
	glEnd();

	//Front window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(65,-67);
	glVertex2i(73,-67);
	glVertex2i(73,-74);
	glVertex2i(60,-74);
	glEnd();

	//Back window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(74,-67);
	glVertex2i(82,-67);
	glVertex2i(84,-74);
	glVertex2i(74,-74);
	glEnd();

	//Body Art
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(35, 57, 186);
	glVertex2i(52, -80);
	glVertex2i(88, -80);
	glEnd();

	//Front art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(44,-90);
	glVertex2i(48,-90);
	glVertex2i(48,-87);
	glVertex2i(44,-87);
	glEnd();

	//Back art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(92,-90);
	glVertex2i(97,-90);
	glVertex2i(97,-87);
	glVertex2i(92,-87);
	glEnd();

	//Front Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(47,-82);
	glVertex2i(50,-82);
	glVertex2i(50,-79);
	glVertex2i(48,-79);
	glEnd();

	//Back Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(91,-82);
	glVertex2i(94,-82);
	glVertex2i(93,-79);
	glVertex2i(91,-79);
	glEnd();

	//Top Light
	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(67,-65);
	glVertex2i(69,-65);
	glVertex2i(69,-63);
	glVertex2i(67,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(8, 68, 189 );
	glVertex2i(69,-65);
	glVertex2i(71,-65);
	glVertex2i(71,-63);
	glVertex2i(69,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(71,-65);
	glVertex2i(73,-65);
	glVertex2i(73,-63);
	glVertex2i(71,-63);
	glEnd();

	//Front Light Night
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(45,-82);
	glVertex2i(45,-79);
	glVertex2i(10,-84);
	glVertex2i(25,-87);
	glEnd();

	//Front tire
	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Back Tire
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Back Tire Middle
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    glPopMatrix();



    glFlush();

}


void display2 (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
   glBegin(GL_QUADS);
	glColor3ub(10, 196, 236 );
	glVertex2i(-100,-20);
	glVertex2i(-100,100);
	glVertex2i(100,100);
	glVertex2i(100,-20);
	glEnd();


glPushMatrix();
glTranslatef(sunPosition2,0.0f,0.0f);
		//Sun draw
	float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(247, 254, 0);
        x=70; y=75; radius =10;
    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;
                glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

glPopMatrix();

glPushMatrix();
glTranslatef(cloudPosition3,0.0f,0.0f);
    //Cloud-1

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-75; y=92; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-79; y=87; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-85; y=82; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-80; y=81; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-73; y=85; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-74; y=79; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudPosition4,0.0f,0.0f);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-35; y=78; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-41; y=73; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-47; y=67; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-40; y=66; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255 );
    x=-33; y=70; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();

    //Grass
	  glBegin(GL_QUADS);
	glColor3ub(136, 221, 12 );
	glVertex2i(-100,-20);
	glVertex2i(-100,-40);
	glVertex2i(100,-40);
	glVertex2i(100,-20);
	glEnd();


    //Road background
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-100,-40);
	glVertex2i(-100,-100);
	glVertex2i(100,-100);
	glVertex2i(100,-40);
	glEnd();



    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
       glVertex2i(-70,-70);
    glVertex2i(-50,-70);
        glVertex2i(-60,-70);
    glVertex2i(-40,-70);
        glVertex2i(-30,-70);
    glVertex2i(-10,-70);
           glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Background left 1st

    glBegin(GL_QUADS);
	glColor3ub(204, 209, 209 );
	glVertex2i(-101,-20);
	glVertex2i(-101,23);
	glVertex2i(-95,23);
	glVertex2i(-95,-20);
	glEnd();

    //Background left 2nd

    glBegin(GL_QUADS);
	glColor3ub(179, 182, 183);
	glVertex2i(-50,-20);
	glVertex2i(-50,23);
	glVertex2i(-28,23);
	glVertex2i(-28,-20);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(-46,-10);
	glVertex2i(-46,18);
	glVertex2i(-33,18);
	glVertex2i(-33,-10);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-46, 14);
	glVertex2i(-33, 14);
	glVertex2i(-46, 10);
	glVertex2i(-33, 10);
	glVertex2i(-46, 6);
	glVertex2i(-33, 6);
	glVertex2i(-39, 18);
	glVertex2i(-39, -10);
	glEnd();

	//Background Right 1st

	glBegin(GL_QUADS);
	glColor3ub(208, 211, 212);
	glVertex2i(25,-20);
	glVertex2i(25,18);
	glVertex2i(37,18);
	glVertex2i(37,-20);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(25,5);
	glVertex2i(25,15);
	glVertex2i(35,15);
	glVertex2i(35,5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 139, 150 );
	glVertex2i(35,-20);
	glVertex2i(35,13);
	glVertex2i(50,13);
	glVertex2i(50,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(37,3);
	glVertex2i(37,10);
	glVertex2i(50,10);
	glVertex2i(50,3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(208, 211, 212);
	glVertex2i(95,-20);
	glVertex2i(95,13);
	glVertex2i(100,13);
	glVertex2i(100,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(95,3);
	glVertex2i(95,10);
	glVertex2i(98,10);
	glVertex2i(98,3);
	glEnd();


	//Tree-2 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-36,-23);
	glVertex2i(-36,-11);
	glVertex2i(-34,-11);
	glVertex2i(-34,-23);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-42,-12);
	glVertex2i(-35,7);
	glVertex2i(-29,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-40,-5);
	glVertex2i(-35,13);
	glVertex2i(-30,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-39,2);
	glVertex2i(-35,15);
	glVertex2i(-31,2);
	glEnd();

    //Hospital Stairs
	  glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-40,-30);
	glVertex2i(-40,-25);
    glVertex2i(40,-25);
	glVertex2i(40,-30);
		glVertex2i(-35,-25);
	glVertex2i(-35,-20);
    glVertex2i(35,-20);
	glVertex2i(35,-25);
	glEnd();

    //glBegin(GL_LINES);
    //glColor3f(206.0f, 193.0f, 111.0f);
    //glVertex2i(-100,0);
    //glVertex2i(100,0);
    //glEnd();

    //Hospital pillers
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(34,-20);
	glVertex2i(32,-20);
	glVertex2i(32,30);
	glVertex2i(34,30);

	glVertex2i(-34,-20);
	glVertex2i(-32,-20);
	glVertex2i(-32,30);
	glVertex2i(-34,30);
	glEnd();


	    //Hospital Room 1st floor
	glBegin(GL_QUADS);
	glColor3ub(230, 126, 34);
	glVertex2i(30,-20);
	glVertex2i(10,-20);
	glVertex2i(10,0);
	glVertex2i(30,0);
		glVertex2i(-30,-20);
	glVertex2i(-10,-20);
	glVertex2i(-10,0);
	glVertex2i(-30,0);
	glEnd();

		    //Hospital Roof 1st floor
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(30,0);
	glVertex2i(10,0);
	glVertex2i(10,5);
	glVertex2i(30,5);
		glVertex2i(-30,0);
	glVertex2i(-10,0);
	glVertex2i(-10,5);
	glVertex2i(-30,5);
			glVertex2i(10,5);
	glVertex2i(-10,5);
	glVertex2i(-10,10);
	glVertex2i(10,10);
	glEnd();

		    //Hospital Room 1st floor Glass system
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(29,-19);
	glVertex2i(11,-19);
	glVertex2i(11,-1);
	glVertex2i(29,-1);
		glVertex2i(-29,-19);
	glVertex2i(-11,-19);
	glVertex2i(-11,-1);
	glVertex2i(-29,-1);
	glEnd();

			    //Hospital Room 1st floor Glass 1
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(12,-18);
	glVertex2i(12,-2);
	glVertex2i(19,-2);
	glVertex2i(19,-18);
        glVertex2i(-12,-18);
	glVertex2i(-12,-2);
	glVertex2i(-19,-2);
	glVertex2i(-19,-18);

	glEnd();

				    //Hospital Room 1st floor Glass 2
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(20,-18);
	glVertex2i(20,-2);
	glVertex2i(28,-2);
	glVertex2i(28,-18);
        glVertex2i(-20,-18);
	glVertex2i(-20,-2);
	glVertex2i(-28,-2);
	glVertex2i(-28,-18);

	glEnd();

		    //Hospital Room 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(230, 126, 34);
	glVertex2i(30,5);
	glVertex2i(10,5);
	glVertex2i(10,25);
	glVertex2i(30,25);
			glVertex2i(-30,5);
	glVertex2i(-10,5);
	glVertex2i(-10,25);
	glVertex2i(-30,25);
	glEnd();

        //Hospital Roof 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(40,25);
	glVertex2i(10,25);
	glVertex2i(10,30);
	glVertex2i(40,30);
		glVertex2i(-40,25);
	glVertex2i(-10,25);
	glVertex2i(-10,30);
	glVertex2i(-40,30);
        glVertex2i(12,35);
	glVertex2i(-12,35);
	glVertex2i(-12,40);
	glVertex2i(12,40);
	        glVertex2i(13,40);  // For lobby
	glVertex2i(-13,40);
	glVertex2i(-13,45);
	glVertex2i(13,45);
	glEnd();


			    //Hospital Room 2nd floor Glass system
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(29,6);
	glVertex2i(11,6);
	glVertex2i(11,24);
	glVertex2i(29,24);
glColor3ub(253, 254, 254);
	glVertex2i(-29,6);
	glVertex2i(-11,6);
	glVertex2i(-11,24);
	glVertex2i(-29,24);
	glEnd();

    			    //Hospital Room 2nd floor Glass 1
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(12,7);
	glVertex2i(12,23);
	glVertex2i(19,23);
	glVertex2i(19,7);
        glVertex2i(-12,7);
	glVertex2i(-12,23);
	glVertex2i(-19,23);
	glVertex2i(-19,7);

	glEnd();

				    //Hospital Room 2nd floor Glass 2
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(20,6);
	glVertex2i(20,23);
	glVertex2i(28,23);
	glVertex2i(28,6);
        glVertex2i(-20,6);
	glVertex2i(-20,23);
	glVertex2i(-28,23);
	glVertex2i(-28,6);

	glEnd();

		    //Hospital lobby 1st floor
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(10,-20);
	glVertex2i(-10,-20);
	glVertex2i(-10,5);
	glVertex2i(10,5);
	glEnd();

			    //Hospital lobby 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(10,10);
	glVertex2i(-10,10);
	glVertex2i(-10,35);
	glVertex2i(10,35);
	glEnd();

		//Gate pillers
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(8,-20);
	glVertex2i(6,-20);
	glVertex2i(6,-5);
	glVertex2i(8,-5);

	glVertex2i(-8,-20);
	glVertex2i(-6,-20);
	glVertex2i(-6,-5);
	glVertex2i(-8,-5);
	glEnd();

       //Hospital Roof Gate
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(9,-5);  // For gate
	glVertex2i(-9,-5);
	glVertex2i(-9,0);
	glVertex2i(9,0);
	glEnd();

    //Hospital Gate Glass system
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(4,-20);
	glVertex2i(4,-5);
	glVertex2i(-4,-5);
	glVertex2i(-4,-20);
	glEnd();

	    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(0,-20);
    glVertex2i(0,-5);
    glEnd();

	    //Hospital Sine box
	glBegin(GL_QUADS);
	glColor3ub(192, 57, 43 );
	glVertex2i(8,12);
	glVertex2i(-8,12);
	glVertex2i(-8,33);
	glVertex2i(8,33);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254 );
    glVertex2i(-6.5,24.5);
	glVertex2i(6.5,24.5);
	glVertex2i(6.5,21.5);
	glVertex2i(-6.5,21.5);
	glEnd();

	    		glBegin(GL_QUADS);
	glColor3ub(253, 254, 254 );
    glVertex2i(-1,30);
	glVertex2i(1,30);
	glVertex2i(1,15);
	glVertex2i(-1,15);
	glEnd();



        //Hospital Front gateway
	glBegin(GL_QUADS);
	glColor3ub(171, 178, 185 );
	glVertex2i(-40,-30);
	glVertex2i(-45,-40);
	glVertex2i(45,-40);
	glVertex2i(40,-30);
	glEnd();

	        //Footpath Left
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(-45,-40);
	glVertex2i(-50,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-40);
	glColor3ub(203, 67, 53  );
        glVertex2i(-45,-40);
	glVertex2i(-50,-35);
	glVertex2i(-45,-25);
	glVertex2i(-40,-30);
        glVertex2i(-45,-25);
	glVertex2i(-50,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-25);
	glEnd();

		        //Footpath right
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(45,-40);
	glVertex2i(50,-35);
	glVertex2i(100,-35);
	glVertex2i(100,-40);
	glColor3ub(203, 67, 53  );
        glVertex2i(45,-40);
	glVertex2i(50,-35);
	glVertex2i(45,-25);
	glVertex2i(40,-30);
        glVertex2i(45,-25);
	glVertex2i(50,-35);
	glVertex2i(100,-35);
	glVertex2i(100,-25);
	glEnd();




        //School second body
	glBegin(GL_QUADS);
	glColor3ub(228, 154, 34 );
	glVertex2i(45,15);
	glVertex2i(45,-20);
    glVertex2i(83,-20);
	glVertex2i(83,15);
    glEnd();

            //School second body border
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111 );
	glVertex2i(81,-1);
	glVertex2i(81,-4);
    glVertex2i(45,-4);
	glVertex2i(45,-1);
    glEnd();


        //School second body window
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(48,10);
	glVertex2i(52,10);
    glVertex2i(52,4);
	glVertex2i(48,4);
		glVertex2i(55,10);
	glVertex2i(59,10);
    glVertex2i(59,4);
	glVertex2i(55,4);
		glVertex2i(62,10);
	glVertex2i(66,10);
    glVertex2i(66,4);
	glVertex2i(62,4);
		glVertex2i(69,10);
	glVertex2i(73,10);
    glVertex2i(73,4);
	glVertex2i(69,4);
		glVertex2i(76,10);
	glVertex2i(80,10);
    glVertex2i(80,4);
	glVertex2i(76,4);


		glVertex2i(48,-9);
	glVertex2i(52,-9);
    glVertex2i(52,-15);
	glVertex2i(48,-15);
		glVertex2i(55,-9);
	glVertex2i(59,-9);
    glVertex2i(59,-15);
	glVertex2i(55,-15);
		glVertex2i(62,-9);
	glVertex2i(66,-9);
    glVertex2i(66,-15);
	glVertex2i(62,-15);
		glVertex2i(69,-9);
	glVertex2i(73,-9);
    glVertex2i(73,-15);
	glVertex2i(69,-15);
		glVertex2i(76,-9);
	glVertex2i(80,-9);
    glVertex2i(80,-15);
	glVertex2i(76,-15);


    glEnd();


                    //School second body roof
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(83,15);
	glVertex2i(84,30);
    glVertex2i(50,30);
	glVertex2i(40,15);
    glEnd();


        //School first body
	glBegin(GL_QUADS);
	glColor3ub(205, 135, 22 );
	glVertex2i(81,-20);
	glVertex2i(95,-20);
    glVertex2i(95,24);
	glVertex2i(81,24);
    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3ub(205, 135, 22 );
    glVertex2f(81,24);
	glVertex2f(88,35);
	glVertex2f(95,24);
	glEnd();


    //School Gste
	glBegin(GL_QUADS);
	glColor3ub(28, 40, 51);
	glVertex2i(98,-25);
	glVertex2i(98,-23);
    glVertex2i(78,-23);
	glVertex2i(78,-25);

    glVertex2i(98,-3);
	glVertex2i(98,-1);
    glVertex2i(78,-1);
	glVertex2i(78,-3);
    glEnd();

                    //School Gste way
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(93,-20);
	glVertex2i(83,-20);
    glVertex2i(83,-5);
	glVertex2i(93,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,-20);
    glVertex2i(88,-5);
    glEnd();

                //School Gste floor
	glBegin(GL_QUADS);
	glColor3ub(178, 186, 187 );
	glVertex2i(96,-23);
	glVertex2i(93,-20);
    glVertex2i(83,-20);
	glVertex2i(80,-23);
    glEnd();

        //School Gste pillers
	glBegin(GL_QUADS);
	glColor3ub(244, 208, 63);
	glVertex2i(98,-23);
	glVertex2i(98,-3);
    glVertex2i(96,-3);
	glVertex2i(96,-23);

	glVertex2i(78,-23);
	glVertex2i(78,-3);
    glVertex2i(80,-3);
	glVertex2i(80,-23);
    glEnd();


        //School Gste roof
	glBegin(GL_QUADS);
	glColor3ub(160, 64, 0 );
	glVertex2i(78,25);
	glVertex2i(81,24);
    glVertex2i(88,35);
	glVertex2i(88,40);

	glVertex2i(98,25);
	glVertex2i(95,24);
    glVertex2i(88,35);
	glVertex2i(88,40);
    glEnd();


        //School first body border
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111 );
	glVertex2i(81,-1);
	glVertex2i(81,2);
    glVertex2i(95,2);
	glVertex2i(95,-1);
    glEnd();

    //School first body window
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(93,5);
	glVertex2i(83,5);
    glVertex2i(83,15);
	glVertex2i(93,15);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,5);
    glVertex2i(88,15);
    glVertex2i(93,10);
    glVertex2i(83,10);
    glEnd();

    //Tree-1 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-44,-25);
	glVertex2i(-44,-10);
	glVertex2i(-42,-10);
	glVertex2i(-42,-25);
	glEnd();

	//Tree Top 1
	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-51,-12);
	glVertex2i(-43,9);
	glVertex2i(-35,-12);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-50,-5);
	glVertex2i(-43,15);
	glVertex2i(-36,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-49,2);
	glVertex2i(-43,22);
	glVertex2i(-37,2);
	glEnd();


        	//Tree-3 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(44,-25);
	glVertex2i(44,-10);
	glVertex2i(42,-10);
	glVertex2i(42,-25);
	glEnd();

	//Tree Top 1
	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(51,-12);
	glVertex2i(43,9);
	glVertex2i(35,-12);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(50,-5);
	glVertex2i(43,15);
	glVertex2i(36,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(49,2);
	glVertex2i(43,22);
	glVertex2i(37,2);
	glEnd();


    //company building
	glBegin(GL_QUADS);
	glColor3ub(244, 247, 122 );
	glVertex2i(-98,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,10);
	glVertex2i(-98,10);
		glVertex2i(-98,15);
	glVertex2i(-70,15);
	glVertex2i(-70,50);
	glVertex2i(-98,50);
		glVertex2i(-50,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,25);
	glVertex2i(-50,25);
    glEnd();
        glBegin(GL_LINES);
    glColor3f(0, 0, 0 );
    glVertex2i(-70,-25);
    glVertex2i(-70,50);
    glEnd();

        //company building roof
	glBegin(GL_QUADS);
	glColor3ub(93, 109, 126);
	glVertex2i(-99,15);
	glVertex2i(-70,15);
	glVertex2i(-70,10);
	glVertex2i(-99,10);
		glVertex2i(-99,50);
	glVertex2i(-70,50);
	glVertex2i(-70,55);
	glVertex2i(-99,55);
		glVertex2i(-48,25);
	glVertex2i(-70,25);
	glVertex2i(-70,30);
	glVertex2i(-48,30);
	glColor3ub(33, 47, 61 );
        glVertex2i(-45,35);
	glVertex2i(-70,35);
	glVertex2i(-70,30);
	glVertex2i(-45,30);
	glEnd();

	    //company Gate Glass system
	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226 );
	glVertex2i(-88,-25);
	glVertex2i(-80,-25);
	glVertex2i(-80,-5);
	glVertex2i(-88,-5);
	glEnd();

	    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(-84,-25);
    glVertex2i(-84,-5);
    glEnd();

	    //company window Glass system
	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226 );
	glVertex2i(-96,-20);
	glVertex2i(-90,-20);
	glVertex2i(-90,5);
	glVertex2i(-96,5);
		glVertex2i(-78,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,5);
	glVertex2i(-78,5);
		glVertex2i(-52,-20);
	glVertex2i(-68,-20);
	glVertex2i(-68,-10);
	glVertex2i(-52,-10);
        glVertex2i(-52,-5);
	glVertex2i(-68,-5);
	glVertex2i(-68,5);
	glVertex2i(-52,5);
        glVertex2i(-52,20);
	glVertex2i(-68,20);
	glVertex2i(-68,10);
	glVertex2i(-52,10);
        glVertex2i(-96,20);
	glVertex2i(-72,20);
	glVertex2i(-72,30);
	glVertex2i(-96,30);
        glVertex2i(-96,35);
	glVertex2i(-72,35);
	glVertex2i(-72,45);
	glVertex2i(-96,45);
    glEnd();

		    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(-96,-10);
    glVertex2i(-90,-10);
            glVertex2i(-78,-10);
    glVertex2i(-72,-10);
    glEnd();





    	        //Lamp 1
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-72,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,0);
	glVertex2i(-72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-74,5);
	glVertex2f(-68,5);
	glVertex2f(-71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(-70,0);
	glVertex2i(-72,0);
    glVertex2i(-73,5);
	glVertex2i(-69,5);
    glEnd();



    	        //Lamp 2
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(72,-25);
	glVertex2i(70,-25);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
	glVertex2f(68,5);
	glVertex2f(71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glVertex2i(73,5);
	glVertex2i(69,5);
    glEnd();



glPushMatrix();
glTranslatef(lmenPosition1,0.0f,0.0f);
    //Man 3 Draw (Hujur)
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(243, 216, 216 );
	glVertex2i(-68,-27);
	glVertex2i(-67,-19);
	glVertex2i(-64,-19);
	glVertex2i(-66,-27);

	//Right leg
	glVertex2i(-64,-27);
	glVertex2i(-66,-19);
	glVertex2i(-63,-19);
	glVertex2i(-62,-27);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 254);
	glVertex2i(-68,-21);
	glVertex2i(-67,-12);
	glVertex2i(-65,-13);
	glVertex2i(-63,-12);
	glVertex2i(-62,-21);
	glEnd();

		glBegin(GL_POLYGON);
	glColor3ub(15, 126, 241 );
	glVertex2i(-67,-21);
	glVertex2i(-66,-12);
	glVertex2i(-65,-16);
	glVertex2i(-64,-12);
	glVertex2i(-63,-21);
	glEnd();


	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(15, 126, 241 );
	glVertex2i(-68,-12);
	glVertex2i(-67,-12);
	glVertex2i(-67,-17);
	glVertex2i(-68,-17);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-68, -17);
	glVertex2i(-67, -17);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(15, 126, 241 );
	glVertex2i(-63,-12);
	glVertex2i(-62,-12);
	glVertex2i(-62,-16);
	glVertex2i(-63,-16);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-62, -16);
	glVertex2i(-63, -17);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-64,-27);
	glVertex2i(-63,-25);
	glVertex2i(-62,-27);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(-68,-27);
	glVertex2i(-67,-25);
	glVertex2i(-66,-27);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(-65, -13);
	glVertex2i(-65, -10);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=-65; y=-9; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-68,-8);
	glVertex2i(-66,-6);
	glVertex2i(-64,-6);
	glVertex2i(-62,-8);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(-63,-9);
	glVertex2i(-67,-9);
	glVertex2i(-67,-11);
	glVertex2i(-63,-11);
	glEnd();
glPopMatrix();


    glPushMatrix();
glTranslatef(bmenPosition1,0.0f,0.0f);
	//Man 5 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(127, 50, 19 );
	glVertex2i(68,-30);
	glVertex2i(67,-22);
	glVertex2i(64,-22);
	glVertex2i(66,-30);

	//Right leg
	glVertex2i(64,-30);
	glVertex2i(66,-22);
	glVertex2i(63,-22);
	glVertex2i(62,-30);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(15, 189, 157  );
	glVertex2i(67,-22);
	glVertex2i(67,-15);
	glVertex2i(65,-16);
	glVertex2i(63,-15);
	glVertex2i(63,-22);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157 );
	glVertex2i(68,-15);
	glVertex2i(67,-15);
	glVertex2i(67,-19);
	glVertex2i(68,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(68, -19);
	glVertex2i(67, -20);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157  );
	glVertex2i(63,-15);
	glVertex2i(62,-15);
	glVertex2i(62,-19);
	glVertex2i(63,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(62, -19);
	glVertex2i(63, -20);
	glEnd();

	//Bag
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2i(62, -22);
	glVertex2i(62, -28);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(64,-30);
	glVertex2i(63,-28);
	glVertex2i(62,-30);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(68,-30);
	glVertex2i(67,-28);
	glVertex2i(66,-30);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(65, -16);
	glVertex2i(65, -13);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=65; y=-12; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2i(68,-11);
	glVertex2i(66,-9);
	glVertex2i(64,-9);
	glVertex2i(62,-11);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(63,-12);
	glVertex2i(67,-12);
	glVertex2i(67,-14);
	glVertex2i(63,-14);
	glEnd();
glPopMatrix();

    glPushMatrix();
glTranslatef(emenPosition1,0.0f,0.0f);
	//Man 4 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(92, 160, 175);
	glVertex2i(58,-33);
	glVertex2i(57,-25);
	glVertex2i(54,-25);
	glVertex2i(56,-33);

	//Right leg
	glVertex2i(54,-33);
	glVertex2i(56,-25);
	glVertex2i(53,-24);
	glVertex2i(52,-33);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(203, 167, 242 );
	glVertex2i(57,-25);
	glVertex2i(57,-18);
	glVertex2i(55,-19);
	glVertex2i(53,-18);
	glVertex2i(53,-25);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(203, 167, 242 );
	glVertex2i(58,-18);
	glVertex2i(57,-18);
	glVertex2i(57,-22);
	glVertex2i(58,-22);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(58, -22);
	glVertex2i(57, -23);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(203, 167, 242);
	glVertex2i(53,-18);
	glVertex2i(52,-18);
	glVertex2i(52,-22);
	glVertex2i(53,-22);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(52, -22);
	glVertex2i(53, -23);
	glEnd();


	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(54,-33);
	glVertex2i(53,-31);
	glVertex2i(52,-33);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(58,-33);
	glVertex2i(57,-31);
	glVertex2i(56,-33);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(55, -19);
	glVertex2i(55, -16);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=55; y=-15; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2i(58,-14);
	glVertex2i(56,-12);
	glVertex2i(54,-12);
	glVertex2i(52,-14);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(53,-15);
	glVertex2i(57,-15);
	glVertex2i(57,-17);
	glVertex2i(53,-17);
	glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(doctorPosition,0.0f,0.0f);
//Man 1 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(44, 80, 197);
	glVertex2i(22,-40);
	glVertex2i(23,-32);
	glVertex2i(26,-32);
	glVertex2i(24,-40);

	//Right leg
	glVertex2i(26,-40);
	glVertex2i(24,-32);
	glVertex2i(27,-32);
	glVertex2i(28,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(56, 225, 38 );
	glVertex2i(23,-33);
	glVertex2i(23,-26);
	glVertex2i(25,-27);
	glVertex2i(27,-26);
	glVertex2i(27,-33);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(22,-26);
	glVertex2i(23,-26);
	glVertex2i(23,-30);
	glVertex2i(22,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(23, -30);
	glVertex2i(22, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(27,-26);
	glVertex2i(28,-26);
	glVertex2i(28,-30);
	glVertex2i(27,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(27, -30);
	glVertex2i(28, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(26,-40);
	glVertex2i(27,-38);
	glVertex2i(28,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(22,-40);
	glVertex2i(23,-38);
	glVertex2i(24,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(25, -27);
	glVertex2i(25, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159 );
    x=25; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
glEnd();
    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(22,-22);
	glVertex2i(24,-20);
	glVertex2i(26,-20);
	glVertex2i(28,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(23,-23);
	glVertex2i(27,-23);
	glVertex2i(27,-25);
	glVertex2i(23,-25);
	glEnd();

	//Man 2 doctor
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0 );
	glVertex2i(35,-40);
	glVertex2i(34,-32);
	glVertex2i(31,-32);
	glVertex2i(33,-40);

	//Right leg
	glVertex2i(31,-40);
	glVertex2i(33,-32);
	glVertex2i(30,-32);
	glVertex2i(29,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(34,-36);
	glVertex2i(34,-26);
	glVertex2i(32,-27);
	glVertex2i(30,-26);
	glVertex2i(30,-36);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2i(32, -27);
	glVertex2i(32, -36);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(203, 67, 53 );
	glVertex2i(33, -28);
	glVertex2i(33, -32);
	glVertex2i(32, -30);
	glVertex2i(34, -30);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(35,-26);
	glVertex2i(34,-26);
	glVertex2i(34,-30);
	glVertex2i(35,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(35, -30);
	glVertex2i(34, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(30,-26);
	glVertex2i(29,-26);
	glVertex2i(29,-30);
	glVertex2i(30,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(29, -30);
	glVertex2i(30, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(31,-40);
	glVertex2i(30,-38);
	glVertex2i(29,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(35,-40);
	glVertex2i(34,-38);
	glVertex2i(33,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(32, -27);
	glVertex2i(32, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159 );
    x=32; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(35,-22);
	glVertex2i(33,-20);
	glVertex2i(31,-20);
	glVertex2i(29,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(30,-23);
	glVertex2i(34,-23);
	glVertex2i(34,-25);
	glVertex2i(30,-25);
	glEnd();
glPopMatrix();











glPushMatrix();
glTranslatef(ambulancePosition1,0.0f,0.0f);
	// ambulance body
	glBegin(GL_POLYGON);
	glColor3ub(253, 254, 254);
	glVertex2f(-90, -50);
	glVertex2f(-50, -50);
	glVertex2f(-51, -40);
	glVertex2f(-55, -35);
	glVertex2f(-60, -20);
	glVertex2f(-85, -20);
	glVertex2f(-90, -35);
	glEnd();
	       //ambulance sine
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(-51,-40);
	glVertex2i(-51,-39);
    glVertex2i(-90,-39);
	glVertex2i(-90,-40);
		glVertex2i(-80,-25);
	glVertex2i(-79,-25);
	glVertex2i(-79,-35);
	glVertex2i(-80,-35);
		glVertex2i(-82,-29);
	glVertex2i(-77,-29);
	glVertex2i(-77,-31);
	glVertex2i(-82,-31);
		glVertex2i(-70,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,-18);
	glVertex2i(-70,-18);
    glEnd();


            	        //ambulance glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(-75,-23);
	glVertex2i(-68,-23);
    glVertex2i(-68,-35);
	glVertex2i(-75,-35);
		glVertex2i(-61,-23);
	glVertex2i(-56,-35);
	glVertex2i(-66,-35);
	glVertex2i(-66,-23);
    glEnd();
       //ambulance bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-88,-50);
	glVertex2i(-91,-50);
    glVertex2i(-91,-46);
	glVertex2i(-88,-46);
		glVertex2i(-52,-50);
	glVertex2i(-52,-46);
	glVertex2i(-49,-46);
	glVertex2i(-49,-50);
    glEnd();

               //ambulance Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(-90,-35);
	glVertex2i(-89,-35);
    glVertex2i(-89,-40);
	glVertex2i(-90,-40);
	glColor3ub(251, 250, 32);
		glVertex2i(-51,-40);
	glVertex2i(-55,-40);
	glVertex2i(-55,-42);
	glVertex2i(-51,-42);
    glEnd();


        //ambulance wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //ambulance wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
glPopMatrix();





glPushMatrix();
glTranslatef(carPosition1,0.0f,0.0f);
    	        //car body
	glBegin(GL_QUADS);
	glColor3ub(125, 60, 152);
	glVertex2i(50,-70);
	glVertex2i(85,-70);
    glVertex2i(87,-80);
	glVertex2i(48,-80);
		glVertex2i(58,-70);
	glVertex2i(61,-60);
	glVertex2i(76,-60);
	glVertex2i(78,-70);
    glEnd();

        	        //car glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(59,-70);
	glVertex2i(62,-61);
    glVertex2i(75,-61);
	glVertex2i(77,-70);
		glVertex2i(69,-70);
	glVertex2i(69,-61);
	glVertex2i(73,-61);
	glVertex2i(75,-70);
    glEnd();

        //car bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(46,-80);
	glVertex2i(53,-80);
    glVertex2i(53,-76);
	glVertex2i(46,-76);
		glVertex2i(88,-80);
	glVertex2i(82,-80);
	glVertex2i(82,-76);
	glVertex2i(88,-76);
    glEnd();


        glLineWidth(2);
        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
        glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

            //car Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(84,-70);
	glVertex2i(85,-70);
    glVertex2i(85,-75);
	glVertex2i(84,-75);
	glColor3ub(226, 224, 224);
		glVertex2i(51,-70);
	glVertex2i(49,-70);
	glVertex2i(49,-72);
	glVertex2i(51,-72);
    glEnd();

    //Car wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Car wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

glPopMatrix();

	glPushMatrix();
    glTranslatef(policecarPosition2,0.0f,0.0f);

	//Police Car
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2i(45,-90);
	glVertex2i(48,-78);
	glVertex2i(57,-75);
	glVertex2i(65,-65);
	glVertex2i(83,-65);
	glVertex2i(86,-75);
	glVertex2i(93,-75);
	glVertex2i(95,-90);
	glEnd();

	//Front window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(65,-67);
	glVertex2i(73,-67);
	glVertex2i(73,-74);
	glVertex2i(60,-74);
	glEnd();

	//Back window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(74,-67);
	glVertex2i(82,-67);
	glVertex2i(84,-74);
	glVertex2i(74,-74);
	glEnd();

	//Body Art
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(35, 57, 186);
	glVertex2i(52, -80);
	glVertex2i(88, -80);
	glEnd();

	//Front art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(44,-90);
	glVertex2i(48,-90);
	glVertex2i(48,-87);
	glVertex2i(44,-87);
	glEnd();

	//Back art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(92,-90);
	glVertex2i(97,-90);
	glVertex2i(97,-87);
	glVertex2i(92,-87);
	glEnd();

	//Front Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(47,-82);
	glVertex2i(50,-82);
	glVertex2i(50,-79);
	glVertex2i(48,-79);
	glEnd();

	//Back Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(91,-82);
	glVertex2i(94,-82);
	glVertex2i(93,-79);
	glVertex2i(91,-79);
	glEnd();

	//Top Light
	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(67,-65);
	glVertex2i(69,-65);
	glVertex2i(69,-63);
	glVertex2i(67,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(8, 68, 189 );
	glVertex2i(69,-65);
	glVertex2i(71,-65);
	glVertex2i(71,-63);
	glVertex2i(69,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(71,-65);
	glVertex2i(73,-65);
	glVertex2i(73,-63);
	glVertex2i(71,-63);
	glEnd();

	//Front tire
	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Back Tire
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Back Tire Middle
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    glPopMatrix();


    glFlush();


}

void display2N (void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    //SKY
   glBegin(GL_QUADS);
	glColor3ub(7, 26, 116 );
	glVertex2i(-100,-20);
	glVertex2i(-100,100);
	glVertex2i(100,100);
	glVertex2i(100,-20);
	glEnd();

	//Star
	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,90);
	glVertex2i(-70,90);
	glVertex2i(-50,90);
	glVertex2i(-30,90);
	glVertex2i(-10,90);
	glVertex2i(10,90);
	glVertex2i(30,90);
	glVertex2i(50,90);
	glVertex2i(70,90);
	glVertex2i(90,90);
	glEnd();

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,70);
	glVertex2i(-70,70);
	glVertex2i(-50,70);
	glVertex2i(-30,70);
	glVertex2i(-10,70);
	glVertex2i(10,70);
	glVertex2i(30,70);
	glVertex2i(50,70);
	glVertex2i(70,70);
	glVertex2i(90,70);
	glEnd();

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glColor3f(255, 255, 255 );
	glVertex2i(-90,50);
	glVertex2i(-70,50);
	glVertex2i(-50,50);
	glVertex2i(-30,50);
	glVertex2i(-10,50);
	glVertex2i(10,50);
	glVertex2i(30,50);
	glVertex2i(50,50);
	glVertex2i(70,50);
	glVertex2i(90,50);
	glEnd();



glPushMatrix();
glTranslatef(sunPosition2,0.0f,0.0f);
		//Sun draw
	float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0f * PI;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255,255,255);
        x=70; y=75; radius =10;
    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;
                glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

glPopMatrix();

glPushMatrix();
glTranslatef(cloudPosition3,0.0f,0.0f);
    //Cloud-1

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-75; y=92; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-79; y=87; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234  );
    x=-85; y=82; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-80; y=81; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-73; y=85; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-6
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-74; y=79; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudPosition4,0.0f,0.0f);
    //Cloud-2

    //P-1
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-35; y=78; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-41; y=73; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-47; y=67; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-4
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234 );
    x=-40; y=66; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();

    //P-5
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(183, 194, 234  );
    x=-33; y=70; radius =6;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }

    glEnd();
glPopMatrix();

    //Grass
	  glBegin(GL_QUADS);
	glColor3ub(136, 221, 12 );
	glVertex2i(-100,-20);
	glVertex2i(-100,-40);
	glVertex2i(100,-40);
	glVertex2i(100,-20);
	glEnd();


    //Road background
	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(-100,-40);
	glVertex2i(-100,-100);
	glVertex2i(100,-100);
	glVertex2i(100,-40);
	glEnd();



    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(253, 254, 254);
    glVertex2i(-100,-70);
    glVertex2i(-80,-70);
       glVertex2i(-70,-70);
    glVertex2i(-50,-70);
        glVertex2i(-60,-70);
    glVertex2i(-40,-70);
        glVertex2i(-30,-70);
    glVertex2i(-10,-70);
           glVertex2i(0,-70);
    glVertex2i(20,-70);
    glVertex2i(30,-70);
    glVertex2i(50,-70);
    glVertex2i(60,-70);
    glVertex2i(80,-70);
    glVertex2i(90,-70);
    glVertex2i(100,-70);
    glEnd();

    //Background left 1st

    glBegin(GL_QUADS);
	glColor3ub(204, 209, 209 );
	glVertex2i(-101,-20);
	glVertex2i(-101,23);
	glVertex2i(-95,23);
	glVertex2i(-95,-20);
	glEnd();

    //Background left 2nd

    glBegin(GL_QUADS);
	glColor3ub(179, 182, 183);
	glVertex2i(-50,-20);
	glVertex2i(-50,23);
	glVertex2i(-28,23);
	glVertex2i(-28,-20);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(-46,-10);
	glVertex2i(-46,18);
	glVertex2i(-33,18);
	glVertex2i(-33,-10);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(23, 32, 42 );
	glVertex2i(-46, 14);
	glVertex2i(-33, 14);
	glVertex2i(-46, 10);
	glVertex2i(-33, 10);
	glVertex2i(-46, 6);
	glVertex2i(-33, 6);
	glVertex2i(-39, 18);
	glVertex2i(-39, -10);
	glEnd();

	//Background Right 1st

	glBegin(GL_QUADS);
	glColor3ub(208, 211, 212);
	glVertex2i(25,-20);
	glVertex2i(25,18);
	glVertex2i(37,18);
	glVertex2i(37,-20);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(25,5);
	glVertex2i(25,15);
	glVertex2i(35,15);
	glVertex2i(35,5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 139, 150 );
	glVertex2i(35,-20);
	glVertex2i(35,13);
	glVertex2i(50,13);
	glVertex2i(50,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(37,3);
	glVertex2i(37,10);
	glVertex2i(50,10);
	glVertex2i(50,3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(208, 211, 212);
	glVertex2i(95,-20);
	glVertex2i(95,13);
	glVertex2i(100,13);
	glVertex2i(100,-20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(93, 173, 226);
	glVertex2i(95,3);
	glVertex2i(95,10);
	glVertex2i(98,10);
	glVertex2i(98,3);
	glEnd();


	//Tree-2 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-36,-23);
	glVertex2i(-36,-11);
	glVertex2i(-34,-11);
	glVertex2i(-34,-23);
	glEnd();

	//Tree Top-1
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-42,-12);
	glVertex2i(-35,7);
	glVertex2i(-29,-12);
	glEnd();

	//Tree Top-2
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-40,-5);
	glVertex2i(-35,13);
	glVertex2i(-30,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(53, 141, 11 );
	glVertex2i(-39,2);
	glVertex2i(-35,15);
	glVertex2i(-31,2);
	glEnd();

    //Hospital Stairs
	  glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-40,-30);
	glVertex2i(-40,-25);
    glVertex2i(40,-25);
	glVertex2i(40,-30);
		glVertex2i(-35,-25);
	glVertex2i(-35,-20);
    glVertex2i(35,-20);
	glVertex2i(35,-25);
	glEnd();

    //glBegin(GL_LINES);
    //glColor3f(206.0f, 193.0f, 111.0f);
    //glVertex2i(-100,0);
    //glVertex2i(100,0);
    //glEnd();

    //Hospital pillers
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(34,-20);
	glVertex2i(32,-20);
	glVertex2i(32,30);
	glVertex2i(34,30);

	glVertex2i(-34,-20);
	glVertex2i(-32,-20);
	glVertex2i(-32,30);
	glVertex2i(-34,30);
	glEnd();


	    //Hospital Room 1st floor
	glBegin(GL_QUADS);
	glColor3ub(230, 126, 34);
	glVertex2i(30,-20);
	glVertex2i(10,-20);
	glVertex2i(10,0);
	glVertex2i(30,0);
		glVertex2i(-30,-20);
	glVertex2i(-10,-20);
	glVertex2i(-10,0);
	glVertex2i(-30,0);
	glEnd();

		    //Hospital Roof 1st floor
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(30,0);
	glVertex2i(10,0);
	glVertex2i(10,5);
	glVertex2i(30,5);
    glVertex2i(-30,0);
	glVertex2i(-10,0);
	glVertex2i(-10,5);
	glVertex2i(-30,5);
			glVertex2i(10,5);
	glVertex2i(-10,5);
	glVertex2i(-10,10);
	glVertex2i(10,10);
	glEnd();

		    //Hospital Room 1st floor Glass system
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(29,-19);
	glVertex2i(11,-19);
	glVertex2i(11,-1);
	glVertex2i(29,-1);
		glVertex2i(-29,-19);
	glVertex2i(-11,-19);
	glVertex2i(-11,-1);
	glVertex2i(-29,-1);
	glEnd();

			    //Hospital Room 1st floor Glass 1
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(12,-18);
	glVertex2i(12,-2);
	glVertex2i(19,-2);
	glVertex2i(19,-18);
    glVertex2i(-12,-18);
	glVertex2i(-12,-2);
	glVertex2i(-19,-2);
	glVertex2i(-19,-18);

	glEnd();

				    //Hospital Room 1st floor Glass 2
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(20,-18);
	glVertex2i(20,-2);
	glVertex2i(28,-2);
	glVertex2i(28,-18);
        glVertex2i(-20,-18);
	glVertex2i(-20,-2);
	glVertex2i(-28,-2);
	glVertex2i(-28,-18);

	glEnd();

		    //Hospital Room 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(230, 126, 34);
	glVertex2i(30,5);
	glVertex2i(10,5);
	glVertex2i(10,25);
	glVertex2i(30,25);
			glVertex2i(-30,5);
	glVertex2i(-10,5);
	glVertex2i(-10,25);
	glVertex2i(-30,25);
	glEnd();

        //Hospital Roof 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(40,25);
	glVertex2i(10,25);
	glVertex2i(10,30);
	glVertex2i(40,30);
		glVertex2i(-40,25);
	glVertex2i(-10,25);
	glVertex2i(-10,30);
	glVertex2i(-40,30);
        glVertex2i(12,35);
	glVertex2i(-12,35);
	glVertex2i(-12,40);
	glVertex2i(12,40);
	        glVertex2i(13,40);  // For lobby
	glVertex2i(-13,40);
	glVertex2i(-13,45);
	glVertex2i(13,45);
	glEnd();


			    //Hospital Room 2nd floor Glass system
	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254);
	glVertex2i(29,6);
	glVertex2i(11,6);
	glVertex2i(11,24);
	glVertex2i(29,24);
glColor3ub(253, 254, 254);
	glVertex2i(-29,6);
	glVertex2i(-11,6);
	glVertex2i(-11,24);
	glVertex2i(-29,24);
	glEnd();

    			    //Hospital Room 2nd floor Glass 1
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(12,7);
	glVertex2i(12,23);
	glVertex2i(19,23);
	glVertex2i(19,7);
        glVertex2i(-12,7);
	glVertex2i(-12,23);
	glVertex2i(-19,23);
	glVertex2i(-19,7);

	glEnd();

				    //Hospital Room 2nd floor Glass 2
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0);
	glVertex2i(20,6);
	glVertex2i(20,23);
	glVertex2i(28,23);
	glVertex2i(28,6);
        glVertex2i(-20,6);
	glVertex2i(-20,23);
	glVertex2i(-28,23);
	glVertex2i(-28,6);

	glEnd();

		    //Hospital lobby 1st floor
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(10,-20);
	glVertex2i(-10,-20);
	glVertex2i(-10,5);
	glVertex2i(10,5);
	glEnd();

			    //Hospital lobby 2nd floor
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(10,10);
	glVertex2i(-10,10);
	glVertex2i(-10,35);
	glVertex2i(10,35);
	glEnd();

		//Gate pillers
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111);
	glVertex2i(8,-20);
	glVertex2i(6,-20);
	glVertex2i(6,-5);
	glVertex2i(8,-5);

	glVertex2i(-8,-20);
	glVertex2i(-6,-20);
	glVertex2i(-6,-5);
	glVertex2i(-8,-5);
	glEnd();

       //Hospital Roof Gate
	glBegin(GL_QUADS);
	glColor3ub(100, 30, 22);
	glVertex2i(9,-5);  // For gate
	glVertex2i(-9,-5);
	glVertex2i(-9,0);
	glVertex2i(9,0);
	glEnd();

    //Hospital Gate Glass system
	glBegin(GL_QUADS);
	glColor3ub(174, 214, 241);
	glVertex2i(4,-20);
	glVertex2i(4,-5);
	glVertex2i(-4,-5);
	glVertex2i(-4,-20);
	glEnd();

	    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(0,-20);
    glVertex2i(0,-5);
    glEnd();

	    //Hospital Sine box
	glBegin(GL_QUADS);
	glColor3ub(192, 57, 43 );
	glVertex2i(8,12);
	glVertex2i(-8,12);
	glVertex2i(-8,33);
	glVertex2i(8,33);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(253, 254, 254 );
    glVertex2i(-6.5,24.5);
	glVertex2i(6.5,24.5);
	glVertex2i(6.5,21.5);
	glVertex2i(-6.5,21.5);
	glEnd();

	    		glBegin(GL_QUADS);
	glColor3ub(253, 254, 254 );
    glVertex2i(-1,30);
	glVertex2i(1,30);
	glVertex2i(1,15);
	glVertex2i(-1,15);
	glEnd();



        //Hospital Front gateway
	glBegin(GL_QUADS);
	glColor3ub(171, 178, 185 );
	glVertex2i(-40,-30);
	glVertex2i(-45,-40);
	glVertex2i(45,-40);
	glVertex2i(40,-30);
	glEnd();

	        //Footpath Left
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(-45,-40);
	glVertex2i(-50,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-40);
	glColor3ub(203, 67, 53  );
        glVertex2i(-45,-40);
	glVertex2i(-50,-35);
	glVertex2i(-45,-25);
	glVertex2i(-40,-30);
        glVertex2i(-45,-25);
	glVertex2i(-50,-35);
	glVertex2i(-100,-35);
	glVertex2i(-100,-25);
	glEnd();

		        //Footpath right
	glBegin(GL_QUADS);
	glColor3ub(148, 49, 38);
	glVertex2i(45,-40);
	glVertex2i(50,-35);
	glVertex2i(100,-35);
	glVertex2i(100,-40);
	glColor3ub(203, 67, 53  );
        glVertex2i(45,-40);
	glVertex2i(50,-35);
	glVertex2i(45,-25);
	glVertex2i(40,-30);
        glVertex2i(45,-25);
	glVertex2i(50,-35);
	glVertex2i(100,-35);
	glVertex2i(100,-25);
	glEnd();




        //School second body
	glBegin(GL_QUADS);
	glColor3ub(228, 154, 34 );
	glVertex2i(45,15);
	glVertex2i(45,-20);
    glVertex2i(83,-20);
	glVertex2i(83,15);
    glEnd();

            //School second body border
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111 );
	glVertex2i(81,-1);
	glVertex2i(81,-4);
    glVertex2i(45,-4);
	glVertex2i(45,-1);
    glEnd();


        //School second body window
	glBegin(GL_QUADS);
	glColor3ub(17, 144, 165);
	glVertex2i(48,10);
	glVertex2i(52,10);
    glVertex2i(52,4);
	glVertex2i(48,4);
		glVertex2i(55,10);
	glVertex2i(59,10);
    glVertex2i(59,4);
	glVertex2i(55,4);
		glVertex2i(62,10);
	glVertex2i(66,10);
    glVertex2i(66,4);
	glVertex2i(62,4);
		glVertex2i(69,10);
	glVertex2i(73,10);
    glVertex2i(73,4);
	glVertex2i(69,4);
		glVertex2i(76,10);
	glVertex2i(80,10);
    glVertex2i(80,4);
	glVertex2i(76,4);


		glVertex2i(48,-9);
	glVertex2i(52,-9);
    glVertex2i(52,-15);
	glVertex2i(48,-15);
		glVertex2i(55,-9);
	glVertex2i(59,-9);
    glVertex2i(59,-15);
	glVertex2i(55,-15);
		glVertex2i(62,-9);
	glVertex2i(66,-9);
    glVertex2i(66,-15);
	glVertex2i(62,-15);
		glVertex2i(69,-9);
	glVertex2i(73,-9);
    glVertex2i(73,-15);
	glVertex2i(69,-15);
		glVertex2i(76,-9);
	glVertex2i(80,-9);
    glVertex2i(80,-15);
	glVertex2i(76,-15);


    glEnd();


                    //School second body roof
	glBegin(GL_QUADS);
	glColor3ub(211, 84, 0);
	glVertex2i(83,15);
	glVertex2i(84,30);
    glVertex2i(50,30);
	glVertex2i(40,15);
    glEnd();


        //School first body
	glBegin(GL_QUADS);
	glColor3ub(205, 135, 22 );
	glVertex2i(81,-20);
	glVertex2i(95,-20);
    glVertex2i(95,24);
	glVertex2i(81,24);
    glEnd();

        glBegin(GL_TRIANGLES);
    glColor3ub(205, 135, 22 );
    glVertex2f(81,24);
	glVertex2f(88,35);
	glVertex2f(95,24);
	glEnd();


    //School Gste
	glBegin(GL_QUADS);
	glColor3ub(28, 40, 51);
	glVertex2i(98,-25);
	glVertex2i(98,-23);
    glVertex2i(78,-23);
	glVertex2i(78,-25);

    glVertex2i(98,-3);
	glVertex2i(98,-1);
    glVertex2i(78,-1);
	glVertex2i(78,-3);
    glEnd();

                    //School Gste way
	glBegin(GL_QUADS);
	glColor3ub(17, 144, 165);
	glVertex2i(93,-20);
	glVertex2i(83,-20);
    glVertex2i(83,-5);
	glVertex2i(93,-5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,-20);
    glVertex2i(88,-5);
    glEnd();

                //School Gste floor
	glBegin(GL_QUADS);
	glColor3ub(178, 186, 187 );
	glVertex2i(96,-23);
	glVertex2i(93,-20);
    glVertex2i(83,-20);
	glVertex2i(80,-23);
    glEnd();

        //School Gste pillers
	glBegin(GL_QUADS);
	glColor3ub(244, 208, 63);
	glVertex2i(98,-23);
	glVertex2i(98,-3);
    glVertex2i(96,-3);
	glVertex2i(96,-23);

	glVertex2i(78,-23);
	glVertex2i(78,-3);
    glVertex2i(80,-3);
	glVertex2i(80,-23);
    glEnd();


        //School Gste roof
	glBegin(GL_QUADS);
	glColor3ub(160, 64, 0 );
	glVertex2i(78,25);
	glVertex2i(81,24);
    glVertex2i(88,35);
	glVertex2i(88,40);

	glVertex2i(98,25);
	glVertex2i(95,24);
    glVertex2i(88,35);
	glVertex2i(88,40);
    glEnd();


        //School first body border
	glBegin(GL_QUADS);
	glColor3ub(247, 220, 111 );
	glVertex2i(81,-1);
	glVertex2i(81,2);
    glVertex2i(95,2);
	glVertex2i(95,-1);
    glEnd();

    //School first body window
	glBegin(GL_QUADS);
	glColor3ub(17, 144, 165);
	glVertex2i(93,5);
	glVertex2i(83,5);
    glVertex2i(83,15);
	glVertex2i(93,15);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(23, 32, 42);
    glVertex2i(88,5);
    glVertex2i(88,15);
    glVertex2i(93,10);
    glVertex2i(83,10);
    glEnd();

    //Tree-1 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(-44,-25);
	glVertex2i(-44,-10);
	glVertex2i(-42,-10);
	glVertex2i(-42,-25);
	glEnd();

	//Tree Top 1
	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-51,-12);
	glVertex2i(-43,9);
	glVertex2i(-35,-12);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-50,-5);
	glVertex2i(-43,15);
	glVertex2i(-36,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(34, 153, 84 );
	glVertex2i(-49,2);
	glVertex2i(-43,22);
	glVertex2i(-37,2);
	glEnd();


        	//Tree-3 Draw

	//Tree Stand
	glBegin(GL_QUADS);
	glColor3ub(110, 44, 0);
	glVertex2i(44,-25);
	glVertex2i(44,-10);
	glVertex2i(42,-10);
	glVertex2i(42,-25);
	glEnd();

	//Tree Top 1
	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(51,-12);
	glVertex2i(43,9);
	glVertex2i(35,-12);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(50,-5);
	glVertex2i(43,15);
	glVertex2i(36,-5);
	glEnd();

	//Tree Top-3
	glBegin(GL_TRIANGLES);
	glColor3ub(49, 189, 40 );
	glVertex2i(49,2);
	glVertex2i(43,22);
	glVertex2i(37,2);
	glEnd();


    //company building
	glBegin(GL_QUADS);
	glColor3ub(244, 247, 122 );
	glVertex2i(-98,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,10);
	glVertex2i(-98,10);
		glVertex2i(-98,15);
	glVertex2i(-70,15);
	glVertex2i(-70,50);
	glVertex2i(-98,50);
		glVertex2i(-50,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,25);
	glVertex2i(-50,25);
    glEnd();
        glBegin(GL_LINES);
    glColor3f(0, 0, 0 );
    glVertex2i(-70,-25);
    glVertex2i(-70,50);
    glEnd();

        //company building roof
	glBegin(GL_QUADS);
	glColor3ub(93, 109, 126);
	glVertex2i(-99,15);
	glVertex2i(-70,15);
	glVertex2i(-70,10);
	glVertex2i(-99,10);
		glVertex2i(-99,50);
	glVertex2i(-70,50);
	glVertex2i(-70,55);
	glVertex2i(-99,55);
		glVertex2i(-48,25);
	glVertex2i(-70,25);
	glVertex2i(-70,30);
	glVertex2i(-48,30);
	glColor3ub(33, 47, 61 );
        glVertex2i(-45,35);
	glVertex2i(-70,35);
	glVertex2i(-70,30);
	glVertex2i(-45,30);
	glEnd();

	    //company Gate Glass system
	glBegin(GL_QUADS);
	glColor3ub(17, 144, 165);
	glVertex2i(-88,-25);
	glVertex2i(-80,-25);
	glVertex2i(-80,-5);
	glVertex2i(-88,-5);
	glEnd();

	    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(-84,-25);
    glVertex2i(-84,-5);
    glEnd();

	    //company window Glass system
	glBegin(GL_QUADS);
	glColor3ub(17, 144, 165);
	glVertex2i(-96,-20);
	glVertex2i(-90,-20);
	glVertex2i(-90,5);
	glVertex2i(-96,5);
		glVertex2i(-78,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,5);
	glVertex2i(-78,5);
		glVertex2i(-52,-20);
	glVertex2i(-68,-20);
	glVertex2i(-68,-10);
	glVertex2i(-52,-10);
        glVertex2i(-52,-5);
	glVertex2i(-68,-5);
	glVertex2i(-68,5);
	glVertex2i(-52,5);
        glVertex2i(-52,20);
	glVertex2i(-68,20);
	glVertex2i(-68,10);
	glVertex2i(-52,10);
        glVertex2i(-96,20);
	glVertex2i(-72,20);
	glVertex2i(-72,30);
	glVertex2i(-96,30);
        glVertex2i(-96,35);
	glVertex2i(-72,35);
	glVertex2i(-72,45);
	glVertex2i(-96,45);
    glEnd();

		    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
        glVertex2i(-96,-10);
    glVertex2i(-90,-10);
            glVertex2i(-78,-10);
    glVertex2i(-72,-10);
    glEnd();





    	        //Lamp 1
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(-72,-25);
	glVertex2i(-70,-25);
	glVertex2i(-70,0);
	glVertex2i(-72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(-74,5);
	glVertex2f(-68,5);
	glVertex2f(-71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(-70,0);
	glVertex2i(-72,0);
    glVertex2i(-73,5);
	glVertex2i(-69,5);
    glEnd();



    	        //Lamp 2
	glBegin(GL_QUADS);
	glColor3ub(33, 47, 61);
	glVertex2i(72,-25);
	glVertex2i(70,-25);
	glVertex2i(70,0);
	glVertex2i(72,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(33, 47, 61);
    glVertex2f(74,5);
	glVertex2f(68,5);
	glVertex2f(71,8);
	glEnd();


    //Light
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(70,0);
	glVertex2i(72,0);
    glVertex2i(73,5);
	glVertex2i(69,5);
    glEnd();

    glPushMatrix();
glTranslatef(bmenPosition1,0.0f,0.0f);
	//Man 5 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(127, 50, 19 );
	glVertex2i(68,-30);
	glVertex2i(67,-22);
	glVertex2i(64,-22);
	glVertex2i(66,-30);

	//Right leg
	glVertex2i(64,-30);
	glVertex2i(66,-22);
	glVertex2i(63,-22);
	glVertex2i(62,-30);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(15, 189, 157  );
	glVertex2i(67,-22);
	glVertex2i(67,-15);
	glVertex2i(65,-16);
	glVertex2i(63,-15);
	glVertex2i(63,-22);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157 );
	glVertex2i(68,-15);
	glVertex2i(67,-15);
	glVertex2i(67,-19);
	glVertex2i(68,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(68, -19);
	glVertex2i(67, -20);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(15, 189, 157  );
	glVertex2i(63,-15);
	glVertex2i(62,-15);
	glVertex2i(62,-19);
	glVertex2i(63,-19);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(62, -19);
	glVertex2i(63, -20);
	glEnd();

	//Bag
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2i(62, -22);
	glVertex2i(62, -28);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(64,-30);
	glVertex2i(63,-28);
	glVertex2i(62,-30);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(68,-30);
	glVertex2i(67,-28);
	glVertex2i(66,-30);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(65, -16);
	glVertex2i(65, -13);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(250, 222, 157 );
    x=65; y=-12; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(68, -11);
	glVertex2f(65, -10);
	glVertex2f(62, -11);
	glVertex2f(64, -9);
	glVertex2f(66, -9);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(63,-12);
	glVertex2i(67,-12);
	glVertex2i(67,-14);
	glVertex2i(63,-14);
	glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(doctorPosition,0.0f,0.0f);
//Man 1 Draw
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(44, 80, 197);
	glVertex2i(22,-40);
	glVertex2i(23,-32);
	glVertex2i(26,-32);
	glVertex2i(24,-40);

	//Right leg
	glVertex2i(26,-40);
	glVertex2i(24,-32);
	glVertex2i(27,-32);
	glVertex2i(28,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(56, 225, 38 );
	glVertex2i(23,-33);
	glVertex2i(23,-26);
	glVertex2i(25,-27);
	glVertex2i(27,-26);
	glVertex2i(27,-33);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(22,-26);
	glVertex2i(23,-26);
	glVertex2i(23,-30);
	glVertex2i(22,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(23, -30);
	glVertex2i(22, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(56, 225, 38 );
	glVertex2i(27,-26);
	glVertex2i(28,-26);
	glVertex2i(28,-30);
	glVertex2i(27,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(27, -30);
	glVertex2i(28, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(26,-40);
	glVertex2i(27,-38);
	glVertex2i(28,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(22,-40);
	glVertex2i(23,-38);
	glVertex2i(24,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(25, -27);
	glVertex2i(25, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159);
    x=25; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
glEnd();
    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(22,-22);
	glVertex2i(24,-20);
	glVertex2i(26,-20);
	glVertex2i(28,-22);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(23,-23);
	glVertex2i(27,-23);
	glVertex2i(27,-25);
	glVertex2i(23,-25);
	glEnd();

	//Man 2 doctor
	//Left Leg
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0 );
	glVertex2i(35,-40);
	glVertex2i(34,-32);
	glVertex2i(31,-32);
	glVertex2i(33,-40);

	//Right leg
	glVertex2i(31,-40);
	glVertex2i(33,-32);
	glVertex2i(30,-32);
	glVertex2i(29,-40);
	glEnd();

	//Body
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2i(34,-36);
	glVertex2i(34,-26);
	glVertex2i(32,-27);
	glVertex2i(30,-26);
	glVertex2i(30,-36);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2i(32, -27);
	glVertex2i(32, -36);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(203, 67, 53 );
	glVertex2i(33, -28);
	glVertex2i(33, -32);
	glVertex2i(32, -30);
	glVertex2i(34, -30);
	glEnd();

	//Left hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2i(35,-26);
	glVertex2i(34,-26);
	glVertex2i(34,-30);
	glVertex2i(35,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(35, -30);
	glVertex2i(34, -31);
	glEnd();


	//Right hand
	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2i(30,-26);
	glVertex2i(29,-26);
	glVertex2i(29,-30);
	glVertex2i(30,-30);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(29, -30);
	glVertex2i(30, -31);
	glEnd();

	//Shoe
	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(31,-40);
	glVertex2i(30,-38);
	glVertex2i(29,-40);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,0,0);
	glVertex2i(35,-40);
	glVertex2i(34,-38);
	glVertex2i(33,-40);
	glEnd();


    glLineWidth(6);
	glBegin(GL_LINES);
	glColor3ub(249, 231, 159);
	glVertex2i(32, -27);
	glVertex2i(32, -24);

	glEnd();

	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(249, 231, 159 );
    x=32; y=-23; radius =2.5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Hair
    glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2i(35,-22);
	glVertex2i(33,-20);
	glVertex2i(31,-20);
	glVertex2i(29,-22);
	glEnd();

		 glBegin(GL_QUADS);
	glColor3ub(148, 235, 233);
	glVertex2i(30,-23);
	glVertex2i(34,-23);
	glVertex2i(34,-25);
	glVertex2i(30,-25);
	glEnd();
glPopMatrix();




glPushMatrix();
glTranslatef(ambulancePosition1,0.0f,0.0f);
	// ambulance body
	glBegin(GL_POLYGON);
	glColor3ub(253, 254, 254);
	glVertex2f(-90, -50);
	glVertex2f(-50, -50);
	glVertex2f(-51, -40);
	glVertex2f(-55, -35);
	glVertex2f(-60, -20);
	glVertex2f(-85, -20);
	glVertex2f(-90, -35);
	glEnd();
	       //ambulance sine
	glBegin(GL_QUADS);
	glColor3ub(231, 76, 60);
	glVertex2i(-51,-40);
	glVertex2i(-51,-39);
    glVertex2i(-90,-39);
	glVertex2i(-90,-40);
		glVertex2i(-80,-25);
	glVertex2i(-79,-25);
	glVertex2i(-79,-35);
	glVertex2i(-80,-35);
		glVertex2i(-82,-29);
	glVertex2i(-77,-29);
	glVertex2i(-77,-31);
	glVertex2i(-82,-31);
		glVertex2i(-70,-20);
	glVertex2i(-72,-20);
	glVertex2i(-72,-18);
	glVertex2i(-70,-18);
    glEnd();


            	        //ambulance glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(-75,-23);
	glVertex2i(-68,-23);
    glVertex2i(-68,-35);
	glVertex2i(-75,-35);
		glVertex2i(-61,-23);
	glVertex2i(-56,-35);
	glVertex2i(-66,-35);
	glVertex2i(-66,-23);
    glEnd();
       //ambulance bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(-88,-50);
	glVertex2i(-91,-50);
    glVertex2i(-91,-46);
	glVertex2i(-88,-46);
		glVertex2i(-52,-50);
	glVertex2i(-52,-46);
	glVertex2i(-49,-46);
	glVertex2i(-49,-50);
    glEnd();

               //ambulance Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(-90,-35);
	glVertex2i(-89,-35);
    glVertex2i(-89,-40);
	glVertex2i(-90,-40);
	glColor3ub(251, 250, 32);
		glVertex2i(-51,-40);
	glVertex2i(-55,-40);
	glVertex2i(-55,-42);
	glVertex2i(-51,-42);
    glEnd();

    //Night Light
    glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(-50,-43);
	glVertex2i(-50,-41);
    glVertex2i(-15,-45);
	glVertex2i(-30,-48);
	glEnd();


        //ambulance wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-61; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-61; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //ambulance wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=-79; y=-50; radius =6;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=-79; y=-50; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
glPopMatrix();





glPushMatrix();
glTranslatef(carPosition1,0.0f,0.0f);
    	        //car body
	glBegin(GL_QUADS);
	glColor3ub(125, 60, 152);
	glVertex2i(50,-70);
	glVertex2i(85,-70);
    glVertex2i(87,-80);
	glVertex2i(48,-80);
    glVertex2i(58,-70);
	glVertex2i(61,-60);
	glVertex2i(76,-60);
	glVertex2i(78,-70);
    glEnd();

        	        //car glass
	glBegin(GL_QUADS);
	glColor3ub(52, 152, 219);
	glVertex2i(59,-70);
	glVertex2i(62,-61);
    glVertex2i(75,-61);
	glVertex2i(77,-70);
		glVertex2i(69,-70);
	glVertex2i(69,-61);
	glVertex2i(73,-61);
	glVertex2i(75,-70);
    glEnd();

        //car bumper
	glBegin(GL_QUADS);
	glColor3ub(46, 64, 83);
	glVertex2i(46,-80);
	glVertex2i(53,-80);
    glVertex2i(53,-76);
	glVertex2i(46,-76);
		glVertex2i(88,-80);
	glVertex2i(82,-80);
	glVertex2i(82,-76);
	glVertex2i(88,-76);
    glEnd();


        glLineWidth(2);
        glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(69,-80);
    glVertex2i(69,-60);
        glVertex2i(58,-70);
    glVertex2i(78,-70);
    glEnd();

            //car Light
	glBegin(GL_QUADS);
	glColor3ub(236, 67, 34);
	glVertex2i(84,-70);
	glVertex2i(85,-70);
    glVertex2i(85,-75);
	glVertex2i(84,-75);
	glColor3ub(226, 224, 224);
		glVertex2i(51,-70);
	glVertex2i(49,-70);
	glVertex2i(49,-72);
	glVertex2i(51,-72);
    glEnd();

    //Front Light Night
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(49,-73);
	glVertex2i(49,-70);
	glVertex2i(14,-76);
	glVertex2i(29,-79);
	glEnd();


    //Car wheel-1
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Car wheel-2
            glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=75; y=-80; radius =5;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();
                glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=75; y=-80; radius =3;
    twicePi = 2.0f * PI;
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

glPopMatrix();

	glPushMatrix();
    glTranslatef(policecarPosition2,0.0f,0.0f);

	//Police Car
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex2i(45,-90);
	glVertex2i(48,-78);
	glVertex2i(57,-75);
	glVertex2i(65,-65);
	glVertex2i(83,-65);
	glVertex2i(86,-75);
	glVertex2i(93,-75);
	glVertex2i(95,-90);
	glEnd();

	//Front window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(65,-67);
	glVertex2i(73,-67);
	glVertex2i(73,-74);
	glVertex2i(60,-74);
	glEnd();

	//Back window
	 glBegin(GL_QUADS);
	glColor3ub(35, 148, 186);
	glVertex2i(74,-67);
	glVertex2i(82,-67);
	glVertex2i(84,-74);
	glVertex2i(74,-74);
	glEnd();

	//Body Art
	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3ub(35, 57, 186);
	glVertex2i(52, -80);
	glVertex2i(88, -80);
	glEnd();

	//Front art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(44,-90);
	glVertex2i(48,-90);
	glVertex2i(48,-87);
	glVertex2i(44,-87);
	glEnd();

	//Back art
	 glBegin(GL_QUADS);
	glColor3ub(40, 55, 71 );
	glVertex2i(92,-90);
	glVertex2i(97,-90);
	glVertex2i(97,-87);
	glVertex2i(92,-87);
	glEnd();

	//Front Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(47,-82);
	glVertex2i(50,-82);
	glVertex2i(50,-79);
	glVertex2i(48,-79);
	glEnd();

	//Back Light art
	 glBegin(GL_QUADS);
	glColor3ub(247, 43, 43 );
	glVertex2i(91,-82);
	glVertex2i(94,-82);
	glVertex2i(93,-79);
	glVertex2i(91,-79);
	glEnd();

	//Top Light
	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(67,-65);
	glVertex2i(69,-65);
	glVertex2i(69,-63);
	glVertex2i(67,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(8, 68, 189 );
	glVertex2i(69,-65);
	glVertex2i(71,-65);
	glVertex2i(71,-63);
	glVertex2i(69,-63);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(189, 8, 8 );
	glVertex2i(71,-65);
	glVertex2i(73,-65);
	glVertex2i(73,-63);
	glVertex2i(71,-63);
	glEnd();

	//Front Light Night
	glBegin(GL_QUADS);
	glColor3ub(251, 250, 0 );
	glVertex2i(45,-82);
	glVertex2i(45,-79);
	glVertex2i(10,-84);
	glVertex2i(25,-87);
	glEnd();

	//Front tire
	 glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=60; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Front Tire middle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=60; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();


    //Back Tire
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(40, 55, 71 );
    x=80; y=-90; radius =5;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    //Back Tire Middle
     glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153, 163, 164);
    x=80; y=-90; radius =3;

    twicePi = 2.0f * PI;


    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f(
    x + (radius * cos(i *  twicePi / triangleAmount)),
    y + (radius * sin(i * twicePi / triangleAmount))
        );
        }
    glEnd();

    glPopMatrix();


    glFlush();


}


void update(int value) {
    sunPosition1-=sunSpeed1;
    cloudPosition1+=couldSpeed1;
    cloudPosition2+=couldSpeed2;
    policecarPosition-=policecarSpeed;
    ambulancePosition2+=ambulacespeed2;
    carPosition2-=carSpeed2;
    hujurPosition2+=hujurspeed1;
    hujurPosition1-=hujurspeed1;
    bmenPosition1+=hujurspeed1;
    emenPosition1-=hujurspeed1;
    lmenPosition1-=hujurspeed1;
  // printf("%f\n",emenPosition1);

if(hujurPosition1<-18)
        hujurPosition1=200;

if(hujurPosition2>170)
        hujurPosition2=-30;

if(bmenPosition1>43)
        bmenPosition1=-180;

if(emenPosition1<-160)
        emenPosition1=50;

    if(ambulancePosition2>195){
        ambulancePosition2=-40;
        menPosition2=0;
        menPosition2-=1.4;
    }
        if(ambulancePosition2>89 && ambulancePosition2<93)
 {
     ambulancePosition2-=1.95;//ambulance break

 }
 if(ambulancePosition2>88)
 {
          menPosition2+=menspeed2;
     if(menPosition2>28)
      {
    menPosition2+=1.5;
      }

//     printf("%f\n",menPosition2);
 }

if(carPosition2<-180)
        carPosition2=70;




    if(sunPosition1<-180)
    {
        sunPosition1=30;
    }

    if(cloudPosition1>180)
    {
        cloudPosition1=-30;
    }
    if(cloudPosition2>150)
    {
        cloudPosition2=-70;
    }
        if(policecarPosition<-200)
    {
        policecarPosition=50;
    }


    sunPosition2-=sunSpeed2;
    cloudPosition3+=couldSpeed3;
    cloudPosition4+=couldSpeed4;
    carPosition1-=carSpeed1;
    ambulancePosition1+=ambulacespeed1;
  doctorPosition-=doctorspeed;
  policecarPosition2-=policecarSpeed2;


    if(sunPosition2<-180)
        sunPosition2=30;
    if(cloudPosition3>190)
        cloudPosition3=-30;
        if(cloudPosition4>150)
        cloudPosition4=-80;
        if(carPosition1<-180)
        carPosition1=70;
         if(ambulancePosition1>195)
        ambulancePosition1=-40;
        if(policecarPosition2<-200)
        policecarPosition2=50;

if(ambulancePosition1>96 && ambulancePosition1<99)
 {
     ambulancePosition1-=1.95;           //ambulance break
     doctorPosition=0;
 }


 if(doctorPosition<-23)
     doctorPosition=ambulancePosition1;



glutPostRedisplay();


glutTimerFunc(100, update, 0);
}




void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'z':
    glutDisplayFunc(display1);
    glutPostRedisplay();
    break;

    case 'a':
    glutDisplayFunc(display1N);
    glutPostRedisplay();
    break;

case 'e':
    glutDisplayFunc(display2);
    glutPostRedisplay();
    break;

    case 't':
    glutDisplayFunc(display2N);
    glutPostRedisplay();
    break;


	glutPostRedisplay();


}
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1300, 700);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Covid 19-2 ");
   glutKeyboardFunc(handleKeypress);
    init ();
    glutDisplayFunc(display1);
    glutTimerFunc(1, update, 0);
    glutMainLoop();
    return 0;

}
