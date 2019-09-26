
#include<iostream>
#include<cstdio>
#include<cmath>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;
GLfloat angle = 0.0f;
GLfloat boat = 0.0f;
GLfloat ship =0.0f;
GLfloat plane =0.0f;
GLfloat car1 =1.2f;
float boatexist = 0.0f;
GLfloat speed = 0.01f;
GLfloat river=0.0f;
GLfloat road=0.0f;
int p=0;
float g[101];
int r=0;
GLfloat s=0.0f;
float x[101],y[101],a=-160.0f,c=-140.0f;
int b=-1,b5=-1,b8=-1, w=0,w1=0,b11=-1,b14=-1,w2=0,b17=1,b20=-1,b23=-1,b26=-1;
float b1[101],b2[101];
float b3[17],b4[17];
float b6[17],b7[17];
float b9[17],b10[17];
float b12[17],b13[17];
float b15[17],b16[17];
float b21[17],b22[17];
float b24[17],b25[17];
float b27[17],b28[17];
float convertx(float value){
return (value/1200);
}
float converty(float value){
return (value/700);
}

void update(int value) {

    s+=.005f;
    if(boat<1.2f)
    boat += speed;
    else{
        ship+=.01f;
    }
            if(ship>2.4f){
            ship=-1.05f;
            r++;
            }
            if(r==1){
                p++;
            }
        if(p>101){
        b++;
        b5++;
        }
        if(b>20)
        w=1;
        if(b>20)
            b8++;
            if(b8>20){
                w1=1;
                b11++;
                b14++;
                }
                if(b14>20){
                    w2=1;
                }
                if(b8>20){
                    b17++;
                    b23++;
                }
                if(b23>20)
                    b26++;

                    plane+=.005f;
                    while(plane>1.2)
                    plane=-1.15f;
                    car1-=0.025f;
                    while(car1<-2.05f)
                        car1=1.8f;

                        if(p>101)
                            b20++;

	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();


//riverside
glBegin(GL_POLYGON);
glColor3f(0.674f, 0.537f, 0.125f);
 glVertex2f(convertx(-1200.0f), converty(-450.0f));
 glVertex2f(convertx(-700.0f), converty(-400.0f));
 glVertex2f(convertx(-680.0f), converty(-350.0f));
 glVertex2f(convertx(-1200.0f), converty(-400.0f));
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.674f, 0.537f, 0.125f);
 glVertex2f(convertx(-700.0f), converty(-400.0f));
 glVertex2f(convertx(100.0f), converty(-450.0f));
 glVertex2f(convertx(150.0f), converty(-400.0f));
 glVertex2f(convertx(-680.0f), converty(-350.0f));
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.674f, 0.537f, 0.125f);
 glVertex2f(convertx(100.0f), converty(-450.0f));
 glVertex2f(convertx(700.0f), converty(-400.0f));
 glVertex2f(convertx(750.0f), converty(-350.0f));
 glVertex2f(convertx(150.0f), converty(-400.0f));
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.674f, 0.537f, 0.125f);
 glVertex2f(convertx(700.0f), converty(-400.0f));
 glVertex2f(convertx(1200.0f), converty(-400.0f));
 glVertex2f(convertx(1200.0f), converty(-350.0f));
 glVertex2f(convertx(750.0f), converty(-350.0f));
glEnd();
//river
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);
 glVertex2f(convertx(-1200.0f), converty(-700.0f));
 glVertex2f(convertx(1200.0f), converty(-700.0f));
 glColor3f(0.250f, 0.309f, 0.768f);
 glVertex2f(convertx(1200.0f), converty(-400.0f));
 glVertex2f(convertx(750.0f), converty(-400.0f));
 glVertex2f(convertx(100.0f), converty(-450.0f));
 glVertex2f(convertx(-750.0f), converty(-400.0f));
 glVertex2f(convertx(-1200.0f), converty(-450.0f));
glEnd();

//green side over river
glBegin(GL_POLYGON);
glColor3f(0.039f, 0.176f, 0.023f);
 glVertex2f(convertx(-680.0f), converty(-350.0f));
 glVertex2f(convertx(150.0f), converty(-400.0f));
 glVertex2f(convertx(750.0f), converty(-350.0f));
 glVertex2f(convertx(1200.0f), converty(-350.0f));
 glVertex2f(convertx(1200.0f), converty(-100.0f));
 glVertex2f(convertx(-680.0f), converty(-200.0f));
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.039f, 0.176f, 0.023f);
 glVertex2f(convertx(-1200.0f), converty(-400.0f));
 glVertex2f(convertx(-680.0f), converty(-350.0f));
 glVertex2f(convertx(-680.0f), converty(-200.0f));
 glVertex2f(convertx(-1200.0f), converty(-250.0f));
glEnd();
///////
glPushMatrix();
glTranslatef(ship,0.0f,0.0f);
//ship   part 1

      glBegin(GL_QUADS);
      glColor3f(0.976f, 0.203f, 0.376f);
      glVertex2f(convertx (-1800.0f),converty (-650.0f));
      glVertex2f(convertx (-1350.0f),converty  (-650.0f));
      glVertex2f(convertx(-1300.0f), converty (-550.0f));
      glVertex2f(convertx(-1800.0f), converty (-550.0f));
      glEnd();
//ship part 2


      glBegin(GL_QUADS);
      glColor3f(0.141f, 0.125f, 0.835f);
      glVertex2f(convertx (-1770.0f),converty (-550.0f));
      glVertex2f(convertx (-1500.0f),converty  (-550.0f));
      glVertex2f(convertx(-1550.0f), converty (-500.0f));
      glVertex2f(convertx(-1770.0f), converty (-500.0f));
      glEnd();


//ship part 3

 glBegin(GL_QUADS);
      glColor3f(0.274f, 0.647f, 0.705f);
      glVertex2f(convertx (-1740.0f),converty (-500.0f));
      glVertex2f(convertx (-1600.0f),converty  (-500.0f));
      glVertex2f(convertx(-1650.0f), converty (-450.0f));
      glVertex2f(convertx(-1740.0f), converty (-450.0f));
      glEnd();
//ship window 1

       glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx(-1740.0f), converty (-540.0f));
      glVertex2f(convertx(-1680.0f), converty (-540.0f));
      glVertex2f(convertx (-1680.0f),converty (-500.0f));
      glVertex2f(convertx (-1740.0f),converty  (-500.0f));
      glEnd();

//ship window 2


       glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx(-1660.0f), converty (-540.0f));
      glVertex2f(convertx(-1600.0f), converty (-540.0f));
      glVertex2f(convertx (-1600.0f),converty (-500.0f));
      glVertex2f(convertx (-1660.0f),converty  (-500.0f));
      glEnd();


//ship window 3

 glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx(-1710.0f), converty (-490.0f));
      glVertex2f(convertx(-1670.0f), converty (-490.0f));
      glVertex2f(convertx (-1670.0f),converty (-450.0f));
      glVertex2f(convertx (-1710.0f),converty  (-450.0f));
      glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(boat,0.0f,0.0f);
//Boat 1
glBegin(GL_POLYGON);
      glColor3f(0.192f, 0.176f, 0.168f);
      glVertex2f(convertx (50.0f),converty (-650.0f));
      glVertex2f(convertx (380.0f),converty  (-650.0f));
      glVertex2f(convertx(380.0f), converty (-600.0f));
      glVertex2f(convertx(80.0f), converty(-600.0f));
      glVertex2f(convertx(-20.0f), converty(-550.0f));
   glEnd();
   //Boat 2
   glBegin(GL_POLYGON);
      glColor3f(0.192f, 0.176f, 0.168f);
      glVertex2f(convertx (380.0f),converty (-650.0f));
      glVertex2f(convertx (440.0f),converty  (-550.0f));
      glVertex2f(convertx(340.0f), converty (-600.0f));
   glEnd();
   //Boat 3
    glBegin(GL_POLYGON);
      glColor3f(0.439f, 0.141f, 0.019f);
      glVertex2f(convertx (80.0f),converty (-600.0f));
      glVertex2f(convertx (340.0f),converty  (-600.0f));
      glVertex2f(convertx(440.0f), converty (-550.0f));
      glVertex2f(convertx(340.0f), converty(-500.0f));
      glVertex2f(convertx(80.0f), converty(-500.0f));
      glVertex2f(convertx(-20.0f), converty(-550.0f));
      glEnd();
//boat 4

glBegin(GL_QUADS);
      glColor3f(0.156f, 0.117f, 0.101f);
      glVertex2f(convertx (80.0f),converty (-600.0f));
      glVertex2f(convertx (100.0f),converty  (-600.0f));
      glVertex2f(convertx(100.0f), converty (-500.0f));
      glVertex2f(convertx(80.0f), converty (-500.0f));
   glEnd();
   //boat 5
   glBegin(GL_QUADS);
      glColor3f(0.156f, 0.117f, 0.101f);
      glVertex2f(convertx (200.0f),converty (-600.0f));
      glVertex2f(convertx (220.0f),converty  (-600.0f));
      glVertex2f(convertx(220.0f), converty (-500.0f));
      glVertex2f(convertx(200.0f), converty (-500.0f));
   glEnd();

   //boat 6
   glBegin(GL_QUADS);
      glColor3f(0.156f, 0.117f, 0.101f);
      glVertex2f(convertx (320.0f),converty (-600.0f));
      glVertex2f(convertx (340.0f),converty  (-600.0f));
      glVertex2f(convertx(340.0f), converty (-500.0f));
      glVertex2f(convertx(320.0f), converty (-500.0f));
   glEnd();
   glPopMatrix();
   //House1

//sky
   glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx (-1200.0f),converty (200.0f));

      glVertex2f(convertx (1200.0f),converty  (200.0f));
      glColor3f(0.211f, 0.905f, 0.870f);
      glVertex2f(convertx(1200.0f), converty (700.0f));
      glVertex2f(convertx(-1200.0f), converty (700.0f));
   glEnd();
   //sun
    glPushMatrix();
 if(s>.75)
    s=.75;
    float x1,y1,x2,y2;
    float ang;
    double radius=0.1;
    x1 = .30,y1=0.150;
     glTranslated(0.0f,s,0.0f);
     glBegin(GL_TRIANGLE_FAN);
    glColor3f(255,0,0);
        glVertex2f(x1,y1);
        for (ang=1.0f;ang<500.0f;ang+=0.5)
        {
            x2 = x1+sin(ang)*radius;
            y2 = y1+cos(ang)*radius;
            glVertex2f(x2,y2);
        }
       glEnd();
       glPopMatrix();

   //Soil
    glBegin(GL_QUADS);
      glColor3f(0.639f, 0.396f, 0.019f);
      glVertex2f(convertx (-1200.0f),converty (100.0f));
         // glColor3f(0.266f, 0.662f, 0.258f);
      glVertex2f(convertx (1200.0f),converty  (100.0f));
       glColor3f(1,1,1);
      glVertex2f(convertx(1200.0f), converty (-150.0f));
      glColor3f(0.266f, 0.662f, 0.258f);
      glVertex2f(convertx(-1200.0f), converty (-150.0f));
   glEnd();

//Road
glBegin(GL_QUADS);
      glColor3f(0.639f, 0.396f, 0.019f);
      glVertex2f(convertx (-1200.0f),converty (-300.0f));
      glVertex2f(convertx (-300.0f),converty  (-250.0f));
      glVertex2f(convertx(-250.0f), converty (-50.0f));
      glVertex2f(convertx(-1200.0f), converty (-100.0f));
   glEnd();
   glBegin(GL_QUADS);
      glColor3f(0.639f, 0.396f, 0.019f);
      glVertex2f(convertx (-300.0f),converty (-250.0f));
      glVertex2f(convertx (300.0f),converty  (-300.0f));
      // glColor3f(0.309f, 0.305f, 0.250f);
      glVertex2f(convertx(350.0f), converty (-100.0f));
      glVertex2f(convertx(-250.0f), converty (-50.0f));
      glVertex2f(convertx(-250.0f), converty (-50.0f));
   glEnd();
   glBegin(GL_QUADS);
      glColor3f(0.639f, 0.396f, 0.019f);
      glVertex2f(convertx (300.0f),converty (-300.0f));
      glVertex2f(convertx (1200.0f),converty  (-200.0f));
      glVertex2f(convertx(1200.0f), converty (-50.0f));
      glVertex2f(convertx(350.0f), converty (-100.0f));
   glEnd();

glPushMatrix();
for(int i=0;i<=p;i++){
    for(int j=0;j<=101;j++){
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(convertx(x[i]), converty(y[j]));
    glVertex2f(convertx(x[i]+24),converty(y[j]));
    glVertex2f(convertx(x[i]+24),converty(y[j]+3));
    glVertex2f(convertx(x[i]),converty(y[j]+3));
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(convertx(x[i]), converty(a));
    glVertex2f(convertx(x[i]+24),converty(a));
    glVertex2f(convertx(x[i]+24),converty(c));
    glVertex2f(convertx(x[i]),converty(c));
    glEnd();
}
}
glPopMatrix();

//house
   //1
   glBegin(GL_QUADS);
      glColor3f(0.776f, 0.596f, 0.525f);
      glVertex2f(convertx (-960.0f),converty (20.0f));
      glVertex2f(convertx (-640.0f),converty  (20.0f));
      glVertex2f(convertx(-660.0f), converty (50.0f));
      glVertex2f(convertx(-960.0f), converty (50.0f));
   glEnd();
   //2
   glBegin(GL_QUADS);
      glColor3f(0.796f, 0.458f, 0.227f);
      glVertex2f(convertx (-960.0f),converty (50.0f));
      glVertex2f(convertx (-660.0f),converty  (50.0f));
      glColor3f(0.878f, 0.772f, 0.698f);
      glVertex2f(convertx(-660.0f), converty (200.0f));
      glVertex2f(convertx(-960.0f), converty (200.0f));
   glEnd();
   //3
   glBegin(GL_QUADS);
      glColor3f(1, 1, 1);
      glVertex2f(convertx (-860.0f),converty (50.0f));
      glVertex2f(convertx (-760.0f),converty  (50.0f));
      glVertex2f(convertx(-760.0f), converty (130.0f));
      glVertex2f(convertx(-860.0f), converty (130.0f));
      //4
        glBegin(GL_QUADS);
      glColor3f(0.533f, 0.066f, 0.078f);
      glVertex2f(convertx (-960.0f),converty (200.0f));
      glVertex2f(convertx (-660.0f),converty  (200.0f));
      glVertex2f(convertx(-700.0f), converty (300.0f));
      glVertex2f(convertx(-1000.0f), converty (300.0f));
   glEnd();
   //5
     glBegin(GL_POLYGON);
      glColor3f(0.796f, 0.458f, 0.227f);
      glVertex2f(convertx (-1050.0f),converty (60.0f));
         glColor3f(0.921f, 0.839f, 0.756f);
      glVertex2f(convertx (-960.0f),converty  (50.0f));
      glVertex2f(convertx(-960.0f), converty (200.0f));
      glVertex2f(convertx(-1000.0f), converty (300.0f));
      glVertex2f(convertx(-1050.0f), converty (200.0f));
      glEnd();
      //6
       glBegin(GL_QUADS);
      glColor3f(0.776f, 0.596f, 0.525f);
      glVertex2f(convertx (-1050.0f),converty (30.0f));
      glVertex2f(convertx (-960.0f),converty  (20.0f));
      glVertex2f(convertx(-960.0f), converty (50.0f));
      glVertex2f(convertx(-1050.0f), converty (60.0f));
   glEnd();
     //7

     glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx (-1020.0f),converty (150.0f));
      glVertex2f(convertx (-990.0f),converty  (150.0f));
      glVertex2f(convertx(-990.0f), converty (200.0f));
      glVertex2f(convertx(-1020.0f), converty (200.0f));
   glEnd();

   //tree1 1
   glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (-600.0f),converty (50.0f));
      glVertex2f(convertx (-550.0f),converty  (50.0f));
      glVertex2f(convertx(-550.0f), converty (150.0f));
      glVertex2f(convertx(-600.0f), converty (150.0f));
   glEnd();
//tree1  2
      glBegin(GL_POLYGON);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (-660.0f),converty (110.0f));
      glVertex2f(convertx (-490.0f),converty  (110.0f));
      glVertex2f(convertx(-575.0f), converty (400.0f));
      glEnd();

  //tree2  1

     glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (-450.0f),converty (50.0f));
      glVertex2f(convertx (-400.0f),converty  (50.0f));
      glVertex2f(convertx(-400.0f), converty (150.0f));
      glVertex2f(convertx(-450.0f), converty (150.0f));
   glEnd();
//tree2  2
   glBegin(GL_POLYGON);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (-510.0f),converty (120.0f));
      glVertex2f(convertx (-340.0f),converty  (120.0f));
      glVertex2f(convertx(-435.0f), converty (450.0f));
      glEnd();
//tree3  1
glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (-300.0f),converty (50.0f));
      glVertex2f(convertx (-250.0f),converty  (50.0f));
      glVertex2f(convertx(-250.0f), converty (150.0f));
      glVertex2f(convertx(-300.0f), converty (150.0f));
   glEnd();

   //tree3 2
   glBegin(GL_POLYGON);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (-360.0f),converty (100.0f));
      glVertex2f(convertx (-190.0f),converty  (100.0f));
      glVertex2f(convertx(-275.0f), converty (380.0f));
      glEnd();

      //tree5 1

      glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (1000.0f),converty (60.0f));
      glVertex2f(convertx (1050.0f),converty  (60.0f));
      glVertex2f(convertx(1050.0f), converty (130.0f));
      glVertex2f(convertx(1000.0f), converty (130.0f));
glEnd();
      //tree5 2

      glBegin(GL_POLYGON);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (950.0f),converty (120.0f));
      glVertex2f(convertx (1100.0f),converty  (120.0f));
      glVertex2f(convertx(1025.0f), converty (380.0f));
      glEnd();
//house2  1

glBegin(GL_QUADS);
      glColor3f(0.776f, 0.596f, 0.525f);
      glVertex2f(convertx (750.0f),converty (50.0f));
      glVertex2f(convertx (980.0f),converty  (50.0f));
      glVertex2f(convertx(970.0f), converty (80.0f));
      glVertex2f(convertx(750.0f), converty (80.0f));
      glEnd();

      //house2  2

      glBegin(GL_QUADS);
      glColor3f(0.796f, 0.458f, 0.227f);

      glVertex2f(convertx (750.0f),converty (80.0f));
      glVertex2f(convertx (970.0f),converty  (80.0f));

      glVertex2f(convertx(970.0f), converty (200.0f));
      glColor3f(0.878f, 0.772f, 0.698f);
      glVertex2f(convertx(750.0f), converty (200.0f));

      glEnd();

      //house2  3
      glBegin(GL_QUADS);
      glColor3f(0.533f, 0.066f, 0.078f);
      glVertex2f(convertx (750.0f),converty (200.0f));
      glVertex2f(convertx (970.0f),converty  (200.0f));
      glVertex2f(convertx(930.0f), converty (280.0f));
      glVertex2f(convertx(710.0f), converty (280.0f));
      glEnd();

      //house2 4
      glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx (835.0f),converty (80.0f));
      glVertex2f(convertx (885.0f),converty  (80.0f));
      glVertex2f(convertx(885.0f), converty (150.0f));
      glVertex2f(convertx(835.0f), converty (150.0f));
      glEnd();

      //house2 5
      glBegin(GL_QUADS);
      glColor3f(0.533f, 0.066f, 0.078f);
      glVertex2f(convertx (675.0f),converty (170.0f));
      glVertex2f(convertx (725.0f),converty  (250.0f));
      glVertex2f(convertx(710.0f), converty (280.0f));
      glVertex2f(convertx(660.0f), converty (200.0f));
      glEnd();
//house2 6

      glBegin(GL_POLYGON);
      glColor3f(0.796f, 0.458f, 0.227f);
      glVertex2f(convertx (675.0f),converty (90.0f));
       glColor3f(0.921f, 0.839f, 0.756f);
      glVertex2f(convertx (750.0f),converty  (80.0f));

      glVertex2f(convertx(750.0f), converty (200.0f));

      glVertex2f(convertx(725.0f), converty (250.0f));

       glVertex2f(convertx (675.0f),converty (170.0f));
      glEnd();

      //house2 7
      glBegin(GL_QUADS);
      glColor3f(0.776f, 0.596f, 0.525f);
      glVertex2f(convertx (675.0f),converty (60.0f));
      glVertex2f(convertx (750.0f),converty  (50.0f));
      glVertex2f(convertx(750.0f), converty (80.0f));
      glVertex2f(convertx(675.0f), converty (90.0f));
      glEnd();

      //house2 8

      glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx (700.0f),converty (170.0f));
      glVertex2f(convertx (730.0f),converty  (170.0f));
      glVertex2f(convertx(730.0f), converty (200.0f));
      glVertex2f(convertx(700.0f), converty (200.0f));
      glEnd();

      //tree4
      //1
      glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (-100.0f),converty (50.0f));
      glVertex2f(convertx (-30.0f),converty  (50.0f));
      glVertex2f(convertx(-30.0f), converty (150.0f));
      glVertex2f(convertx(-100.0f), converty (150.0f));
      glEnd();
      //2
      glBegin(GL_TRIANGLES);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (-190.0f),converty (80.0f));
      glVertex2f(convertx (60.0f),converty  (80.0f));
      glVertex2f(convertx(-60.0f), converty (420.0f));
      glEnd();
      //gather.1
      glBegin(GL_POLYGON);
      glColor3f(0.843f, 0.482f, 0.078f);
      glVertex2f(convertx (100.0f),converty (50.0f));
      glVertex2f(convertx (150.0f),converty  (50.0f));
      glVertex2f(convertx(150.0f), converty (120.0f));
      glVertex2f(convertx(100.0f), converty (120.0f));
      glEnd();
      //2
      glBegin(GL_POLYGON);
      glColor3f(0.976f, 0.603f, 0.184f);
      glVertex2f(convertx (60.0f),converty (70.0f));
      glVertex2f(convertx (200.0f),converty  (70.0f));
      glVertex2f(convertx(210.0f), converty (180.0f));
      glVertex2f(convertx(50.0f), converty (180.0f));
      glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.976f, 0.603f, 0.184f);
      glVertex2f(convertx(50.0f), converty (180.0f));
      glVertex2f(convertx(210.0f), converty (180.0f));
      glVertex2f(convertx(200.0f), converty (290.0f));
      glVertex2f(convertx(60.0f), converty (290.0f));
      glEnd();
      //washroom
      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 0.1f);
      glVertex2f(convertx(500.0f), converty (180.0f));
      glVertex2f(convertx(650.0f), converty (180.0f));
      glVertex2f(convertx(575.0f), converty (260.0f));
      glEnd();
      glBegin(GL_POLYGON);
      glColor3f(0.639f, 0.396f, 0.019f);
      glVertex2f(convertx(520.0f), converty (50.0f));
      glVertex2f(convertx(630.0f), converty (50.0f));
      glVertex2f(convertx(630.0f), converty (180.0f));
      glVertex2f(convertx(520.0f), converty (180.0f));
      glEnd();
      //washroomDoor
      glBegin(GL_POLYGON);
      glColor3f(0.0, 0.0f, 1.0f);
      glVertex2f(convertx(550.0f), converty (50.0f));
      glVertex2f(convertx(600.0f), converty (50.0f));
      glVertex2f(convertx(600.0f), converty (120.0f));
      glVertex2f(convertx(550.0f), converty (120.0f));
      glEnd();
      //Tree beside washroom
      glBegin(GL_POLYGON);
      glColor3f(0.0, 0.0f, 1.0f);
      glVertex2f(convertx(550.0f), converty (50.0f));
      glVertex2f(convertx(600.0f), converty (50.0f));
      glVertex2f(convertx(600.0f), converty (120.0f));
      glVertex2f(convertx(550.0f), converty (120.0f));
      glEnd();
if(p>99){

         //car part 1
      glPushMatrix();
      glTranslatef(car1,0.0f,0.0f);
       glBegin(GL_POLYGON);
      glColor3f(0.537f, 0.2f, 0.619f);
      glVertex2f(convertx(1224.0f), converty (-300.0f));
      glVertex2f(convertx(1300.0f), converty (-300.0f));
      glVertex2f(convertx(1300.0f),converty (-240.0f));
      glVertex2f(convertx(1224.0f),converty (-240.0f));
      glEnd();

     glBegin(GL_POLYGON);
      glColor3f(0.658f, 0.019f, 0.192f);
      glVertex2f(convertx(1224.0f), converty (-240.0f));
      glVertex2f(convertx(1300.0f), converty (-240.0f));
      glVertex2f(convertx(1300.0f),converty (-160.0f));
     glEnd();
     glBegin(GL_POLYGON);
      glColor3f(0.811f, 0.466f, 0.560f);
      glVertex2f(convertx(1300.0f), converty (-300.0f));
      glVertex2f(convertx(1500.0f), converty (-300.0f));
      glVertex2f(convertx(1500.0f),converty (-160.0f));
      glVertex2f(convertx(1300.0f),converty (-160.0f));
      glEnd();

      glPopMatrix();
        //lamp1 part 1
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(-1180.0f), converty (0.0f));
      glVertex2f(convertx(-1160.0f), converty (0.0f));
      glVertex2f(convertx(-1160.0f),converty (130.0f));
      glVertex2f(convertx (-1180.0f),converty  (130.0f));
      glEnd();
//lamp1 part 2
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(-1160.0f), converty (110.0f));
      glVertex2f(convertx(-1100.0f), converty (110.0f));
      glVertex2f(convertx(-1100.0f),converty (130.0f));
      glVertex2f(convertx (-1160.0f),converty  (130.0f));
      glEnd();

//lamp1 part 3
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(-1120.0f), converty (90.0f));
      glVertex2f(convertx(-1100.0f), converty (90.0f));
      glVertex2f(convertx(-1100.0f),converty (110.0f));
      glVertex2f(convertx (-1120.0f),converty  (110.0f));
      glEnd();

//lamp1 part 4
      glBegin(GL_POLYGON);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(-1110.0f), converty (70.0f));
      glVertex2f(convertx(-1090.0f), converty (90.0f));
      glVertex2f(convertx(-1130.0f),converty (90.0f));

      glEnd();

//lamp2 part 1
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(1020.0f), converty (0.0f));
      glVertex2f(convertx(1040.0f), converty (0.0f));
      glVertex2f(convertx(1040.0f),converty (130.0f));
      glVertex2f(convertx (1020.0f),converty  (130.0f));
      glEnd();
//lamp2 part 2
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(1040.0f), converty (110.0f));
      glVertex2f(convertx(1100.0f), converty (110.0f));
      glVertex2f(convertx(1100.0f),converty (130.0f));
      glVertex2f(convertx (1040.0f),converty  (130.0f));
      glEnd();

//lamp2 part 3
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(1080.0f), converty (90.0f));
      glVertex2f(convertx(1100.0f), converty (90.0f));
      glVertex2f(convertx(1100.0f),converty (110.0f));
      glVertex2f(convertx (1080.0f),converty  (110.0f));
      glEnd();

//lamp2 part 4
      glBegin(GL_POLYGON);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(1090.0f), converty (70.0f));
      glVertex2f(convertx(1110.0f), converty (90.0f));
      glVertex2f(convertx(1070.0f),converty (90.0f));

      glEnd();
//lamp3 part 1
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(20.0f), converty (-300.0f));
      glVertex2f(convertx(40.0f), converty (-300.0f));
      glVertex2f(convertx(40.0f),converty (-170.0f));
      glVertex2f(convertx (20.0f),converty  (-170.0f));
      glEnd();

//lamp3 part 2
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(40.0f), converty (-190.0f));
      glVertex2f(convertx(100.0f), converty (-190.0f));
      glVertex2f(convertx(100.0f),converty (-170.0f));
      glVertex2f(convertx (40.0f),converty  (-170.0f));
      glEnd();

//lamp3 part 3
      glBegin(GL_QUADS);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(80.0f), converty (-210.0f));
      glVertex2f(convertx(100.0f), converty (-210.0f));
      glVertex2f(convertx(100.0f),converty (-190.0f));
      glVertex2f(convertx (80.0f),converty  (-190.0f));
      glEnd();

//lamp3 part 4
      glBegin(GL_POLYGON);
      glColor3f(0.486, 0.219, 0.176);
      glVertex2f(convertx(90.0f), converty (-230.0f));
      glVertex2f(convertx(110.0f), converty (-210.0f));
      glVertex2f(convertx(70.0f),converty (-210.0f));

      glEnd();
p++;
 glPushMatrix();
 if(s>.75)
    s=.75;
   glTranslatef(0.0f,s,0.0f);
    float x1,y1,x2,y2;
    float ang;
    double radius=0.1;
    x1 = .30,y1=0.150;

     glBegin(GL_TRIANGLE_FAN);
    glColor3f(255,0,0);
        glVertex2f(x1,y1);
        for (ang=1.0f;ang<500.0f;ang+=0.5)
        {
            x2 = x1+sin(ang)*radius;
            y2 = y1+cos(ang)*radius;
            glVertex2f(x2,y2);
        }
       glEnd();
       glPopMatrix();


        glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b17;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.703f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b9[i]), converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]+17.50));
    glVertex2d(convertx(b9[i]),converty(b10[j]+17.50));
    glEnd();
            }
    }
}
glPopMatrix();

         //City building1
      glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b;j++){
            if(i<=15 && j<=15){

    glColor3f(0.749f, 0.411f, 0.411f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b1[i]), converty(b2[j]));
    glVertex2d(convertx(b1[i]+15.294),converty(b2[j]));
    glVertex2d(convertx(b1[i]+15.294),converty(b2[j]+30));
    glVertex2d(convertx(b1[i]),converty(b2[j]+30));
    glEnd();
}
    }

    }
       for(int i=0;i<=14;i++){
    for(int j=0;j<=b5;j++){
            if(i<=15 && j<=15){
    glColor3f(0.733f, 0.505f, 0.505f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b3[i]), converty(b4[j]));
    glVertex2d(convertx(b3[i]-2.941),converty(b4[j]));
    glVertex2d(convertx(b3[i]-2.941),converty(b4[j]+30));
    glVertex2d(convertx(b3[i]),converty(b4[j]+30));
    glEnd();
            }
            }

}

if(w==1){
//buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-920.0f),converty (70.0f));
      glVertex2f(convertx (-840.0f),converty  (70.0f));
      glVertex2f(convertx(-840.0f), converty (140.0f));
      glVertex2f(convertx(-920.0f), converty (140.0f));
      glEnd();
      //building 1 window 2
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-800.0f),converty (70.0f));
      glVertex2f(convertx (-720.0f),converty  (70.0f));
      glVertex2f(convertx(-720.0f), converty (140.0f));
      glVertex2f(convertx(-800.0f), converty (140.0f));
      glEnd();
      //buildin 1 window 3
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-920.0f),converty (170.0f));
      glVertex2f(convertx (-840.0f),converty  (170.0f));
      glVertex2f(convertx(-840.0f), converty (240.0f));
      glVertex2f(convertx(-920.0f), converty (240.0f));
      glEnd();
      //building 1 window 4
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-800.0f),converty (170.0f));
      glVertex2f(convertx (-720.0f),converty  (170.0f));
      glVertex2f(convertx(-720.0f), converty (240.0f));
      glVertex2f(convertx(-800.0f), converty (240.0f));
      glEnd();
      //buildin 1 window 5
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-920.0f),converty (270.0f));
      glVertex2f(convertx (-840.0f),converty  (270.0f));
      glVertex2f(convertx(-840.0f), converty (340.0f));
      glVertex2f(convertx(-920.0f), converty (340.0f));
      glEnd();
      //building 1 window 6
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-800.0f),converty (270.0f));
      glVertex2f(convertx (-720.0f),converty  (270.0f));
      glVertex2f(convertx(-720.0f), converty (340.0f));
      glVertex2f(convertx(-800.0f), converty (340.0f));
      glEnd();
      //buildin 1 window 7
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-920.0f),converty (370.0f));
      glVertex2f(convertx (-840.0f),converty (370.0f));
      glVertex2f(convertx(-840.0f), converty (440.0f));
      glVertex2f(convertx(-920.0f), converty (440.0f));
      glEnd();
      //building 1 window 8
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-800.0f),converty (370.0f));
      glVertex2f(convertx (-720.0f),converty (370.0f));
      glVertex2f(convertx(-720.0f), converty (440.0f));
      glVertex2f(convertx(-800.0f), converty (440.0f));
      glEnd();
}

glPopMatrix();

//Building 2
glPushMatrix();
for(int i=0;i<=14;i++){
    for(int j=0;j<=b8;j++){
            if(i<=15 && j<=15){
    glColor3f(0.784f, 0.235f, 0.662f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b6[i]), converty(b7[j]));
    glVertex2d(convertx(b6[i]+14.705),converty(b7[j]));
    glVertex2d(convertx(b6[i]+14.705),converty(b7[j]+21.176));
    glVertex2d(convertx(b6[i]),converty(b7[j]+21.176));
    glEnd();
            }
    }
}
if(w1==1)
{
    //buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-630.0f),converty (70.0f));
      glVertex2f(convertx (-560.0f),converty  (70.0f));
      glVertex2f(convertx(-560.0f), converty (140.0f));
      glVertex2f(convertx(-630.0f), converty (140.0f));
      glEnd();
//building 1 window 2
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-510.0f),converty (70.0f));
      glVertex2f(convertx (-440.0f),converty  (70.0f));
      glVertex2f(convertx(-440.0f), converty (140.0f));
      glVertex2f(convertx(-510.0f), converty (140.0f));
      glEnd();
      //buildin 1 window 3
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-630.0f),converty (170.0f));
      glVertex2f(convertx (-560.0f),converty  (170.0f));
      glVertex2f(convertx(-560.0f), converty (240.0f));
      glVertex2f(convertx(-630.0f), converty (240.0f));
      //building 1 window 4
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-510.0f),converty (170.0f));
      glVertex2f(convertx (-440.0f),converty  (170.0f));
      glVertex2f(convertx(-440.0f), converty (240.0f));
      glVertex2f(convertx(-510.0f), converty (240.0f));
      glEnd();
      //buildin 1 window 5
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-630.0f),converty (270.0f));
      glVertex2f(convertx (-560.0f),converty  (270.0f));
      glVertex2f(convertx(-560.0f), converty (340.0f));
      glVertex2f(convertx(-630.0f), converty (340.0f));
      glEnd();
      //building 1 window 6
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-510.0f),converty (270.0f));
      glVertex2f(convertx (-440.0f),converty  (270.0f));
      glVertex2f(convertx(-440.0f), converty (340.0f));
      glVertex2f(convertx(-510.0f), converty (340.0f));
      glEnd();
}
 glBegin(GL_QUADS);
      glColor3f(0.439f, 0.341f, 0.419f);
     glVertex2f(convertx (-1200.0f),converty (-450.0f));
      glVertex2f(convertx (1200.0f),converty  (-450.0f));
      glVertex2f(convertx(1200.0f), converty (-350.0f));
      glVertex2f(convertx(-1200.0f), converty (-350.0f));
      glEnd();
      //Building 3
glPushMatrix();
for(int i=0;i<=14;i++){
    for(int j=0;j<=b11;j++){
            if(i<=15 && j<=15){
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b9[i]), converty(b10[j]));
    glVertex2d(convertx(b9[i]+14.705),converty(b10[j]));
    glVertex2d(convertx(b9[i]+14.705),converty(b10[j]+21.176));
    glVertex2d(convertx(b9[i]),converty(b10[j]+21.176));
    glEnd();
            }
    }
}
if(w1==1)
{
    //buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1,1,1);
     glVertex2f(convertx (-90.0f),converty (70.0f));
      glVertex2f(convertx (-20.0f),converty  (70.0f));
      glVertex2f(convertx(-20.0f), converty (140.0f));
      glVertex2f(convertx(-90.0f), converty (140.0f));
      glEnd();
//building 1 window 2
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (30.0f),converty (70.0f));
      glVertex2f(convertx (100.0f),converty  (70.0f));
      glVertex2f(convertx(100.0f), converty (140.0f));
      glVertex2f(convertx(30.0f), converty (140.0f));
      glEnd();
      //buildin 1 window 3
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-90.0f),converty (170.0f));
      glVertex2f(convertx (-20.0f),converty  (170.0f));
      glVertex2f(convertx(-20.0f), converty (240.0f));
      glVertex2f(convertx(-90.0f), converty (240.0f));
      //building 1 window 4
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (30.0f),converty (170.0f));
      glVertex2f(convertx (100.0f),converty  (170.0f));
      glVertex2f(convertx(100.0f), converty (240.0f));
      glVertex2f(convertx(30.0f), converty (240.0f));
      glEnd();
      //buildin 1 window 5
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-90.0f),converty (270.0f));
      glVertex2f(convertx (-20.0f),converty  (270.0f));
      glVertex2f(convertx(-20.0f), converty (340.0f));
      glVertex2f(convertx(-90.0f), converty (340.0f));
      glEnd();
      //building 1 window 6
 glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (30.0f),converty (270.0f));
      glVertex2f(convertx (100.0f),converty  (270.0f));
      glVertex2f(convertx(100.0f), converty (340.0f));
      glVertex2f(convertx(30.0f), converty (340.0f));
      glEnd();

 glBegin(GL_QUADS);
      glColor3f(0.439f, 0.341f, 0.419f);
     glVertex2f(convertx (-1200.0f),converty (-450.0f));
      glVertex2f(convertx (1200.0f),converty  (-450.0f));
      glVertex2f(convertx(1200.0f), converty (-350.0f));
      glVertex2f(convertx(-1200.0f), converty (-350.0f));
      glEnd();
}
      //behind building
      glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b11;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.703f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b9[i]), converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]+17.50));
    glVertex2d(convertx(b9[i]),converty(b10[j]+17.50));
    glEnd();
            }
    }
}
      //behind
glPushMatrix();
//glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b14;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.703f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b9[i]), converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]+17.50));
    glVertex2d(convertx(b9[i]),converty(b10[j]+17.50));
    glEnd();
            }
    }
}
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b14;j++){
            if(i<=15 && j<=15){

    glColor3f(0.696f, 0.603f, 0.903f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b12[i]), converty(b13[j]));
    glVertex2d(convertx(b12[i]-8.294),converty(b13[j]));
    glVertex2d(convertx(b12[i]-8.294),converty(b13[j]+21.50));
    glVertex2d(convertx(b12[i]),converty(b13[j]+21.50));
    glEnd();
            }
    }
}
if(w2==1){
//buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-1068.0f),converty (70.0f));
      glVertex2f(convertx (-998.0f),converty  (70.0f));
      glVertex2f(convertx(-998.0f), converty (140.0f));
      glVertex2f(convertx(-1068.0f), converty (140.0f));
      glEnd();
      //buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1, 1,1);
     glVertex2f(convertx (-1068.0f),converty (170.0f));
      glVertex2f(convertx (-998.0f),converty  (170.0f));
      glVertex2f(convertx(-998.0f), converty (240.0f));
      glVertex2f(convertx(-1068.0f), converty (240.0f));
      glEnd();
      //buildin 1 window 1
         glBegin(GL_QUADS);
      glColor3f(1,1,1);
     glVertex2f(convertx (-1068.0f),converty (270.0f));
      glVertex2f(convertx (-998.0f),converty  (270.0f));
      glVertex2f(convertx(-998.0f), converty (340.0f));
      glVertex2f(convertx(-1068.0f), converty (340.0f));
      glEnd();
}
//behind
glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b17;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.703f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b9[i]), converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]));
    glVertex2d(convertx(b9[i]+5.294),converty(b10[j]+17.50));
    glVertex2d(convertx(b9[i]),converty(b10[j]+17.50));
    glEnd();
            }
    }
}


      //minhaz
      //Shop
glBegin(GL_QUADS);
       glColor3f(0.439f, 0.341f, 0.419f);
       glVertex2f(convertx (200.0f),converty (20.0f));
       glVertex2f(convertx (460.0f),converty (20.0f));
       glVertex2f(convertx(460.0f), converty (250.0f));
       glVertex2f(convertx(200.0f), converty (250.0f));
       glEnd();
       glBegin(GL_QUADS);

       glColor3f(0.721f, 0.615f, 0.698f);
       glVertex2f(convertx (200.0f),converty (20.0f));
       glVertex2f(convertx (400.0f),converty (20.0f));
       glVertex2f(convertx(400.0f), converty (100.0f));
       glVertex2f(convertx(200.0f), converty (100.0f));
       glEnd();
//trees3 2
      glBegin(GL_QUADS);
      glColor3f(0.839f, 0.258f, 0);
      glVertex2f(convertx (-300.0f),converty (5.0f));
      glVertex2f(convertx (-250.0f),converty  (5.0f));
      glVertex2f(convertx(-250.0f), converty (150.0f));
      glVertex2f(convertx(-300.0f), converty (150.0f));
   glEnd();

   //tree3 2
   glBegin(GL_POLYGON);
      glColor3f(0.098f, 0.439f, 0.019f);
      glVertex2f(convertx (-360.0f),converty (100.0f));
      glVertex2f(convertx (-190.0f),converty  (100.0f));
      glVertex2f(convertx(-275.0f), converty (380.0f));
      glEnd();
      glPushMatrix();
      glTranslatef(plane,0.0f,0.0f);
      //plane 1
      glBegin(GL_QUADS);
      glColor3f(0.047f, 0.4f, 0.811f);
      glVertex2f(convertx(0.0f), converty (550.0f));
      glVertex2f(convertx(300.0f), converty (550.0f));
      glVertex2f(convertx(250.0f),converty (600.0f));
      glVertex2f(convertx (100.0f),converty  (600.0f));
      glEnd();
      //plane part 2
 glBegin(GL_QUADS);
      glColor3f(1,1,1);
      glVertex2f(convertx(170.0f), converty (565.0f));
      glVertex2f(convertx(220.0f), converty (565.0f));
      glVertex2f(convertx(220.0f),converty (585.0f));
      glVertex2f(convertx (170.0f),converty  (585.0f));
      glEnd();

      //plane part 3

      glBegin(GL_POLYGON);
      glColor3f(1,1,1);
      glVertex2f(convertx(100.0f), converty (520.0f));
      glVertex2f(convertx(165.0f), converty (555.0f));
      glVertex2f(convertx(135.0f),converty (565.0f));

      glEnd();

      //plane part 4


      glBegin(GL_POLYGON);
      glColor3f(1,1,1);
      glVertex2f(convertx(120.0f), converty (590.0f));
      glVertex2f(convertx(140.0f), converty (600.0f));
      glVertex2f(convertx(80.0f),converty (640.0f));

      glEnd();

      //plane part 4

        glBegin(GL_POLYGON);
      glColor3f(1,1,1);
      glVertex2f(convertx(30.0f), converty (550.0f));
      glVertex2f(convertx(40.0f), converty (570.0f));
      glVertex2f(convertx(0.0f),converty (580.0f));

      glEnd();
      glPopMatrix();

}
//////
glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b20;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.603f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b21[i]), converty(b22[j]));
    glVertex2d(convertx(b21[i]+9.11),converty(b22[j]));
    glVertex2d(convertx(b21[i]+9.11),converty(b22[j]+16.47));
    glVertex2d(convertx(b21[i]),converty(b22[j]+16.47));
    glEnd();
            }
    }
}
glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b23;j++){
            if(i<=15 && j<=15){

    glColor3f(0.796f, 0.603f, 0.603f);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b24[i]), converty(b25[j]));
    glVertex2d(convertx(b24[i]+9.11),converty(b25[j]));
    glVertex2d(convertx(b24[i]+9.11),converty(b25[j]+16.47));
    glVertex2d(convertx(b24[i]),converty(b25[j]+16.47));
    glEnd();
            }
    }
}
glPushMatrix();
    for(int i=0;i<=14;i++){
    for(int j=0;j<=b26;j++){
            if(i<=15 && j<=15){

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2d(convertx(b27[i]), converty(b28[j]));
    glVertex2d(convertx(b27[i]+14.70),converty(b28[j]));
    glVertex2d(convertx(b27[i]+14.70),converty(b28[j]+10.58));
    glVertex2d(convertx(b27[i]),converty(b28[j]+10.58));
    glEnd();
            }
    }
}

   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 700);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Urbanization");
   glutDisplayFunc(display);
   init();
   x[0]=-1224.0f;
   y[0]=-303.0f;
   for(int ro=1;ro<101;ro++){
        x[ro]=x[ro-1]+24;
        y[ro]=y[ro-1]+3;
        g[ro]=g[ro-1]+3.5;
   }
      b1[0]=-934.706f;
   b2[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b1[ro]=b1[ro-1]+15.294;
        b2[ro]=b2[ro-1]+30;
   }
   b3[0]=-934.706f;
   b4[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b3[ro]=b3[ro-1]-2.941;
        b4[ro]=b4[ro-1]+30;
   }
   b6[0]=-645.295f;
   b7[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b6[ro]=b6[ro-1]+14.705;
        b7[ro]=b7[ro-1]+21.176;
   }
      b9[0]=-105.0f;
   b10[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b9[ro]=b9[ro-1]+14.705;
        b10[ro]=b10[ro-1]+21.176;
   }
   b12[0]=-973.0;
   b13[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b12[ro]=b12[ro-1]-8.294;
        b13[ro]=b13[ro-1]+21.50;
   }
   b15[0]=-973.0;
   b16[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b15[ro]=b15[ro-1]-8.294;
        b16[ro]=b16[ro-1]+21.50;
   }
   b21[0]=665.0;
   b22[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b21[ro]=b21[ro-1]+9.11;
        b22[ro]=b22[ro-1]+16.47;
   }
   b24[0]=780;
   b25[0]=20.0f;
   for(int ro=1;ro<17;ro++){
        b24[ro]=b24[ro-1]+10.0;
        b25[ro]=b25[ro-1]+16.47;
   }
   b27[0]=700;
   b28[0]=70.0f;
   for(int ro=1;ro<17;ro++){
        b27[ro]=b27[ro-1]+14.70;
        b28[ro]=b28[ro-1]+10.58;
   }
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}

