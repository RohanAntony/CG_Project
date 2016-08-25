int xG=0,yG=0;

void ambulance(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	x = x+xG;
	y = y+yG;
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.4,0.5,1);
		glVertex2d(-625,-375);
		glVertex2d(-625,305);
		glVertex2d(-615,315);
		glVertex2d(365,315);
		glVertex2d(375,305);
		glVertex2d(425,-15);
		glVertex2d(595,-15);
		glVertex2d(615,-35);
		glVertex2d(615,-375);
		glVertex2d(-625,-375);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-625,-375);
		glVertex2d(-625,305);
		glVertex2d(-615,315);
		glVertex2d(365,315);
		glVertex2d(375,305);
		glVertex2d(425,-15);
		glVertex2d(595,-15);
		glVertex2d(615,-35);
		glVertex2d(615,-375);
		glVertex2d(-625,-375);
	glEnd();

	//door line
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(15,315);
		glVertex2d(15,-375);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(15,-15);
		glVertex2d(425,-15);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.6);
		// window
		glVertex2d(35,-15);
		glVertex2d(35,285);
		glVertex2d(45,295);
		glVertex2d(345,295);
		glVertex2d(355,285);
		glVertex2d(395,-15);
		glVertex2d(35,-15);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(35,-15);
		glVertex2d(35,285);
		glVertex2d(45,295);
		glVertex2d(345,295);
		glVertex2d(355,285);
		glVertex2d(395,-15);
		glVertex2d(35,-15);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		// door handle
		glVertex2d(35,-35);
		glVertex2d(105,-35);
		glVertex2d(105,-55);
		glVertex2d(35,-55);
		glVertex2d(35,-35);
	glEnd();

	glTranslatef(700,-100,0);
	glScalef(3,3,1);
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.1,0.1);
		// plus polygons
		glVertex2d(-345,75);
		glVertex2d(-305,75);
		glVertex2d(-305,-25);
		glVertex2d(-345,-25);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.1,0.1);
		glVertex2d(-275,45);
		glVertex2d(-275,5);
		glVertex2d(-375,5);
		glVertex2d(-375,45);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-345,75);
		glVertex2d(-345,45);
		glVertex2d(-375,45);
		glVertex2d(-375,5);
		glVertex2d(-375,5);
		glVertex2d(-345,5);
		glVertex2d(-345,-25);
		glVertex2d(-305,-25);
		glVertex2d(-305,5);
		glVertex2d(-275,5);
		glVertex2d(-275,45);
		glVertex2d(-305,45);
		glVertex2d(-305,75);
		glVertex2d(-345,75);
	glEnd();
	glScalef(1/3.0,1/3.0,1);
	glTranslatef(-700,100,0);

	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		// bumpers
		glVertex2d(-645,-355);
		glVertex2d(-585,-355);
		glVertex2d(-585,-385);
		glVertex2d(-645,-385);
		glVertex2d(-645,-355);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2d(535,-355);
		glVertex2d(635,-355);
		glVertex2d(635,-385);
		glVertex2d(535,-385);
		glVertex2d(535,-355);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.99,0.6);
		// head light
		glVertex2d(615,-255);
		glVertex2d(635,-265);
		glVertex2d(645,-285);
		glVertex2d(645,-295);
		glVertex2d(635,-315);
		glVertex2d(615,-325);
		glVertex2d(615,-255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(615,-255);
		glVertex2d(635,-265);
		glVertex2d(645,-285);
		glVertex2d(645,-295);
		glVertex2d(635,-315);
		glVertex2d(615,-325);
		glVertex2d(615,-255);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.9);
		// side view mirror
		glVertex2d(395,-75);
		glVertex2d(395,25);
		glVertex2d(415,15);
		glVertex2d(435,-5);
		glVertex2d(435,-35);
		glVertex2d(425,-65);
		glVertex2d(395,-75);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(395,-75);
		glVertex2d(395,25);
		glVertex2d(415,15);
		glVertex2d(435,-5);
		glVertex2d(435,-35);
		glVertex2d(425,-65);
		glVertex2d(395,-75);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.7,0.1,0.1);
		// top light
		glVertex2d(125,315);
		glVertex2d(125,375);
		glVertex2d(135,395);
		glVertex2d(165,395);
		glVertex2d(165,315);
		glVertex2d(125,315);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(125,315);
		glVertex2d(125,375);
		glVertex2d(135,395);
		glVertex2d(165,395);
		glVertex2d(165,315);
		glVertex2d(125,315);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.7);
		glVertex2d(165,315);
		glVertex2d(165,395);
		glVertex2d(195,395);
		glVertex2d(205,375);
		glVertex2d(205,315);
		glVertex2d(165,315);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(165,315);
		glVertex2d(165,395);
		glVertex2d(195,395);
		glVertex2d(205,375);
		glVertex2d(205,315);
		glVertex2d(165,315);
	glEnd();

	//wheels at -425,-375 and 375,-375
	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-400+cos(deg*3.14/360.0)*120,-375+sin(deg*3.14/360.0)*120);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2,0.2,0.2);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(375+cos(deg*3.14/360.0)*120,-375+sin(deg*3.14/360.0)*120);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-400+cos(deg*3.14/360.0)*40,-375+sin(deg*3.14/360.0)*40);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(375+cos(deg*3.14/360.0)*40,-375+sin(deg*3.14/360.0)*40);
		}
	glEnd();


	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

int ambulanceMove(){
	if(xG < 1500)
		xG+=5;
	else
		return 0;
	return 1;
}
