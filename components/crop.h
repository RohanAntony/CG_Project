void crop(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-95,450);
		glVertex2d(-75,420);
		glVertex2d(-55,360);
		glVertex2d(-35,250);
		glVertex2d(-15,80);
		glVertex2d(-5,-120);
		glVertex2d(-5,-330);
		glVertex2d(-5,-360);
		glVertex2d(-15,-400);
		glVertex2d(-35,-450);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-95,450);
		glVertex2d(-75,420);
		glVertex2d(-55,360);
		glVertex2d(-35,250);
		glVertex2d(-15,80);
		glVertex2d(-5,-120);
		glVertex2d(-5,-330);
		glVertex2d(-5,-360);
		glVertex2d(-15,-400);
		glVertex2d(-35,-450);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-95,440);
		glVertex2d(-75,400);
		glVertex2d(-55,320);
		glVertex2d(-35,180);
		glVertex2d(-15,-40);
		glVertex2d(-15,-230);
		glVertex2d(-15,-350);
		glVertex2d(-25,-390);
		glVertex2d(-35,-420);
		glVertex2d(-45,-440);
		glVertex2d(-45,-450);
		glVertex2d(-35,-450);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-95,440);
		glVertex2d(-75,400);
		glVertex2d(-55,320);
		glVertex2d(-35,180);
		glVertex2d(-15,-40);
		glVertex2d(-15,-230);
		glVertex2d(-15,-350);
		glVertex2d(-25,-390);
		glVertex2d(-35,-420);
		glVertex2d(-45,-440);
		glVertex2d(-45,-450);
		glVertex2d(-35,-450);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-5,-180);
		glVertex2d(5,-160);
		glVertex2d(25,-140);
		glVertex2d(35,-130);
		glVertex2d(55,-120);
		glVertex2d(105,-100);
		glVertex2d(135,-90);
		glVertex2d(45,-130);
		glVertex2d(15,-160);
		glVertex2d(-5,-190);
		glVertex2d(-5,-180);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-5,-180);
		glVertex2d(5,-160);
		glVertex2d(25,-140);
		glVertex2d(35,-130);
		glVertex2d(55,-120);
		glVertex2d(105,-100);
		glVertex2d(135,-90);
		glVertex2d(45,-130);
		glVertex2d(15,-160);
		glVertex2d(-5,-190);
		glVertex2d(-5,-180);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-15,-180);
		glVertex2d(-35,-160);
		glVertex2d(-75,-130);
		glVertex2d(-115,-100);
		glVertex2d(-145,-80);
		glVertex2d(-75,-140);
		glVertex2d(-45,-160);
		glVertex2d(-15,-190);
		glVertex2d(-15,-180);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-15,-180);
		glVertex2d(-35,-160);
		glVertex2d(-75,-130);
		glVertex2d(-115,-100);
		glVertex2d(-145,-80);
		glVertex2d(-75,-140);
		glVertex2d(-45,-160);
		glVertex2d(-15,-190);
		glVertex2d(-15,-180);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-5,-50);
		glVertex2d(15,-30);
		glVertex2d(55,0);
		glVertex2d(105,20);
		glVertex2d(155,40);
		glVertex2d(75,0);
		glVertex2d(25,-30);
		glVertex2d(-5,-60);
		glVertex2d(-5,-50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-5,-50);
		glVertex2d(15,-30);
		glVertex2d(55,0);
		glVertex2d(105,20);
		glVertex2d(155,40);
		glVertex2d(75,0);
		glVertex2d(25,-30);
		glVertex2d(-5,-60);
		glVertex2d(-5,-50);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-15,-50);
		glVertex2d(-35,-20);
		glVertex2d(-75,20);
		glVertex2d(-115,50);
		glVertex2d(-145,60);
		glVertex2d(-95,30);
		glVertex2d(-55,-10);
		glVertex2d(-15,-60);
		glVertex2d(-15,-50);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-15,-50);
		glVertex2d(-35,-20);
		glVertex2d(-75,20);
		glVertex2d(-115,50);
		glVertex2d(-145,60);
		glVertex2d(-95,30);
		glVertex2d(-55,-10);
		glVertex2d(-15,-60);
		glVertex2d(-15,-50);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-15,80);
		glVertex2d(5,110);
		glVertex2d(35,140);
		glVertex2d(75,170);
		glVertex2d(115,190);
		glVertex2d(55,150);
		glVertex2d(15,110);
		glVertex2d(-15,70);
		glVertex2d(-15,80);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-15,80);
		glVertex2d(5,110);
		glVertex2d(35,140);
		glVertex2d(75,170);
		glVertex2d(115,190);
		glVertex2d(55,150);
		glVertex2d(15,110);
		glVertex2d(-15,70);
		glVertex2d(-15,80);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-25,80);
		glVertex2d(-45,100);
		glVertex2d(-45,100);
		glVertex2d(-75,130);
		glVertex2d(-115,160);
		glVertex2d(-155,180);
		glVertex2d(-115,150);
		glVertex2d(-75,120);
		glVertex2d(-35,80);
		glVertex2d(-25,70);
		glVertex2d(-25,80);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-25,80);
		glVertex2d(-45,100);
		glVertex2d(-45,100);
		glVertex2d(-75,130);
		glVertex2d(-115,160);
		glVertex2d(-155,180);
		glVertex2d(-115,150);
		glVertex2d(-75,120);
		glVertex2d(-35,80);
		glVertex2d(-25,70);
		glVertex2d(-25,80);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-25,190);
		glVertex2d(5,230);
		glVertex2d(45,270);
		glVertex2d(75,290);
		glVertex2d(25,240);
		glVertex2d(-15,190);
		glVertex2d(-25,170);
		glVertex2d(-25,190);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-25,190);
		glVertex2d(5,230);
		glVertex2d(45,270);
		glVertex2d(75,290);
		glVertex2d(25,240);
		glVertex2d(-15,190);
		glVertex2d(-25,170);
		glVertex2d(-25,190);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-45,220);
		glVertex2d(-65,240);
		glVertex2d(-95,270);
		glVertex2d(-145,300);
		glVertex2d(-105,270);
		glVertex2d(-75,240);
		glVertex2d(-35,200);
		glVertex2d(-45,220);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-45,220);
		glVertex2d(-65,240);
		glVertex2d(-95,270);
		glVertex2d(-145,300);
		glVertex2d(-105,270);
		glVertex2d(-75,240);
		glVertex2d(-35,200);
		glVertex2d(-45,220);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-45,300);
		glVertex2d(-35,320);
		glVertex2d(-5,350);
		glVertex2d(35,370);
		glVertex2d(-5,340);
		glVertex2d(-35,320);
		glVertex2d(-25,330);
		glVertex2d(-45,290);
		glVertex2d(-35,310);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-45,300);
		glVertex2d(-35,320);
		glVertex2d(-5,350);
		glVertex2d(35,370);
		glVertex2d(-5,340);
		glVertex2d(-35,320);
		glVertex2d(-25,330);
		glVertex2d(-45,290);
		glVertex2d(-35,310);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-65,340);
		glVertex2d(-85,360);
		glVertex2d(-135,400);
		glVertex2d(-95,360);
		glVertex2d(-55,320);
		glVertex2d(-65,340);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-65,340);
		glVertex2d(-85,360);
		glVertex2d(-135,400);
		glVertex2d(-95,360);
		glVertex2d(-55,320);
		glVertex2d(-65,340);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.13,0.7,0.3);
		glVertex2d(-65,390);
		glVertex2d(-45,420);
		glVertex2d(-15,440);
		glVertex2d(-45,410);
		glVertex2d(-65,380);
		glVertex2d(-65,390);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-65,390);
		glVertex2d(-45,420);
		glVertex2d(-15,440);
		glVertex2d(-45,410);
		glVertex2d(-65,380);
		glVertex2d(-65,390);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-95,440);
		glVertex2d(-95,450);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void cropFarm(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

  int l = 0;
	for(i=-230,l=0;i<230;i+=40,l++)
		for(k=0,j=100;j>-100;j-=50,k++)
			crop(i,j,0.35,0.35,0,0,-5*rand()%3);

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
