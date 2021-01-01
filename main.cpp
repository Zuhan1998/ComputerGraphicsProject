#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.14

using namespace std;



void drawSky(void)
{
      glBegin(GL_QUADS);
      glColor3ub(224, 224, 224);
      glVertex2f(0, 800);
      glVertex2f(1050, 800);
      glVertex2f(1050, 1000);
      glVertex2f(0, 1000);
      glEnd();
}

void drawSkyBottom(void)
{
      glBegin(GL_QUADS);
      glColor3ub(30, 86, 49);
      glVertex2f(0, 800);
      glVertex2f(1050, 750);
      glVertex2f(1050, 900);
      glVertex2f(900, 860);
      glVertex2f(860, 820);
      glVertex2f(800, 870);
      glVertex2f(700, 870);
      glVertex2f(600, 820);
      glVertex2f(0, 840);
      glEnd();
}

void drawRiver(void)
{
      glBegin(GL_QUADS);
      glColor3ub(102, 178, 255);
      glVertex2f(0, 600);
      glVertex2f(1050, 600);
      glVertex2f(1050, 800);
      glVertex2f(0, 800);
      glEnd();
}

void drawBoatOne(void)
{
      // Part one
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2f(50, 720);
      glVertex2f(120, 720);
      glVertex2f(130, 740);
      glVertex2f(40, 740);
      glEnd();

      // Part two
      glBegin(GL_POLYGON);
      glColor3ub(255, 255, 0);
      glVertex2f(60, 740);
      glVertex2f(110, 740);
      glVertex2f(90, 750);
      glVertex2f(80, 750);
      glEnd();

      // Part three
      glBegin(GL_QUADS);
      glColor3ub(213, 96, 5);
      glVertex2f(50, 740);
      glVertex2f(55, 740);
      glVertex2f(55, 780);
      glVertex2f(50, 780);
      glEnd();
}

void drawBoatTwo(void)
{
      // Part one
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2f(850, 770);
      glVertex2f(920, 770);
      glVertex2f(930, 790);
      glVertex2f(840, 790);
      glEnd();

      // Part two
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 255);
      glVertex2f(860, 790);
      glVertex2f(910, 790);
      glVertex2f(890, 800);
      glVertex2f(880, 800);
      glEnd();

      // Part three
      glBegin(GL_QUADS);
      glColor3ub(213, 96, 5);
      glVertex2f(850, 790);
      glVertex2f(855, 790);
      glVertex2f(855, 830);
      glVertex2f(850, 830);
      glEnd();
}

void drawGrass(void)
{
      glBegin(GL_QUADS);
      glColor3ub(76, 154, 42);
      glVertex2f(0, 220);
      glVertex2f(1050, 220);
      glVertex2f(1050, 600);
      glVertex2f(0, 600);
      glEnd();
}

void drawLandShades(void)
{
      //land shade 1
      glBegin(GL_POLYGON);
      glColor3ub(46, 139, 87);
      glVertex2f(1050, 220);
      glVertex2f(1050, 320);
      glVertex2f(690, 220);
      glEnd();

      // land shade2
      glBegin(GL_POLYGON);
      glColor3ub(46, 224, 87);
      glVertex2f(1050, 330);
      glVertex2f(0, 300);
      glVertex2f(0, 650);
      glVertex2f(1050, 380);
      glEnd();

      //land shade 3
      glBegin(GL_POLYGON);
      glColor3ub(0, 204, 102);
      glVertex2f(1050, 620);
      glVertex2f(1050, 500);
      glVertex2f(500, 490);
      glVertex2f(500, 400);
      glEnd();
}

void drawRoads(void)
{
      //Road 1
      glBegin(GL_QUADS);
      glColor3ub(96, 106, 116); // Red
      glVertex2f(0, 10);
      glVertex2f(1050, 10);
      glVertex2f(1050, 200);
      glVertex2f(0, 200);
      glEnd();

      //Road 2
      glBegin(GL_POLYGON);
      glColor3ub(96, 106, 116);
      glVertex2f(520, 200);
      glVertex2f(690, 200);
      glVertex2f(480, 600);
      glVertex2f(370, 600);
      glEnd();

      //Road 3
      glBegin(GL_POLYGON);
      glColor3ub(96, 106, 116);
      glVertex2f(0, 600);
      glVertex2f(500, 530);
      glVertex2f(480, 605);
      glVertex2f(0, 630);
      glEnd();
}

void drawRoadSigns(void)
{
      //sign 1
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 255); // Red
      glVertex2f(50, 100);
      glVertex2f(200, 100);
      glVertex2f(200, 110);
      glVertex2f(50, 110);
      glEnd();

      //sign 2
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 255); // white
      glVertex2f(250, 100);
      glVertex2f(400, 100);
      glVertex2f(400, 110);
      glVertex2f(250, 110);
      glEnd();

      //sign 3
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 255); // white
      glVertex2f(450, 100);
      glVertex2f(600, 100);
      glVertex2f(600, 110);
      glVertex2f(450, 110);
      glEnd();

      //sign 4
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 255); // white
      glVertex2f(650, 100);
      glVertex2f(800, 100);
      glVertex2f(800, 110);
      glVertex2f(650, 110);
      glEnd();

      //sign 5
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 255); // white
      glVertex2f(850, 100);
      glVertex2f(990, 100);
      glVertex2f(990, 110);
      glVertex2f(850, 110);
      glEnd();
}

void drawCarOne(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2f(795, 50);
      glVertex2f(885, 50);
      glVertex2f(880, 80);
      glVertex2f(800, 80);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(240, 128, 128);
      glVertex2f(800, 80);
      glVertex2f(870, 80);
      glVertex2f(850, 110);
      glVertex2f(810, 110);
      //glVertex2f(720,100);
      glEnd();

      //wheel 1
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 815;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();

      //wheel 2
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 865;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCarTwo(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2f(95, 50);
      glVertex2f(185, 50);
      glVertex2f(180, 80);
      glVertex2f(100, 80);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(53, 153, 255);
      glVertex2f(100, 80);
      glVertex2f(170, 80);
      glVertex2f(150, 110);
      glVertex2f(110, 110);
      //glVertex2f(720,100);
      glEnd();
// wheel 1
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 115;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
      //wheel 2
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 165;
            float y = r * sin(A) + 50;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCarThree(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255, 255, 204);
      glVertex2f(475, 150);
      glVertex2f(595, 150);
      glVertex2f(590, 180);
      glVertex2f(480, 180);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(153, 153, 255);
      glVertex2f(500, 180);
      glVertex2f(590, 180);
      glVertex2f(570, 210);
      glVertex2f(510, 210);
      //glVertex2f(720,100);
      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 505;
            float y = r * sin(A) + 150;
            glVertex2f(x, y);
      }

      glEnd();
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(1.0, 0, 1.0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 570;
            float y = r * sin(A) + 150;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawHomes(void)
{
      //1st home part1
      glBegin(GL_POLYGON);
      glColor3ub(225, 204, 229);
      glVertex2f(600, 550);
      glVertex2f(660, 530);
      glVertex2f(660, 590);
      glVertex2f(630, 640);
      glVertex2f(600, 590);
      glEnd();

      // part 2
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 102);
      glVertex2f(630, 640);
      glVertex2f(640, 630);
      glVertex2f(600, 585);
      glVertex2f(590, 585);
      glEnd();

      // part 3
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 102);
      glVertex2f(660, 580);
      glVertex2f(720, 590);
      glVertex2f(740, 640);
      glVertex2f(630, 640);
      glEnd();

      // part 4
      glBegin(GL_POLYGON);
      glColor3ub(255, 204, 255);
      glVertex2f(660, 530);
      glVertex2f(720, 545);
      glVertex2f(720, 590);
      glVertex2f(660, 580);
      glEnd();

      //first home door 1`
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2f(610, 545);
      glVertex2f(640, 535);
      glVertex2f(640, 580);
      glVertex2f(610, 585);
      glEnd();

      // 2nd home part 1
      glBegin(GL_POLYGON);
      glColor3ub(255, 255, 255);
      glVertex2f(720, 530);
      glVertex2f(800, 520);
      glVertex2f(800, 600);
      glVertex2f(760, 670);
      glVertex2f(720, 595);
      glEnd();

      // part 2
      glBegin(GL_POLYGON);
      glColor3ub(255, 51, 51);
      glVertex2f(770, 660);
      glVertex2f(760, 670);
      glVertex2f(710, 595);
      glVertex2f(725, 605);
      glEnd();

      // part 3
      glBegin(GL_POLYGON);
      glColor3ub(255, 51, 51);
      glVertex2f(800, 595);
      glVertex2f(900, 600);
      glVertex2f(860, 670);
      glVertex2f(760, 670);
      glEnd();

      // part 4
      glBegin(GL_POLYGON);
      glColor3ub(153, 204, 255);
      glVertex2f(800, 520);
      glVertex2f(890, 540);
      glVertex2f(890, 600);
      glVertex2f(800, 595);
      glEnd();

      // 2nd home door 2
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2f(745, 528);
      glVertex2f(775, 525);
      glVertex2f(775, 580);
      glVertex2f(745, 576);
      glEnd();

      // 3rd home(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(255, 204, 204);
      glVertex2f(0, 480);
      glVertex2f(100, 450);
      glVertex2f(100, 530);
      glVertex2f(0, 540);
      glEnd();

      // 3rd home (part 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 102);
      glVertex2f(0, 540);
      glVertex2f(100, 530);
      glVertex2f(150, 600);
      glVertex2f(0, 590);
      glVertex2f(150, 600);
      glVertex2f(200, 530);
      glVertex2f(200, 530);
      glVertex2f(190, 530);
      glVertex2f(190, 530);
      glVertex2f(130, 600);
      glEnd();

      // 3rd home (part 3)
      glBegin(GL_POLYGON);
      glColor3ub(192, 192, 192);
      glVertex2f(100, 450);
      glVertex2f(100, 530);
      glVertex2f(140, 590);
      glVertex2f(190, 530);
      glVertex2f(200, 480);
      glEnd();

      // 4th home (part 1)
      glBegin(GL_POLYGON);
      glColor3ub(204, 0, 0);
      glVertex2f(150, 500);
      glVertex2f(250, 490);
      glVertex2f(300, 580);
      glVertex2f(200, 575);
      glEnd();

      // 4th home (part 2)
      glBegin(GL_POLYGON);
      glColor3ub(255, 229, 204);
      glVertex2f(170, 500);
      glVertex2f(250, 490);
      glVertex2f(250, 400);
      glVertex2f(170, 440);
      glEnd();

      // 4th home (part 3)
      glBegin(GL_POLYGON);
      glColor3ub(204, 209, 255);
      glVertex2f(250, 400);
      glVertex2f(350, 420);
      glVertex2f(350, 490);
      glVertex2f(300, 580);
      glVertex2f(250, 490);
      glEnd();

      // 4th home (part 4)
      glBegin(GL_POLYGON);
      glColor3ub(204, 0, 0);
      glVertex2f(360, 480);
      glVertex2f(300, 580);
      glVertex2f(290, 570);
      glVertex2f(340, 480);

      glEnd();

      //4th home (door)
      glBegin(GL_POLYGON);
      glColor3ub(0, 0, 0);
      glVertex2f(280, 405);
      glVertex2f(325, 410);
      glVertex2f(320, 490);
      glVertex2f(280, 485);

      glEnd();
}

void drawTrees(void)
{
      //tree 1(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(153, 76, 0);
      glVertex2f(540, 500);
      glVertex2f(560, 500);
      glVertex2f(560, 580);
      glVertex2f(540, 580);
      glEnd();

      //tree1 (leaf 1)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2f(510, 580);
      glVertex2f(590, 580);
      glVertex2f(550, 630);
      glEnd();

      //tree1 (leaf 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 102, 0);
      glVertex2f(510, 610);
      glVertex2f(590, 610);
      glVertex2f(550, 660);
      glEnd();

      //tree1 (leaf 3)
      glBegin(GL_POLYGON);
      glColor3ub(76, 153, 0);
      glVertex2f(510, 640);
      glVertex2f(590, 640);
      glVertex2f(550, 740);
      glEnd();

      //tree 2( PART 1)
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 0);
      glVertex2f(920, 570);
      glVertex2f(930, 570);
      glVertex2f(930, 620);
      glVertex2f(920, 620);
      glEnd();

      // tree 2 (leaf 1)
      glBegin(GL_TRIANGLES);
      glColor3ub(76, 153, 0);
      glVertex2f(900, 620);
      glVertex2f(950, 620);
      glVertex2f(920, 700);
      glEnd();
      // tree 2(leaf 2)
      glBegin(GL_TRIANGLES);
      glColor3ub(0, 102, 0);
      glVertex2f(900, 660);
      glVertex2f(950, 660);
      glVertex2f(925, 720);
      glEnd();

      // tree 3(part 1)
      glBegin(GL_POLYGON);
      glColor3ub(102, 0, 0);
      glVertex2f(400, 490);
      glVertex2f(420, 490);
      glVertex2f(420, 380);
      glVertex2f(400, 380);
      glEnd();

      // tree 3 (leaf 1)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2f(340, 490);
      glVertex2f(480, 490);
      glVertex2f(410, 600);
      glEnd();

      //  tree 3 (leaf 2)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2f(340, 530);
      glVertex2f(480, 530);
      glVertex2f(410, 650);
      glEnd();

      // tree 3 (leaf 3)
      glBegin(GL_POLYGON);
      glColor3ub(0, 51, 25);
      glVertex2f(340, 570);
      glVertex2f(480, 570);
      glVertex2f(410, 700);
      glEnd();
}

void drawCloudOne(void)
{
      //cloud 1
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 350;
            float y = r * sin(A) + 920;
            glVertex2f(x, y);
      }

      glEnd();


      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 320;
            float y = r * sin(A) + 900;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 30.85;
            float x = r * cos(A) + 380;
            float y = r * sin(A) + 900;
            glVertex2f(x, y);
      }

      glEnd();
}

void drawCloudTwo(void)

 {
//cloud 2
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 70;
            float y = r * sin(A) + 950;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 30;
            float y = r * sin(A) + 925;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 90;
            float y = r * sin(A) + 915;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(240, 240, 240);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 38.85;
            float x = r * cos(A) + 130;
            float y = r * sin(A) + 930;
            glVertex2f(x, y);
      }

      glEnd();
 }

 void drawCloudThree(void)
 {
      //cloud 3
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 35.85;
            float x = r * cos(A) + 790;
            float y = r * sin(A) + 950;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 28.85;
            float x = r * cos(A) + 760;
            float y = r * sin(A) + 930;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 27.85;
            float x = r * cos(A) + 835;
            float y = r * sin(A) + 970;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 27.85;
            float x = r * cos(A) + 835;
            float y = r * sin(A) + 940;
            glVertex2f(x, y);
      }

      glEnd();

      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(249, 249, 249);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 25.85;
            float x = r * cos(A) + 865;
            float y = r * sin(A) + 945;
            glVertex2f(x, y);
      }

      glEnd();
}


void drawSignals(void)
{
      //Signal (part 1)
      glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(98, 420);
      glVertex2f(87, 420);
      glVertex2f(87, 200);
      glVertex2f(98, 200);
      glEnd();

      //Signal (part 2)
      glBegin(GL_QUADS);
      glColor3ub(172, 172, 172);
      glVertex2f(105, 420);
      glVertex2f(80, 420);
      glVertex2f(80, 340);
      glVertex2f(105, 340);
      glEnd();

      //SIGNAL ( RED light)
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(255, 0, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 405;
            glVertex2f(x, y);
      }
      glEnd();

      //SIGNAL (yellow light)
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(255, 255, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 380;
            glVertex2f(x, y);
      }
      glEnd();

      //SIGNAL (Green light)
      glBegin(GL_POLYGON);
      for (int i = 0; i < 200; i++)
      {
            glColor3ub(0, 153, 0);
            float pi = 3.1416;
            float A = (i * 2 * pi) / 200;
            float r = 10.85;
            float x = r * cos(A) + 92;
            float y = r * sin(A) + 355;
            glVertex2f(x, y);
      }
      glEnd();
}

void drawBench(void)
{
      // bench (part 1)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(780, 425);
      glVertex2f(775, 425);
      glVertex2f(775, 388);
      glVertex2f(780, 388);
      glEnd();

      // bench (part 2)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(700, 425);
      glVertex2f(705, 425);
      glVertex2f(705, 388);
      glVertex2f(700, 388);
      glEnd();

      // bench (part 3)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(800, 420);
      glVertex2f(680, 420);
      glVertex2f(680, 413);
      glVertex2f(800, 413);
      glEnd();

      // bench (part 4)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(800, 410);
      glVertex2f(680, 410);
      glVertex2f(680, 403);
      glVertex2f(800, 403);
      glEnd();

      // bench (part 5)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(800, 400);
      glVertex2f(680, 400);
      glVertex2f(680, 393);
      glVertex2f(800, 393);
      glEnd();

      // bench (part 6)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(800, 388);
      glVertex2f(680, 388);
      glVertex2f(670, 368);
      glVertex2f(810, 368);
      glVertex2f(670, 368);
      glVertex2f(810, 368);
      glVertex2f(810, 360);
      glVertex2f(670, 360);
      glEnd();

      // bench (part 7)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(680, 360);
      glVertex2f(685, 360);
      glVertex2f(687, 330);
      glVertex2f(680, 330);
      glEnd();

      // bench (part 8)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(690, 360);
      glVertex2f(695, 360);
      glVertex2f(697, 340);
      glVertex2f(690, 340);
      glEnd();

      // bench (part 9)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(800, 360);
      glVertex2f(795, 360);
      glVertex2f(795, 330);
      glVertex2f(802, 330);
      glEnd();

      // bench (part 10)
      glBegin(GL_QUADS);
      glColor3ub(153, 76, 0);
      glVertex2f(790, 360);
      glVertex2f(785, 360);
      glVertex2f(785, 340);
      glVertex2f(792, 340);
      glEnd();
}

void drawWindmillOneTop(void)
{
glBegin(GL_POLYGON);
 glColor3ub(0, 153, 0);

        glVertex2f(0, 0);
        glVertex2f(30, 15);
        glVertex2f(5, -2);
        glVertex2f(0, 0);
        glVertex2f(-25, 15);
        glVertex2f(5, -8);
        glVertex2f(0, 0);
        glVertex2f(10, -30);
        glVertex2f(5, 0);

        glEnd();
}
void drawWindmillOneBottom(void) {
    glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2f(490, 910);
      glVertex2f(485, 910);
      glVertex2f(485, 830);
      glVertex2f(490, 830);
      glEnd();

}


void drawWindmillTwoBottom(void)
{
   glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2f(575, 910);
      glVertex2f(580, 910);
      glVertex2f(580, 835);
      glVertex2f(575, 835);
      glEnd();

}


void drawWindmillThreeBottom(void)
{
   glBegin(GL_QUADS);
      glColor3ub(0,0, 0);
      glVertex2f(650, 910);
      glVertex2f(655, 910);
      glVertex2f(655, 845);
      glVertex2f(650, 841);
      glEnd();

}

void drawZebracrossing(void)
{
      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f(40, 10);
      glVertex2f(100, 10);
      glVertex2f(85, 200);
      glVertex2f(55, 200);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(45, 30);
      glVertex2f(95, 15);
      glVertex2f(93, 35);
      glVertex2f(47, 50);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(47, 65);
      glVertex2f(93, 50);
      glVertex2f(91, 70);
      glVertex2f(49, 85);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(50, 100);
      glVertex2f(91, 85);
      glVertex2f(89, 105);
      glVertex2f(52, 120);
      glEnd();

       glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(54, 135);
      glVertex2f(89, 120);
      glVertex2f(87, 140);
      glVertex2f(55, 155);
      glEnd();

       glBegin(GL_QUADS);
      glColor3ub(0,0,0);
      glVertex2f(56, 170);
      glVertex2f(87, 155);
      glVertex2f(85, 175);
      glVertex2f(57, 190);
      glEnd();
}



// Glut display function
void myDisplay(void)
{
      glClear(GL_COLOR_BUFFER_BIT); // clear the screen

      drawSky();
      drawSkyBottom();
      drawRiver();

      // Boat 1 with animation
      glPushMatrix();
      drawBoatOne();
      glPopMatrix();


      glPushMatrix();
      drawBoatTwo();
      glPopMatrix();

      drawGrass();
      drawLandShades();
      drawRoads();
      drawRoadSigns();
      drawSignals();
      drawZebracrossing();

      //car 1 with animation
      glPushMatrix();

      drawCarOne(); // Car One
      glPopMatrix();

      //car 2
      glPushMatrix();
      drawCarTwo();
      glPopMatrix();

      // Car 3 with animation
      glPushMatrix();
      drawCarThree(); // Car three
      glPopMatrix();

      drawHomes();
      drawTrees();

      // cloud 1 with animation
      glPushMatrix();
      drawCloudOne();
      glPopMatrix();

      // cloud 2 with animation
      glPushMatrix();
      drawCloudTwo();
      glPopMatrix();

      // cloud 3 with animation
      glPushMatrix();
      drawCloudThree();
      glPopMatrix();





      drawBench();


        glPushMatrix();
        glTranslatef(487, 910, 0);
        drawWindmillOneTop();
        glPopMatrix();
        drawWindmillOneBottom();



        glPushMatrix();
        glTranslatef(576, 910, 0);
        drawWindmillOneTop();
        glPopMatrix();
     drawWindmillTwoBottom();




        glPushMatrix();
        glTranslatef(653, 910, 0);
        drawWindmillOneTop();
        glPopMatrix();
      drawWindmillThreeBottom();


      glutSwapBuffers();
}

void update(int value)
{
      glutPostRedisplay();          // Update the GLUT
      glutTimerFunc(25, update, 0); // Re-call it
}

void initRendering(void)
{
      glClearColor(0.0, 0.0, 0.0, 0.0); // set the bg color to a bright black
      glLoadIdentity();                 // to be explained
      gluOrtho2D(0.0, 1050.0, 0.0, 1000.0);
}


int main(int argc, char** argv)
{
      glutInit(&argc, argv);                                 // initialize the toolkit
      glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // set the display mode
      glutInitWindowSize(1200, 1200);                             // set window size
      glutInitWindowPosition(100, 100);                         // set window upper left corner position on screen
      glutCreateWindow("River Side Scenario");                  // open the screen window
      glutTimerFunc(25, update, 0);
      glutDisplayFunc(myDisplay);
      initRendering(); // additional initializations as necessary
      glutMainLoop();  // go into a endless loop

      return 0;
}
