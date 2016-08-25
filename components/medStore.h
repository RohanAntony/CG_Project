void medStore(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	//font body
	glBegin(GL_POLYGON);
		glColor3f(0.55,0.55,1);
		glVertex2d(-550,-270);
		glVertex2d(-550,230);
		glVertex2d(550,230);
		glVertex2d(550,-270);
		glVertex2d(-550,-270);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-550,-270);
		glVertex2d(-550,230);
		glVertex2d(550,230);
		glVertex2d(550,-270);
		glVertex2d(-550,-270);
	glEnd();

	// roof
	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,1);
		glVertex2d(-590,270);
		glVertex2d(-590,220);
		glVertex2d(590,220);
		glVertex2d(590,270);
		glVertex2d(-590,270);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-590,270);
		glVertex2d(-590,220);
		glVertex2d(590,220);
		glVertex2d(590,270);
		glVertex2d(-590,270);
	glEnd();

	// outer door frame
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-410,-270);
		glVertex2d(-410,100);
		glVertex2d(-100,100);
		glVertex2d(-100,-270);
		glVertex2d(-410,-270);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-410,-270);
		glVertex2d(-410,100);
		glVertex2d(-100,100);
		glVertex2d(-100,-270);
		glVertex2d(-410,-270);
	glEnd();

	// inner door frame
	glBegin(GL_POLYGON);
		glColor3f(0.15,0.35,0.25);
		glVertex2d(-400,-270);
		glVertex2d(-400,90);
		glVertex2d(-110,90);
		glVertex2d(-110,-270);
		glVertex2d(-400,-270);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-400,-270);
		glVertex2d(-400,90);
		glVertex2d(-110,90);
		glVertex2d(-110,-270);
		glVertex2d(-400,-270);
	glEnd();

	// plus polygons 2
	glBegin(GL_POLYGON);
		glColor3f(1,0.3,0.3);
		glVertex2d(280,50);
		glVertex2d(320,50);
		glVertex2d(320,-90);
		glVertex2d(280,-90);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1,0.3,0.3);
		glVertex2d(230,-40);
		glVertex2d(230,10);
		glVertex2d(370,10);
		glVertex2d(370,-40);
	glEnd();
	// plus lineStrip
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(280,-90);
		glVertex2d(280,-40);
		glVertex2d(230,-40);
		glVertex2d(230,10);
		glVertex2d(280,10);
		glVertex2d(280,50);
		glVertex2d(320,50);
		glVertex2d(320,10);
		glVertex2d(370,10);
		glVertex2d(370,-40);
		glVertex2d(320,-40);
		glVertex2d(320,-90);
		glVertex2d(280,-90);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
