void schoolBus(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.5,0.1);
		glVertex2d(-365,-185);
		glVertex2d(-385,-115);
		glVertex2d(-395,-15);
		glVertex2d(-385,135);
		glVertex2d(-365,185);
		glVertex2d(315,185);
		glVertex2d(365,155);
		glVertex2d(385,25);
		glVertex2d(375,-185);
		glVertex2d(-365,-185);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-365,-185);
		glVertex2d(-385,-115);
		glVertex2d(-395,-15);
		glVertex2d(-385,135);
		glVertex2d(-365,185);
		glVertex2d(315,185);
		glVertex2d(365,155);
		glVertex2d(385,25);
		glVertex2d(375,-185);
		glVertex2d(-365,-185);
	glEnd();

	// door
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.1);
		glVertex2d(105,175);
		glVertex2d(235,175);
		glVertex2d(235,-175);
		glVertex2d(105,-175);
		glVertex2d(105,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(105,175);
		glVertex2d(235,175);
		glVertex2d(235,-175);
		glVertex2d(105,-175);
		glVertex2d(105,175);
	glEnd();

	// back window
	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.9);
		glVertex2d(-355,175);
		glVertex2d(-375,135);
		glVertex2d(-385,15);
		glVertex2d(95,15);
		glVertex2d(95,175);
		glVertex2d(-355,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-355,175);
		glVertex2d(-375,135);
		glVertex2d(-385,15);
		glVertex2d(95,15);
		glVertex2d(95,175);
		glVertex2d(-355,175);
	glEnd();

	// back window lines
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-265,175);
		glVertex2d(-265,15);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-165,175);
		glVertex2d(-165,15);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-65,175);
		glVertex2d(-65,15);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(35,175);
		glVertex2d(35,15);
	glEnd();

	// driver window
	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.9);
		glVertex2d(245,175);
		glVertex2d(315,175);
		glVertex2d(355,145);
		glVertex2d(355,15);
		glVertex2d(245,15);
		glVertex2d(245,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(245,175);
		glVertex2d(315,175);
		glVertex2d(355,145);
		glVertex2d(355,15);
		glVertex2d(245,15);
		glVertex2d(245,175);
	glEnd();

	// door center line
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(165,175);
		glVertex2d(165,-175);
		glVertex2d(165,-175);
	glEnd();

	// headlight
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.7,0.1);
		glVertex2d(385,-65);
		glVertex2d(395,-65);
		glVertex2d(395,-105);
		glVertex2d(385,-105);
		glVertex2d(385,-65);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(385,-65);
		glVertex2d(395,-65);
		glVertex2d(395,-105);
		glVertex2d(385,-105);
		glVertex2d(385,-65);
	glEnd();

	// bumpers
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		glVertex2d(-385,-165);
		glVertex2d(-345,-165);
		glVertex2d(-335,-185);
		glVertex2d(-395,-185);
		glVertex2d(-385,-165);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		glVertex2d(355,-165);
		glVertex2d(395,-165);
		glVertex2d(395,-185);
		glVertex2d(355,-185);
		glVertex2d(355,-165);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-220+cos(deg*3.14/360.0)*-80,-180+sin(deg*3.14/360.0)*-80);
		}
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-220+cos(deg*3.14/360.0)*80,-180+sin(deg*3.14/360.0)*80);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(240+cos(deg*3.14/360.0)*-80,-180+sin(deg*3.14/360.0)*-80);
		}
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(240+cos(deg*3.14/360.0)*80,-180+sin(deg*3.14/360.0)*80);
		}
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
