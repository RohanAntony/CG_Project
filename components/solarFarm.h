void solarcell(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		glVertex2d(-35,175);
		glVertex2d(-15,175);
		glVertex2d(75,-475);
		glVertex2d(-125,-475);
		glVertex2d(-35,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-35,175);
		glVertex2d(-15,175);
		glVertex2d(75,-475);
		glVertex2d(-125,-475);
		glVertex2d(-35,175);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		// stand now panel
		glVertex2d(-175,475);
		glVertex2d(325,475);
		glVertex2d(175,-125);
		glVertex2d(-325,-125);
		glVertex2d(-175,475);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-175,475);
		glVertex2d(325,475);
		glVertex2d(175,-125);
		glVertex2d(-325,-125);
		glVertex2d(-175,475);
	glEnd();

	for(i=0;i<500;i+=50){
		glBegin(GL_POLYGON);
			glColor3f(0.3,0.3,0.9);
			// repeat this 10 times
			glVertex2d(i-175,475);
			glVertex2d(i-125,475);
			glVertex2d(i-275,-125);
			glVertex2d(i-325,-125);
			glVertex2d(i-175,475);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glColor3f(0,0,0);
			glVertex2d(i-175,475);
			glVertex2d(i-125,475);
			glVertex2d(i-275,-125);
			glVertex2d(i-325,-125);
			glVertex2d(i-175,475);
		glEnd();
	}

	glBegin(GL_LINES);
		glColor3f(0,0,0);
		glVertex2d(-185,425);
		glVertex2d(315,425);

		glVertex2d(-195,375);
		glVertex2d(295,375);

		glVertex2d(-225,275);
		glVertex2d(275,275);

		glVertex2d(-245,175);
		glVertex2d(245,175);

		glVertex2d(-275,75);
		glVertex2d(225,75);

		glVertex2d(-305,-25);
		glVertex2d(195,-25);

		glVertex2d(-235,225);
		glVertex2d(265,225);

		glVertex2d(-205,325);
		glVertex2d(285,325);

		glVertex2d(-255,125);
		glVertex2d(235,125);

		glVertex2d(-285,25);
		glVertex2d(205,25);

		glVertex2d(-305,-75);
		glVertex2d(185,-75);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void solarFarm(int x,int y,float scaleX=1,float scaleY=1){
	glScalef(scaleX,scaleY,1);
	glTranslatef(x,y,0);
	for(int m=-800;m<800;m+=180){
		for(int n=200;n>-200;n-=200){
			solarcell(m+n*0.1,n,0.3,0.3);
		}
	}
	glTranslatef(-x,-y,0);
	glScalef(1/scaleX,1/scaleY,1);
}
