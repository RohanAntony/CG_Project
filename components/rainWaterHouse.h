void rainWaterHouse(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.5,0.1);
		glVertex2d(-335,0);
		glVertex2d(-335,-200);
		glVertex2d(-35,-200);
		glVertex2d(-35,0);
		glVertex2d(-185,100);
		glVertex2d(-335,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-335,0);
		glVertex2d(-335,-200);
		glVertex2d(-35,-200);
		glVertex2d(-35,0);
		glVertex2d(-185,100);
		glVertex2d(-335,0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.35,0.05);
		// roof
		glVertex2d(-185,100);
		glVertex2d(165,200);
		glVertex2d(315,100);
		glVertex2d(-35,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-185,100);
		glVertex2d(165,200);
		glVertex2d(315,100);
		glVertex2d(-35,0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.5,0.1);
		// side part
		glVertex2d(-35,-200);
		glVertex2d(315,-100);
		glVertex2d(315,100);
		glVertex2d(-35,0);
		glVertex2d(-35,-200);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-35,-200);
		glVertex2d(315,-100);
		glVertex2d(315,100);
		glVertex2d(-35,0);
		glVertex2d(-35,-200);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.6,0.3,0.3);
		// door
		glVertex2d(-285,-200);
		glVertex2d(-285,-110);
		glVertex2d(-225,-110);
		glVertex2d(-225,-200);
		glVertex2d(-285,-200);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-285,-200);
		glVertex2d(-285,-110);
		glVertex2d(-225,-110);
		glVertex2d(-225,-200);
		glVertex2d(-285,-200);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.8);
		// window
		glVertex2d(-185,-20);
		glVertex2d(-185,-80);
		glVertex2d(-105,-80);
		glVertex2d(-105,-20);
		glVertex2d(-185,-20);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-185,-20);
		glVertex2d(-185,-80);
		glVertex2d(-105,-80);
		glVertex2d(-105,-20);
		glVertex2d(-185,-20);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.9);
		// side pipe
		glVertex2d(-35,0);
		glVertex2d(315,100);
		glVertex2d(335,100);
		glVertex2d(-15,0);
		glVertex2d(-25,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-35,0);
		glVertex2d(315,100);
		glVertex2d(335,100);
		glVertex2d(-15,0);
		glVertex2d(-25,0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		// drum
		glVertex2d(-35,-100);
		glVertex2d(65,-100);
		glVertex2d(65,-200);
		glVertex2d(-35,-200);
		glVertex2d(-35,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-35,-100);
		glVertex2d(65,-100);
		glVertex2d(65,-200);
		glVertex2d(-35,-200);
		glVertex2d(-35,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		glVertex2d(65,-100);
		glVertex2d(125,-80);
		glVertex2d(125,-180);
		glVertex2d(65,-200);
		glVertex2d(65,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(65,-100);
		glVertex2d(125,-80);
		glVertex2d(125,-180);
		glVertex2d(65,-200);
		glVertex2d(65,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.9);
		glVertex2d(-35,-100);
		glVertex2d(25,-80);
		glVertex2d(125,-80);
		glVertex2d(65,-100);
		glVertex2d(-35,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-35,-100);
		glVertex2d(25,-80);
		glVertex2d(125,-80);
		glVertex2d(65,-100);
		glVertex2d(-35,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.9);
		// connecting pipe
		glVertex2d(-25,0);
		glVertex2d(-5,0);
		glVertex2d(-5,-100);
		glVertex2d(-25,-100);
		glVertex2d(-25,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-25,0);
		glVertex2d(-5,0);
		glVertex2d(-5,-100);
		glVertex2d(-25,-100);
		glVertex2d(-25,0);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
