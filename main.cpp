/*
=============================================================
Central Shaheed Minar of Bangladesh using openGL/C++        =
=============================================================
Md. Shahriar Karim Shawon                                   =
Department of Computer Science & Engineering,               =
Daffodil International University                           =
visit my portfolio : shawon9324.github.io                   =
email me: shawon9324@gmail.com                              =
=============================================================
@29August-2020
*/

#include <windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

float cx = 0.0f, cz = -1.0f;
float X = -0.1f, Y = -0.1f, Z = -0.1f;
float x = 0.0f, z = 5.0f;
float rot = 1.14;
int status;
float trX = 0, trY = 0, trZ = 0;
void drawWalls()
{

    ///left Wall
    glColor3ub(51, 204, 255);
    glPushMatrix();
    glTranslated(-5.4, 2.6, 2.2);
    glScaled(0.2, 5, 10);
    glutSolidCube(1);
    glPopMatrix();
    ///right Wall
    glColor3ub(51, 204, 255);
    glPushMatrix();
    glTranslated(5.4, 2.6, 2.2);
    glScaled(0.2, 5, 10);
    glutSolidCube(1);
    glPopMatrix();
    ///backward Wall
    glColor3ub(51, 204, 255);
    glPushMatrix();
    glTranslated(0, 2.6, -2.7);
    glScaled(11, 5, 0.2);
    glutSolidCube(1);
    glPopMatrix();
    ///forward Wall
    glColor3ub(51, 204, 255);
    glPushMatrix();
    glTranslated(0, 2.6, 7.2);
    glScaled(11, 5, 0.2);
    glutSolidCube(1);
    glPopMatrix();
}
void drawShohidMinar()
{
    ///full ground green
    glColor3d(0, .45, 0);
    glPushMatrix();
    glTranslated(0, 1.55, 0);
    glScaled(50, 0.03, 50);
    glutSolidCube(1);
    glPopMatrix();

    ///deep green ground  3 right
    glColor3d(0, 0.32, 0);
    glPushMatrix();
    glTranslated(2.2, 1.55, 1.3);
    glScaled(1, 0.038, 5.9);
    glutSolidCube(1);
    glPopMatrix();
    ///deep green ground 1 left
    glColor3d(0, 0.32, 0);
    glPushMatrix();
    glTranslated(-2.2, 1.55, 1.3);
    glScaled(1, 0.038, 5.9);
    glutSolidCube(1);
    glPopMatrix();

    ///deep green ground center
    glColor3d(0, 0.32, 0);
    glPushMatrix();
    glTranslated(0, 1.55, 1.3);
    glScaled(2.1, 0.038, 5.9);
    glutSolidCube(1);
    glPopMatrix();

    ///red surface
    glColor3d(0.7, 0, 0);
    glPushMatrix();
    glTranslated(0, 1.55, 0);
    glScaled(2, 0.08, 1.5);
    glutSolidCube(1);
    glPopMatrix();

    ///white surface
    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(0, 1.6, 0);
    glScaled(1.9, 0.05, 1.4);
    glutSolidCube(1);
    glPopMatrix();

    ///Main DARK RED surface
    glColor3d(0.5, 0, 0);
    glPushMatrix();
    glTranslated(0, 1.65, 0);
    glScaled(1.8, 0.05, 1.3);
    glutSolidCube(1);
    glPopMatrix();

    /// MID 3 PILLER's SMALL SURFACE
    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(0, 1.68, -0.4);
    glScaled(0.5, 0.02, 0.08);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    /// MID PILLER
    glPushMatrix();
    glTranslated(0, 1.99, -0.4);
    glScaled(0.06, 0.7, 0.04);
    glutSolidCube(1);
    glPopMatrix();
    ///MID PILLER  ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(0.07, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.15, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    ///MID PILLER  ROD LEFT BOTTOM 3
    glPushMatrix();
    glTranslated(-0.22, 0, 0);
    glPushMatrix();
    glTranslated(0.07, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.15, 1.99, -0.4);
    glScaled(0.003, 0.7, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();
    ///MID PILLER  ROD UP
    glPushMatrix();
    glTranslated(2.2, 0, -0.1);
    glScaled(4.2, 1, 1);
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.85, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.02, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.18, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPopMatrix();
    glColor3d(1, 0, 0);

    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(-0.22, 1.99, -0.4);
    glScaled(0.06, 0.7, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.22, 1.99, -0.4);
    glScaled(0.06, 0.7, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    /// UP 3 PILLER
    glPushMatrix();
    glTranslated(0, 0.743, -1.424);
    glRotated(45, 1, 0, 0); //45degree angle
    glPushMatrix();
    glTranslated(0, 1.99, -0.4);
    glScaled(0.06, 0.3, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.22, 1.99, -0.4);
    glScaled(0.06, 0.3, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.22, 1.99, -0.4);
    glScaled(0.06, 0.3, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0, 2.15, -0.4);
    glScaled(0.5, 0.04, 0.04);
    glutSolidCube(1);
    glPopMatrix();

    /// UP 3 PILLER's ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(0.07, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.15, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.22, 0, 0);
    glPushMatrix();
    glTranslated(0.07, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.15, 1.99, -0.4);
    glScaled(0.003, 0.277, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();

    ///UP Horizontal OR
    glPushMatrix();
    glTranslated(2.2, 0, -0.1);
    glScaled(4.2, 1, 1);
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.85, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.528, 2, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.528, 2.15, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPopMatrix();

    glPopMatrix();

    ///MAIN PILLER LEFT
    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(0.1, 0, -0.4);
    glRotated(45, 0, 1, 0);

    glPushMatrix();
    glTranslated(-0.605, 1.94, -0.3);
    glScaled(0.045, 0.65, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.45, 1.94, -0.3);
    glScaled(0.045, 0.65, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.258, -0.3);
    glScaled(0.199, 0.04, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.68, -0.3);
    glScaled(0.199, 0.02, 0.06);
    glutSolidCube(1);
    glPopMatrix();

    ///MAIN PILLER LEFT ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.64, -0.05, 0.1);
    glScaled(1, 1.02, 1);
    glPushMatrix();
    glTranslated(0.078, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.145, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();

    glColor3d(1, 1, 1);
    ///MAIN PILLER LEFT Horizontal  ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.85, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.528, 2.15, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPopMatrix();

    ///MAIN PILLER LEFT 2
    glPushMatrix();
    glTranslated(0.65, 0, 0.3);
    glRotated(-45, 0, 1, 0);

    glPushMatrix();
    glTranslated(-0.605, 1.94, -0.3);
    glScaled(0.045, 0.65, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.45, 1.94, -0.3);
    glScaled(0.045, 0.65, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.258, -0.3);
    glScaled(0.199, 0.04, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.68, -0.3);
    glScaled(0.199, 0.02, 0.06);
    glutSolidCube(1);
    glPopMatrix();

    ///MAIN PILLER LEFT 2 ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.64, -0.05, 0.1);
    glScaled(1, 1.02, 1);
    glPushMatrix();
    glTranslated(0.078, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.145, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();
    glColor3d(1, 1, 1);

    ///MAIN PILLER LEFT 2 H-ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.85, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.15, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);

    glPopMatrix();

    glPushMatrix();
    ///MAIN SMALL PILLER LEFT 1
    glTranslated(0.06, 0, 0.14);
    glPushMatrix();
    glTranslated(-0.2, 0, -0.31);
    glRotated(45, 0, 1, 0);
    glPushMatrix();
    glTranslated(-0.605, 1.88, -0.3);
    glScaled(0.045, 0.4, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.45, 1.88, -0.3);
    glScaled(0.045, 0.4, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.08, -0.3);
    glScaled(0.2, 0.04, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.68, -0.3);
    glScaled(0.199, 0.02, 0.06);
    glutSolidCube(1);
    glPopMatrix();

    ///MAIN SMALL PILLER LEFT 1 ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.641, 0.43, 0.1);
    glScaled(1, 0.73, 1);
    glPushMatrix();
    glTranslated(0.078, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.145, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();

    ///MAIN SMALL PILLER LEFT 1 H-ROD
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.8, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.96, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);

    glPopMatrix();

    ///MAIN SMALL PILLER LEFT 2
    glPushMatrix();
    glTranslated(0.83, 0, 0.39);
    glRotated(-45, 0, 1, 0);

    glPushMatrix();
    glTranslated(-0.605, 1.88, -0.3);
    glScaled(0.045, 0.4, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.45, 1.88, -0.3);
    glScaled(0.045, 0.4, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 2.1, -0.3);
    glScaled(0.199, 0.04, 0.03);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.68, -0.3);
    glScaled(0.199, 0.02, 0.06);
    glutSolidCube(1);
    glPopMatrix();

    ///MAIN SMALL PILLER LEFT 2 Horizontal rod
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.528, 1.8, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-0.528, 1.96, -0.3);
    glScaled(0.1, 0.003, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glColor3d(0, 0, 0);
    glPushMatrix();
    glTranslated(-0.641, 0.43, 0.1);
    glScaled(1, 0.73, 1);
    glPushMatrix();
    glTranslated(0.078, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.11, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.145, 1.99, -0.4);
    glScaled(0.003, 0.56, 0.003);
    glutSolidCube(1);
    glPopMatrix();
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPopMatrix();
    glPopMatrix();

    ///RED Circle
    glColor3d(1, 0, 0);
    glPushMatrix();
    glTranslated(0, 2.1, -0.44);
    glScaled(0.35, 0.35, 0.01);
    glutSolidSphere(1, 50, 50);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(-0.18, 1.9, -0.45);
    glScaled(0.01, 0.5, 0.01);
    glutSolidCube(1);
    glPopMatrix();
    glColor3d(1, 1, 1);
    glPushMatrix();
    glTranslated(0.18, 1.9, -0.45);
    glScaled(0.01, 0.5, 0.01);
    glutSolidCube(1);
    glPopMatrix();
}

void draw()
{
    /// WALLS
    glPushMatrix();
    glScaled(1.2, 0.8, 1.2);
    drawWalls();
    glPopMatrix();
    /// MINAR
    glPushMatrix();
    glScaled(2, 2, 2);
    drawShohidMinar();
    glPopMatrix();
}

static void resize(int w, int h)
{
    float ratio = 1.78;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, w, h);
    gluPerspective(100.0f, ratio, 0.5f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(x, 1.0f, z, //CAMERA
              x + cx, 1.0f, z + cz,
              0.0f, 1.0f, 0.0f);

    glPushMatrix();
    glTranslated(trX, -1.45 + trY, trZ);
    glRotated(30, 1, 0, 0);
    if (status > 1)
    {
        const double r = glutGet(GLUT_ELAPSED_TIME) / 100.0;
        glRotated(-r, 0, 1, 0);
    }
    else if (status < 1)
    {
        glRotated(0, 0, 1, 0);
    }
    glRotated(+rot, 0, 1, 0);
    glScaled(1.15 + X, 1.15 + Y, 1.15 + Z);
    draw();
    glPopMatrix();
    glutSwapBuffers();
}

static void key(unsigned char key, int x, int y)
{
    float factor_zomm = 0.02f;
    float transform_factor = .1f;
    float rotation = 1.5f;
    switch (key)
    {

    case 27:
        status = -1;
        break;
    case 'o': //zoom out
        X -= factor_zomm;
        Y -= factor_zomm;
        Z -= factor_zomm;
        break;
    case 'i': //zoom in
        X += factor_zomm;
        Y += factor_zomm;
        Z += factor_zomm;
        break;
    case 'q': //up
        trY += transform_factor;
        break;
    case 'e': //down
        trY -= transform_factor;
        break;
    case 'r': //auto rotate
        status = 10;
        break;
    case 'd': //right
        trX -= transform_factor;
        break;
    case 'a': //left
        trX += transform_factor;
        break;
    case 'k': //rotate
        rot += rotation;
        break;
    case 'l': //rotate
        rot -= rotation;
        break;
    case 'w': //forward
        trY -= transform_factor;
        trZ += transform_factor;
        break;
    case 's': //backward
              // trX+=fracTran;
        trY += transform_factor;
        trZ -= transform_factor;
        break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
const GLfloat light_diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
const GLfloat light_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
const GLfloat light_position[] = {2.0f, 5.0f, 5.0f, 0.0f};
const GLfloat mat_ambient[] = {0.7f, 0.7f, 0.7f, 1.0f};
const GLfloat mat_diffuse[] = {0.8f, 0.8f, 0.8f, 1.0f};
const GLfloat mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
const GLfloat shininess[] = {100.0f};

void controll(void)
{
    printf("PRESS: w -MOVE forward\n");
    printf("PRESS: a -MOVE left\n");
    printf("PRESS: s -MOVE backward\n");
    printf("PRESS: d -MOVE right\n");
    printf("PRESS: r - auto rotate\n");
    printf("PRESS: esc - auto rotate off\n");
    printf("PRESS: q -MOVE down\n");
    printf("PRESS: e -MOVE up\n");
    printf("PRESS: k - rotate left\n");
    printf("PRESS: l - rotate right\n");
    printf("PRESS: i - zoom in\n");
    printf("PRESS: o - zoom out\n");
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Central Shaheed Minar");
    controll();
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);
    glClearColor(0.22, 0.69, 0.89, 0);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
    glutMainLoop();
    return EXIT_SUCCESS;
}
