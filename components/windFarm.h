//call   windFarm(450,250,0.9,0.9,0,windmillHeadDegree);
//add   windmillRotate(); in glutIdleFunc

int windmillHeadDegree = 0;

void windmillHead(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationx=0,int rotationy=0,int rotationz=0){
	glTranslatef(x,y,0);
	glRotatef(rotationx,1,0,0);
	glRotatef(rotationy,0,1,0);
	glRotatef(rotationz,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);//0 0/255 - 1 255/255
		glVertex2d(-20,-10);
		glVertex2d(-20,10);
		glVertex2d(-10,20);
		glVertex2d(10,20);
		glVertex2d(20,10);
		glVertex2d(20,-10);
		glVertex2d(10,-20);
		glVertex2d(-10,-20);
		glVertex2d(-20,-10);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-20,-10);
		glVertex2d(-20,10);
		glVertex2d(-10,20);
		glVertex2d(10,20);
		glVertex2d(20,10);
		glVertex2d(20,-10);
		glVertex2d(10,-20);
		glVertex2d(-10,-20);
		glVertex2d(-20,-10);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(-20,10);
		glVertex2d(-20,20);
		glVertex2d(-200,20);
		glVertex2d(-200,-20);
		glVertex2d(-20,-20);
		glVertex2d(-20,-10);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-20,10);
		glVertex2d(-20,20);
		glVertex2d(-200,20);
		glVertex2d(-200,-20);
		glVertex2d(-20,-20);
		glVertex2d(-20,-10);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(-10,-20);
		glVertex2d(-20,-20);
		glVertex2d(-20,-200);
		glVertex2d(20,-200);
		glVertex2d(20,-20);
		glVertex2d(-10,-20);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-10,-20);
		glVertex2d(-20,-20);
		glVertex2d(-20,-200);
		glVertex2d(20,-200);
		glVertex2d(20,-20);
		glVertex2d(-10,-20);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(20,20);
		glVertex2d(20,-20);
		glVertex2d(200,-20);
		glVertex2d(200,20);
		glVertex2d(20,20);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(20,20);
		glVertex2d(20,-20);
		glVertex2d(200,-20);
		glVertex2d(200,20);
		glVertex2d(20,20);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(-20,20);
		glVertex2d(20,20);
		glVertex2d(20,200);
		glVertex2d(-20,200);
		glVertex2d(-20,20);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-20,20);
		glVertex2d(20,20);
		glVertex2d(20,200);
		glVertex2d(-20,200);
		glVertex2d(-20,20);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationz,0,0,1);
	glRotatef(-rotationy,0,1,0);
	glRotatef(-rotationx,1,0,0);
	glTranslatef(-x,-y,0);
}

void windmillBody(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationx=0,int rotationy=0,int rotationz=0){
	glTranslatef(x,y,0);
	glRotatef(rotationx,1,0,0);
	glRotatef(rotationy,0,1,0);
	glRotatef(rotationz,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(0,-205);
		glVertex2d(20,205);
		glVertex2d(50,205);
		glVertex2d(70,-205);
		glVertex2d(0,-205);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(0,-205);
		glVertex2d(20,205);
		glVertex2d(50,205);
		glVertex2d(70,-205);
		glVertex2d(0,-205);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(221/255.0,233/255.0,237/255.0);
		glVertex2d(-40,-205);
		glVertex2d(-40,-155);
		glVertex2d(0,-155);
		glVertex2d(0,-205);
		glVertex2d(-40,-205);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-40,-205);
		glVertex2d(-40,-155);
		glVertex2d(0,-155);
		glVertex2d(0,-205);
		glVertex2d(-40,-205);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationz,0,0,1);
	glRotatef(-rotationy,0,1,0);
	glRotatef(-rotationx,1,0,0);
	glTranslatef(-x,-y,0);
}

void windmill(int x,int y,float scaleX=1,float scaleY=1,int offset=0,float degree=0){
  windmillBody(x+(-35*scaleX),y+(-200*scaleY),scaleX,scaleY);
  windmillHead(x,y,scaleX,scaleY,0,0,(int)(degree+offset));
}

void windFarm(int x,int y,float scaleX=1,float scaleY=1,int offset=0,float degree=0){
	// windmill(x+(-700*scaleX),y+(200*scaleY),0.7*scaleX,0.7*scaleY,0+offset,degree*1.75);
	// windmill(x+(-400*scaleX),y+(200*scaleY),0.7*scaleX,0.7*scaleY,0+offset,-degree*1.3);
	windmill(x+(-100*scaleX),y+(200*scaleY),0.7*scaleX,0.7*scaleY,0+offset,-degree*2.1);
	windmill(x+(200*scaleX),y+(200*scaleY),0.7*scaleX,0.7*scaleY,50+offset,degree*1.2);

	// windmill(x+(-600*scaleX),y+(0*scaleY),0.7*scaleX,0.7*scaleY,0+offset,-degree*3.4);
	windmill(x+(0*scaleX),y+(0*scaleY),0.7*scaleX,0.7*scaleY,25+offset,degree*1.9);
	windmill(x+(-300*scaleX),y+(0*scaleY),0.7*scaleX,0.7*scaleY,0+offset,degree*3.1);
	windmill(x+(300*scaleX),y+(0*scaleY),0.7*scaleX,0.7*scaleY,50+offset,-degree*2.5);
}
