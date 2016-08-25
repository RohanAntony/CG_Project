void cloud(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0,float r=0.8,float g=0.8,float b=0.8){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		glVertex2d(-350,-75);
		glVertex2d(350,-75);
		glVertex2d(110,45);
		glVertex2d(-180,75);
		glVertex2d(-350,-75);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-350,-75);
		glVertex2d(350,-75);
	glEnd();

	//left most polygons
	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
		for(deg=-60;deg<=360;deg++){
			glVertex2d(250+cos(deg*3.14/360.0)*120,-15+sin(deg*3.14/360.0)*120);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
		for(deg=-20;deg<=360;deg++){
			glVertex2d(40+cos(deg*3.14/360.0)*150,30+sin(deg*3.14/360.0)*150);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-140+cos(deg*3.14/360.0)*100,100+sin(deg*3.14/360.0)*100);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(r,g,b);
		for(deg=-360;deg<=90;deg++){
			glVertex2d(-265+cos(deg*3.14/360.0)*-120,10+sin(deg*3.14/360.0)*-120);
		}
	glEnd();

	//borders
	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-60;deg<=300;deg++){
			glVertex2d(250+cos(deg*3.14/360.0)*120,-15+sin(deg*3.14/360.0)*120);
		}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=40;deg<=260;deg++){
			glVertex2d(40+cos(deg*3.14/360.0)*150,30+sin(deg*3.14/360.0)*150);
		}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=25;deg<=335;deg++){
			glVertex2d(-140+cos(deg*3.14/360.0)*100,100+sin(deg*3.14/360.0)*100);
		}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-300;deg<=90;deg++){
			glVertex2d(-265+cos(deg*3.14/360.0)*-120,10+sin(deg*3.14/360.0)*-120);
		}
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
