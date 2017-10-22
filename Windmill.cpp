#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#define PI 3.1415927

GLUquadricObj *Cylinder;
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
	    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}
float _angle = 0.0;
float _angle2 = 0.0;
float _angle3 = 0.0;
float _angle4 = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;
float _angle_2 = 90;
float i = 0.0f;
void sky(){
glPushMatrix();
glColor3f (0.0,0.0,0.3);
glTranslatef(-0.85,3.94,0.0);
glScalef(90.0,7.9,0.0);
glutSolidCube(.26);
glPopMatrix();
/**moon**/
glPushMatrix();
glTranslatef(-7.5, 3.6, 1.0);
glBegin(GL_POLYGON);
glColor3f(.89,0.89, 0.89);
glTranslatef(-7.5,8.0,0.0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/50;
float r=0.65;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
//transperent
glPopMatrix();
glPushMatrix();
glTranslatef(-7.5, 3.6, 1.0);
glBegin(GL_POLYGON);
glColor4f(1.0, 1.0, 1.,0.60);
glTranslatef(-7.5,8.0,0.0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/50;
float r=0.75;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glEnd();
glPopMatrix();
}
void cloud(){
/**************cloud1*********************/
                                                glScalef(4.5,4.5,4.5);
                                                glTranslatef(_angle,-2.5,0.0);
                                                glPushMatrix();
                                                glColor3f (.4, .7,.9);
                                                glTranslatef(-6.0,4.3,0.0);
                                                //glRotatef(_angle,0.0,0.0,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();

                                                glTranslatef(-4.5,4.3,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(-5.3,4.7,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(-5.3,3.9,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

/*********************************cloud 2*************************/
                                                glPushMatrix();
                                                glColor3f (.4, .7,.9);
                                                glTranslatef(-1.0,4.3,0.0);

                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                 glPushMatrix();
                                                glTranslatef(0.5,4.3,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(-0.25,4.7,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(-0.25,3.9,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

/*******************cloud 3************/

                                                glPushMatrix();
                                                glColor3f (.4, .7,.9);
                                                glTranslatef(4.5,4.3,0.0);
                                                //glRotatef(_angle,1.0,1.0,1.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                 glPushMatrix();
                                                glTranslatef(6.0,4.3,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(5.25,4.7,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();

                                                glPushMatrix();
                                                glTranslatef(5.25,3.9,0.0);
                                                glScalef (1.5, 0.9, 1.0);
                                                glutSolidSphere(.50,15,5);
                                                glPopMatrix();
}
void solarpanel(){
    /**h1 spanel**/
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.7,0.8,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.7,0.7);
   glTranslatef(2.2,0.9,0.0);
   glScalef (2.8, 1.7,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.25, 0.35, 0.0);
   glVertex3f(0.45, 0.35, 0.0);
   glVertex3f(0.35, 0.15, 0.0);
   glEnd();
    glPopMatrix();

   /**h2 sp**/
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(5.0,1.01,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glColor3f(0.7,0.7,0.7);
   glTranslatef(4.5,1.1,0.0);
   glScalef (2.8, 1.7,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.25, 0.35, 0.0);
   glVertex3f(0.45, 0.35, 0.0);
   glVertex3f(0.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();
   /**h3sp**/
   glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(7.0,0.82,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
   glColor3f(0.7,0.7,0.7);
   glTranslatef(6.5,0.9,0.0);
   glScalef (2.8, 1.7,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.25, 0.35, 0.0);
   glVertex3f(0.45, 0.35, 0.0);
   glVertex3f(0.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();
   /**h4sp***/
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(3.5,2.01,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glEnd();
    glPopMatrix();
    glPushMatrix();
 glColor3f(0.7,0.7,0.7);
   glTranslatef(3.0,2.1,0.0);
   glScalef (2.8, 1.7,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.25, 0.35, 0.0);
   glVertex3f(0.45, 0.35, 0.0);
   glVertex3f(0.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();



   /**h5sp**/
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(5.0,2.1,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
   glColor3f(0.7,0.7,0.7);
   glTranslatef(4.5,2.2,0.0);
   glScalef (2.8, 1.7,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.25, 0.35, 0.0);
   glVertex3f(0.45, 0.35, 0.0);
   glVertex3f(0.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();

   /**below terbine**/

   glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-4.9,-.52,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.50, 0.35, 0.0);
    glVertex3f(-0.15, 0.7, 0.0);
    glVertex3f(-.30, 0.35, 0.0);
    glVertex3f(0.07, 0.7, 0.0);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glVertex3f(0.55, 0.35, 0.0);
    glVertex3f(0.85, 0.7, 0.0);
    glVertex3f(0.75, 0.35, 0.0);
    glVertex3f(1.05, 0.7, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.7,0.7);
   glTranslatef(-4.0,-.5,0.0);
   glScalef (3.2, 2.0,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.05, 0.35, 0.0);
   glVertex3f(-0.5, 0.35, 0.0);
   glVertex3f(-0.45, 0.15, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-1.4,-.52,0.0);
    glBegin(GL_LINES);
    glVertex3f(-0.50, 0.35, 0.0);
    glVertex3f(-0.15, 0.7, 0.0);
    glVertex3f(-.30, 0.35, 0.0);
    glVertex3f(0.07, 0.7, 0.0);
    glVertex3f(-0.03, 0.35, 0.0);
    glVertex3f(0.27, 0.7, 0.0);
    glVertex3f(0.15, 0.35, 0.0);
    glVertex3f(0.45, 0.7, 0.0);
    glVertex3f(0.35, 0.35, 0.0);
    glVertex3f(0.65, 0.7, 0.0);
    glVertex3f(0.55, 0.35, 0.0);
    glVertex3f(0.85, 0.7, 0.0);
    glVertex3f(0.75, 0.35, 0.0);
    glVertex3f(1.05, 0.7, 0.0);
    glEnd();
    glPopMatrix();

   glPushMatrix();
    glColor3f(0.7,0.7,0.7);
   glTranslatef(-.5,-.5,0.0);
   glScalef (3.2, 2.0,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.05, 0.35, 0.0);
   glVertex3f(-0.5, 0.35, 0.0);
   glVertex3f(-0.45, 0.15, 0.0);
   glEnd();
   glPopMatrix();
   /** line**/
   glPushMatrix();
   glColor3f(0.0,0.0,0.0);
    glTranslatef(-1.0,0.8,0.0);
    glScalef(0.1,8.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();
    glPushMatrix();
   glColor3f(0.0,0.0,0.0);
    glTranslatef(-4.0,0.5,0.0);
    glScalef(0.1,2.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
   glColor3f(0.0,0.0,0.0);
    glTranslatef(-4.9,-0.0,0.0);
    glScalef(35.0,0.1,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
   glColor3f(0.0,0.0,0.0);
    glTranslatef(-3.0,2.2,0.0);
    glScalef(28.0,0.1,0.0);
    glutSolidCube(.25);
    glPopMatrix();



}
void house(){
    /*************************house 1 **********/
    glColor3f(0.1,0.0,0.0);
    glPushMatrix();
    glTranslatef(1.7,0.8,0.0);
   glScalef (2.5, 1.9,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.45, 0.0);
   glVertex3f(0.75, 0.45, 0.0);
   glVertex3f(0.95, 0.15, 0.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(3.1,0.7,0.0);
    glScalef (1.9, 1.4,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.8,.8,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.3,.8,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(.2,0.8,0.6);
    glTranslatef(3.05,.8,0.0);
    glScalef (4.9, 1.4,0.0);
    glutSolidCube(.40);
    glPopMatrix();

    /**************************house 2 *****************************/
    glColor3f(0.1,0.0,0.0);
   glPushMatrix();
   glTranslatef(4.0,1.0,0.0);
   glScalef (2.5, 1.9,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.45, 0.0);
   glVertex3f(0.75, 0.45, 0.0);
   glVertex3f(0.95, 0.15, 0.0);
   glEnd();
   glPopMatrix();
    glPushMatrix();
    glTranslatef(4.7,.98,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.1,.98,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(5.4,.80,0.0);
    glScalef (2.0, 2.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.8,0.8,0.9);
    glTranslatef(5.36,0.92,0.0);
    glScalef (4.9, 1.9,0.0);
    glutSolidCube(.40);
    glPopMatrix();

    /***********************house 3*********************/
    glColor3f(0.1,0.0,0.0);
   glPushMatrix();
   glTranslatef(6.0,0.8,0.0);
   glScalef (2.5, 1.9,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.45, 0.0);
   glVertex3f(0.75, 0.45, 0.0);
   glVertex3f(0.95, 0.15, 0.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(7.4,.7,0.0);
    glScalef (2.0, 2.0,0.0);
    glutSolidCube(.20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.7,0.8,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.0,0.8,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();


    glPushMatrix();
    glColor3f(.8,.3,0.2);
    glTranslatef(7.37,0.8,0.0);
    glScalef (4.9, 1.5,0.0);
    glutSolidCube(.40);
    glPopMatrix();

    /****************house 4 ********************/
    glColor3f(0.1,0.0,0.0);
   glPushMatrix();
   glTranslatef(2.5,2.0,0.0);
   glScalef (2.5, 1.9,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.45, 0.0);
   glVertex3f(0.75, 0.45, 0.0);
   glVertex3f(0.95, 0.15, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslatef(3.9,1.79,0.0);
    glScalef (2.0, 2.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

   glPushMatrix();
    glTranslatef(3.2,1.99,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

   glPushMatrix();
    glTranslatef(4.5,1.99,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(.8,0.8,0.9);
    glTranslatef(3.88,1.92,0.0);
    glScalef (4.9, 1.9,0.0);
    glutSolidCube(.40);
    glPopMatrix();
    /*************house 5 *************/
    glColor3f(0.1,0.0,0.0);
   glPushMatrix();
   glTranslatef(4.0,2.0,0.0);
   glScalef (2.5, 1.9,0.0);
   glBegin(GL_QUADS);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.45, 0.0);
   glVertex3f(0.75, 0.45, 0.0);
   glVertex3f(0.95, 0.15, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslatef(5.0,1.99,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5.55,1.79,0.0);
    glScalef (2.0, 2.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(6.1,1.99,0.0);
    glScalef (1.0, 1.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(.8,0.8,0.6);
    glTranslatef(5.36,1.92,0.0);
    glScalef (4.9, 1.9,0.0);
    glutSolidCube(.40);
    glPopMatrix();
}
void powerhouse(){

    glPushMatrix();
    glColor3f(0.1,0.0,0.0);
    glTranslatef(-10.2,0.87,0.0);
    glScalef (9.0, 4.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.15, 0.15, 0.0);
    glVertex3f(0.30, 0.35, 0.0);
    glVertex3f(0.45, 0.15, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.4,0.0,0.7);
    glTranslatef(-7.5,0.50,0.0);
    glScalef (2.0, 3.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.5,.35,.05);
    glTranslatef(-7.5,0.80,0.0);
    glScalef (5.0, 3.0,0.0);
    glutSolidCube(.45);
    glPopMatrix();
}
void stand(){
    glPushMatrix();
    glColor3f(0.502, 0.502, 0.502);
    glTranslatef(-9.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(9.0,-.76,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.3,-0.4,0.0);
    glScalef(80.0,0.1,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.3,-0.56,0.0);
    glScalef(80.0,0.1,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-9.25,0.7,0.0);
    glScalef(.1,10.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-8.79,1.8,0.0);
    glScalef(3.78,0.1,0.0);
    glutSolidCube(.25);
    glPopMatrix();
}
void tree(){
    /***********tree 1*****************************/
    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(7.75,2.9,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.9,2.6,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.6,2.6,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(7.50,2.2,0.0);
    glutSolidSphere(.35,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(8.0,2.2,0.0);
    glutSolidSphere(.35,20,5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.6,0.0);
    glTranslatef(7.8,1.5,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    /****************** tree 2 ******************/
     glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(2.0,2.9,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.15,2.6,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.85,2.6,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(1.75,2.2,0.0);
    glutSolidSphere(.35,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(2.25,2.2,0.0);
    glutSolidSphere(.35,20,5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.7,0.6,0.0);
    glTranslatef(2.0,1.5,0.0);
    glScalef(0.8,4.0,0.0);
    glutSolidCube(.25);
    glPopMatrix();
}
void screen(){
glPushMatrix();
glColor3f(0.0,0.1,0.0);
glTranslatef(-0.85,.84,0.0);
glScalef(40.0,7.0,0.0);
glutSolidCube(.60);
glPopMatrix();
}
void car(){
/************************************************car1***************************************/
    glPushMatrix();
   glColor3f(0.7,0.7,0.0);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(.9,-3.5,0.0);
   glScalef (2.5, 1.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.35, 0.65, 0.0);
   glVertex3f(1.15, 0.65, 0.0);
   glVertex3f(1.35, 0.45, 0.0);
   glVertex3f(1.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();
   //HEADLIGHT
    glPushMatrix();
   glColor3f(1.0,1.0,0.0);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(0.9,-4.3,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.20, 0.35, 0.0);
   glVertex3f(0.15, 0.35, 0.0);
   glVertex3f(0.27, 0.45, 0.0);
   glVertex3f(0.33, 0.45, 0.0);
   glEnd();
   glPopMatrix();
   // transparent
    glPushMatrix();
   glColor4f(1.0, 1.5, 0.0,0.60);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(0.3,-4.1,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.20, 0.29, 0.0);
   glVertex3f(0.12, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();
    glPushMatrix();
  glColor4f(1.0, 1.5, 0.0,0.60);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(0.6,-3.8,0.0);
   glScalef (2.5, 3.0,0.0);
  glColor4f(1.0, 1.0, 0.0,0.0);
   glBegin(GL_POLYGON);
   glColor4f(1.0, 1.0, 0.0,0.60);
   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.20, 0.29, 0.0);
   glVertex3f(0.12, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle4,0.0,0.0);
   glColor3f(1.0,0.0,0.0);
   glTranslatef(1.1,-3.66,0.0);
   glScalef (2.3, 1.4,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.45, 0.60, 0.0);
   glVertex3f(0.65, 0.75, 0.0);
   glVertex3f(.75, 0.75, 0.0);
   glVertex3f(0.75, 0.60, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle4,0.0,0.0);
   glColor3f(1.0,0.0,0.0);
   glTranslatef(.8,-3.66,0.0);
   glScalef (2.4, 1.4,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.90, 0.60, 0.0);
   glVertex3f(0.90, 0.75, 0.0);
   glVertex3f(1.05, 0.75, 0.0);
   glVertex3f(1.15, 0.60, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle4,0.0,0.0);
   glColor3f(1.0,1.0,0.0);
   glTranslatef(0.9,-3.76,0.0);
   glScalef (2.5, 1.4,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.45, 0.65, 0.0);
   glVertex3f(0.65, 0.85, 0.0);
   glVertex3f(1.0, 0.85, 0.0);
   glVertex3f(1.15, 0.65, 0.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,-3.3,0.0);
    glutSolidSphere(.2,20,5);
    glPopMatrix();

    glPushMatrix();
   glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(3.3,-3.3,0.0);
    glutSolidSphere(.2,20,5);
    glPopMatrix();
    /*******************************************************car 2 ******************************************/
    glPushMatrix();
   glColor3f(0.0,0.0,1.0);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(1.0,-2.3,0.0);
   glScalef (2.5, 1.0,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.15, 0.15, 0.0);
   glVertex3f(0.15, 0.45, 0.0);
   glVertex3f(0.35, 0.65, 0.0);
   glVertex3f(1.15, 0.65, 0.0);
   glVertex3f(1.35, 0.15, 0.0);
   glEnd();
   glPopMatrix();

         //HEADLIGHT

       glPushMatrix();
   glColor3f(1.0,1.0,1.0);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(3.9,-3.1,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.20, 0.35, 0.0);
   glVertex3f(0.07, 0.35, 0.0);
   glVertex3f(0.07, 0.42, 0.0);
   glVertex3f(0.12, 0.42, 0.0);
   glEnd();
   glPopMatrix();

   // transparent

    glPushMatrix();
 glColor4f(1.0, 1.0, 1.0,0.60);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(4.8,-3.0,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.15, 0.29, 0.0);
   glVertex3f(0.08, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();

       glPushMatrix();
 glColor4f(1.0, 1.0, 1.0,0.60);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(4.75,-2.7,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.15, 0.29, 0.0);
   glVertex3f(0.08, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle3,0.0,0.0);
   glColor3f(0.0,1.0,0.0);
   glTranslatef(1.1,-2.65,0.0);
   glScalef (2.4, 1.4,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.35, 0.65, 0.0);
   glVertex3f(0.55, 0.85, 0.0);
   glVertex3f(.65, 0.85, 0.0);
   glVertex3f(0.65, 0.65, 0.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
  glTranslatef(_angle3,0.0,0.0);
   glColor3f(0.0,1.0,0.0);
   glTranslatef(0.8,-2.65,0.0);
   glScalef (2.4, 1.4,0.0);
   glBegin(GL_POLYGON);
   glVertex3f(0.85, 0.65, 0.0);
   glVertex3f(0.85, 0.85, 0.0);
   glVertex3f(0.95, 0.85, 0.0);
   glVertex3f(1.15, 0.65, 0.0);

   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle3,0.0,0.0);
   glColor3f(0.0,0.0,1.0);
   glTranslatef(1.0,-2.56,0.0);
   glScalef (2.5, 1.4,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.35, 0.65, 0.0);
   glVertex3f(0.55, 0.85, 0.0);
   glVertex3f(.85, 0.85, 0.0);
   glVertex3f(1.0, 0.65, 0.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(2.2,-2.1,0.0);
   glRotatef(_angle,0.0,1.0,0.0);
    glutSolidSphere(.26,20,5);
    glPopMatrix();

    glPushMatrix();
   glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(3.3,-2.1,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidSphere(.26,20,5);
    glPopMatrix();
    /************************************************ car 3 *******************/
   glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslatef(_angle3,0.0,0.0);
    glTranslatef(-2.7,-1.7,0.0);
   glScalef(1.0,1.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-3.15,-1.7,0.0);
   glScalef(1.0,1.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-3.6,-1.7,0.0);
   glScalef(1.0,1.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();

    glPushMatrix();
   glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-4.05,-1.7,0.0);
   glScalef(1.0,1.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-4.5,-1.7,0.0);
   glScalef(1.0,1.2,0.0);
    glutSolidCube(.25);
    glPopMatrix();

   glPushMatrix();
   glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,1.0,0.0);
    glTranslatef(-3.6,-1.8,0.0);
   glScalef(5.0,1.2,0.0);
    glutSolidCube(.45);
    glPopMatrix();

	glPushMatrix();
	glTranslatef(_angle3,0.0,0.0);
    glColor3f(1.0,0.0,.0);
    glTranslatef(-3.6,-1.8,0.0);
     glScalef(5.0,1.2,0.0);
    glutSolidCube(.60); //(GLdouble size)
    glPopMatrix();

        //HEADLIGHT

       glPushMatrix();
   glColor3f(1.0,1.0,0.0);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(-2.5,-3.1,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.20, 0.35, 0.0);
   glVertex3f(0.15, 0.35, 0.0);
   glVertex3f(0.15, 0.42, 0.0);
   glVertex3f(0.20, 0.42, 0.0);
   glEnd();
   glPopMatrix();

   // transparent

    glPushMatrix();
 glColor4f(1.0, 1.0, 0.0,0.60);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(-1.6,-2.8,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.15, 0.29, 0.0);
   glVertex3f(0.08, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();

       glPushMatrix();
 glColor4f(1.0, 1.0, 0.0,0.60);
   glTranslatef(_angle3,0.0,0.0);
   glTranslatef(-1.7,-3.1,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.15, 0.29, 0.0);
   glVertex3f(0.08, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-4.2,-2.1,0.0);
    glutSolidSphere(.26,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle3,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-3.0,-2.1,0.0);
    glutSolidSphere(.26,20,5);
    glPopMatrix();
    /** ****************** car 4 *************************/
     glPushMatrix();
     glTranslatef(_angle4,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glScalef (1.6, 1.,0.0);
    glTranslatef(-2.7,-2.9,0.0);
    glutSolidCube(.25); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0,0,0);
    glScalef (1.6, 1.,0.0);
    glTranslatef(-2.7,-2.9,0.0);
    glutSolidCube(.35); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(1.0,0.50,.50);
    glScalef (1.7, 1.,0.0);
    glTranslatef(-2.5,-2.9,0.0);
    glutSolidCube(.55); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0,0,0);
    glScalef (1.7, 1.,0.0);
    glTranslatef(-2.5,-2.9,0.0);
    glutSolidCube(.60); //(GLdouble size)
    glPopMatrix();

    //HEADLIGHT

       glPushMatrix();
   glColor3f(1.0,1.0,1.0);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(-5.2,-4.15,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.20, 0.35, 0.0);
   glVertex3f(0.15, 0.35, 0.0);
   glVertex3f(0.15, 0.42, 0.0);
   glVertex3f(0.20, 0.42, 0.0);
   glEnd();
   glPopMatrix();

   // transparent

    glPushMatrix();
 glColor4f(1.0, 1.0, 1.0,0.60);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(-6.0,-4.1,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.20, 0.29, 0.0);
   glVertex3f(0.12, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
 glColor4f(1.0, 1.0, 1.0,0.60);
   glTranslatef(_angle4,0.0,0.0);
   glTranslatef(-5.7,-3.8,0.0);
   glScalef (2.5, 3.0,0.0);
   glBegin(GL_POLYGON);

   glVertex3f(0.10, 0.25, 0.0);
   glVertex3f(0.20, 0.29, 0.0);
   glVertex3f(0.12, 0.29, 0.0);
   glVertex3f(0.02, 0.25, 0.0);
   glEnd();
   glPopMatrix();


     glPushMatrix();
     glTranslatef(_angle4,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glScalef (2.0, .8,0.0);
    glTranslatef(-1.7,-3.68,0.0);
    glutSolidCube(.15); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glScalef (2.0, .8,0.0);
    glTranslatef(-1.5,-3.68,0.0);
    glutSolidCube(.15); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glScalef (2.0, .8,0.0);
    glTranslatef(-1.6,-3.68,0.0);
    glutSolidCube(.40); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(1.0,0.50,.50);
    glScalef (2.0, 0.8,0.0);
    glTranslatef(-1.6,-3.68,0.0);
    glutSolidCube(.55); //(GLdouble size)
    glPopMatrix();
/**wheel car 4**/
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-3.1,-3.3,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-3.7,-3.3,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(_angle4,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-4.4,-3.3,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    }
void design(){
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(7.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    /***design 2**/
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(4.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();
    /**design 3**/
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(1.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();
    /**design 4**/
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(-1.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    /**design 5**/
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(-4.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();
    /**design 6**/
    glPushMatrix();
    glColor3f(0.0,.2,0.0);
    glTranslatef(-7.75,-3.7,0.0);
    glutSolidSphere(.20,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7.9,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7.6,-4.0,0.0);
    glutSolidSphere(.30,20,5);
    glPopMatrix();
}
void devider (){
      //*******************************************************devider*************************************
    glPushMatrix();
   glColor3f(0.502, 0.502, 0.502);
    glTranslatef(-10.0,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.9,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.9,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();

     glPushMatrix();
    glTranslatef(-0.9,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();

     glPushMatrix();
    glTranslatef(2.1,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();

     glPushMatrix();
    glTranslatef(5.1,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();
    glPushMatrix();
    glTranslatef(8.1,-2.5,0.0);
    //glRotatef(_angle,0.0,1.0,0.0);
    glScalef(3.0,0.2,0.0);
    glutSolidCube(.50); //(GLdouble size)
    glPopMatrix();
}
void turbine (){
     glColor3f(0.0,0.2,0.2);
    /* GLfloat white_light[] = { 0.0, 0.0, 1.0, 0.0 };
   glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
    GLfloat light_position[] = { 1.0, 1.0, 0.0, 0.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);*/
   	glScalef(0.2,0.2,0.2);

    glTranslatef(-10.0,12.0,0);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,20,20);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

    // glRotatef(_angle2,0.0,0,0);
  	glPushMatrix();
  	  glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.3,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	  glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.3,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//turbine 2
   	glColor3f(0.0,0.2,0.2);
   	//glScalef(0.2,0.2,0.2);

    glTranslatef(-10.0,0.0,0);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

    //glRotatef(_angle2,0.0,0,0);
  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.4,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.6,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.6,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.6,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//turbine 6
   glColor3f(0.0,0.2,0.2);
   	//glScalef(0.2,0.2,0.2);

    glTranslatef(-10.0,0.0,0);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

   // glRotatef(_angle2,0.0,0,0);
  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.6,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.8,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.8,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.8,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//turbine 3

   	glColor3f(0.0,0.2,0.2);

    glTranslatef(5.0,1.0,0);
    glScalef(0.5,0.5,0.5);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

    //glRotatef(_angle2,0.0,0,0);
  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.4,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.6,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.6,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.6,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	// turbine 4

   	 	glColor3f(0.0,0.2,0.2);

    glTranslatef(-15.0,0.0,0);
    //glScalef(0.5,0.5,0.5);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.8,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.9,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.9,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.9,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//Terbine 5

   	 	glColor3f(0.0,0.2,0.2);

    glTranslatef(35.0,0.0,0);
    //glScalef(0.5,0.5,0.5);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

  	glPushMatrix();
  	glColor3f(0.0,0.0,.4);
   	glTranslatef(0.3,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.3,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//terbine 7
   	 	glColor3f(0.0,0.2,0.2);

    glTranslatef(20.0,0.0,0);
    //glScalef(0.5,0.5,0.5);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.3,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.3,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();

   	//terbine 8

   	glColor3f(0.0,0.2,0.2);

    glTranslatef(15.0,0.0,0);
    //glScalef(0.5,0.5,0.5);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.3,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.3,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.3,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();


    //turbine 9
    	glColor3f(0.0,0.2,0.2);

    glTranslatef(-5.0,-2.5,0);
    glScalef(2.0,2.0,2.0);
   	glPushMatrix();
   	glRotatef(90.0,1.0,0.0,0.0);
  	// glTranslatef(-10.0,-5.0,-2.0);
   	gluCylinder(Cylinder,.3,.9,8,10,10);
   	glPopMatrix();
   	glPopMatrix();
   	glRotatef(0.0, 0.0, 0.0, 1.0);

  	glPushMatrix();
  	glColor3f(0.0,0.0,0.4);
   	glTranslatef(0.2,0.0,1.5);
   	glutSolidCone(0.8,0.8,10,10);
   	glPopMatrix();
   	glPushMatrix();		//blade 1
   	glColor3f(0.310,.310, 0.310);
  	 glTranslatef(0.2,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
  	 glPushMatrix();
   	glRotatef(120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
   	glPopMatrix();
   	glPushMatrix();		//blade 2
   	glTranslatef(0.2,0.0,2.2);
   	glRotatef(90.0,1.0,0.0,0.0);
   	glRotatef(_angle2,0.0,1.0,0.0);
   	glPushMatrix();
   	glRotatef(-120,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();
  	 glPopMatrix();
  	 glPushMatrix();		 //blade 3
   	glTranslatef(0.2,0.0,2.2);
  	 glRotatef(90.0,1.0,0.0,0.0);
  	 glRotatef(_angle2,0.0,1.0,0.0);
   	glutSolidCone(0.5, 5.0, 10, 10);
   	glPopMatrix();


}
void road(){
	glPushMatrix();
    glColor3f(0.0,0.1,0.1);
    glTranslatef(-2.5,-2.4,0.0);
    glRotatef( 0.0,0.0, 0.0, -1.0);
    glScalef(50.0,4.55,0.0);
    glutSolidCube(.50);
    glPopMatrix();
/******************************** below road*******************************************/
    glPushMatrix();
    glColor3f(0.133, 0.545, 0.133);
    glTranslatef(-2.5,-4.3,0.0);
    glScalef(50.0,3.0,0.0);
    glutSolidCube(.50);
    glPopMatrix();
}
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Cylinder = gluNewQuadric();
    gluQuadricNormals( Cylinder, GLU_SMOOTH);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -12.0);

	sky();
    solarpanel();
	house();
	tree();
	powerhouse();
	stand();
    screen();
    devider();
    car();
    design();
    road();
	turbine();
	cloud();


	glutSwapBuffers();
}
void update(int value) {
	_angle += 0.05f;
	if (_angle > 10) {
		_angle =- 10;
	}
	_angle2 += 2.f;
	if (_angle2 > 360) {
		_angle2 += 360;
	}
	_angle3 += 0.09f;
	if (_angle3 > 15) {
		_angle3 =- 15;
	}
	_angle4 -= 0.09f;
	if (_angle4 <- 15) {
		_angle4 =+ 15;
	}

	glutPostRedisplay();


	glutTimerFunc(30, update, 0);
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1000,600);

	//Create the window
	glutCreateWindow("Windmill");
	initRendering();

	//Set handler functions
	//init();
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutTimerFunc(30, update, 0); //Add a timer
    //init();
	glutMainLoop();
	return 0;
}

