void mountain(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.37,0.62,0.62);
		glVertex2d(-360,-205);
		glVertex2d(-120,205);
		glVertex2d(100,-205);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-360,-205);
		glVertex2d(-120,205);
		glVertex2d(100,-205);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.37,0.62,0.62);
		glVertex2d(40,-205);
		glVertex2d(190,95);
		glVertex2d(360,-205);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(40,-205);
		glVertex2d(190,95);
		glVertex2d(360,-205);
	glEnd();

	// ice cap of larger mountain
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.9);
		glVertex2d(-190,85);
		glVertex2d(-160,55);
		glVertex2d(-80,125);
		glVertex2d(-120,205);
		glVertex2d(-190,85);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.9);
		glVertex2d(-120,85);
		glVertex2d(-90,55);
		glVertex2d(-50,85);
		glVertex2d(-120,205);
		glVertex2d(-120,85);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-190,85);
		glVertex2d(-160,55);
		glVertex2d(-120,85);
		glVertex2d(-90,55);
		glVertex2d(-50,85);
		glVertex2d(-120,205);
		glVertex2d(-190,85);
	glEnd();

	// ice cap of mountain smaller
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.9);
		glVertex2d(140,-15);
		glVertex2d(170,-35);
		glVertex2d(220,35);
		glVertex2d(190,95);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.9);
		glVertex2d(160,35);
		glVertex2d(210,-5);
		glVertex2d(240,15);
		glVertex2d(190,85);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(190,95);
		glVertex2d(140,-15);
		glVertex2d(170,-35);
		glVertex2d(200,5);
		glVertex2d(210,-5);
		glVertex2d(240,15);
		glVertex2d(190,95);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
