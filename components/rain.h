int rainValue = -20;
int rainRot = 0;

void raindrops(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-250,150);
		glVertex2d(-250,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-150,150);
		glVertex2d(-150,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-50,150);
		glVertex2d(-50,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(50,150);
		glVertex2d(50,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(150,150);
		glVertex2d(150,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(250,150);
		glVertex2d(250,50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-200,100);
		glVertex2d(-200,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-100,100);
		glVertex2d(-100,10);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(0,100);
		glVertex2d(0,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(100,100);
		glVertex2d(100,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(200,100);
		glVertex2d(200,0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-250,0);
		glVertex2d(-250,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-150,0);
		glVertex2d(-150,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-50,-10);
		glVertex2d(-50,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(50,-10);
		glVertex2d(50,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(150,-10);
		glVertex2d(150,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(250,-20);
		glVertex2d(250,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(200,-50);
		glVertex2d(200,-150);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(90,-50);
		glVertex2d(90,-140);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(0,-50);
		glVertex2d(0,-140);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-100,-50);
		glVertex2d(-100,-140);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.8);
		glVertex2d(-210,-60);
		glVertex2d(-210,-150);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void rain(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	for(i=-250;i<250;i+=400)
		for(j=100;j>-100;j-=150)
			raindrops(i,rainValue+j,0.8,0.5);

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void rainAction(){
	if(rainValue == -20 && rainRot == 5){
		rainValue = 70;
		rainRot = 0;
	}else if(rainValue == 70 && rainRot == 5){
	 	rainValue = -20;
		rainRot = 0;
	}else rainRot++;
}
