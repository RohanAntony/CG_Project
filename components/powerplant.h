void powerplant(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(-900,-495);
		glVertex2d(-900,-35);
		glVertex2d(900,-35);
		glVertex2d(900,-495);
		glVertex2d(-900,-495);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-900,-495);
		glVertex2d(-900,-35);
		glVertex2d(900,-35);
		glVertex2d(900,-495);
		glVertex2d(-900,-495);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.6,0.1,0.1);
		// bottom line
		glVertex2d(-900,-495);
		glVertex2d(900,-495);
		glVertex2d(900,-505);
		glVertex2d(-900,-505);
		glVertex2d(-900,-495);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-900,-495);
		glVertex2d(900,-495);
		glVertex2d(900,-505);
		glVertex2d(-900,-505);
		glVertex2d(-900,-495);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.6,0.1);
		// top line, green color
		glVertex2d(-900,-45);
		glVertex2d(900,-45);
		glVertex2d(900,-65);
		glVertex2d(-900,-65);
		glVertex2d(-900,-45);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-900,-45);
		glVertex2d(900,-45);
		glVertex2d(900,-65);
		glVertex2d(-900,-65);
		glVertex2d(-900,-45);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		// top terrace, gray color
		glVertex2d(-920,-45);
		glVertex2d(-920,-15);
		glVertex2d(920,-15);
		glVertex2d(920,-45);
		glVertex2d(-920,-45);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-920,-45);
		glVertex2d(-920,-15);
		glVertex2d(920,-15);
		glVertex2d(920,-45);
		glVertex2d(-920,-45);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.6,0.1);
		// second top line, green color
		glVertex2d(-900,-125);
		glVertex2d(900,-125);
		glVertex2d(900,-145);
		glVertex2d(-900,-145);
		glVertex2d(-900,-125);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-900,-125);
		glVertex2d(900,-125);
		glVertex2d(900,-145);
		glVertex2d(-900,-145);
		glVertex2d(-900,-125);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		// top bars
		glVertex2d(-870,-85);
		glVertex2d(870,-85);
		glVertex2d(870,-95);
		glVertex2d(-870,-95);
		glVertex2d(-870,-85);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-870,-85);
		glVertex2d(870,-85);
		glVertex2d(870,-95);
		glVertex2d(-870,-95);
		glVertex2d(-870,-85);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.8,0.8);
		glVertex2d(-870,-105);
		glVertex2d(870,-105);
		glVertex2d(870,-115);
		glVertex2d(-870,-115);
		glVertex2d(-870,-105);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-870,-105);
		glVertex2d(870,-105);
		glVertex2d(870,-115);
		glVertex2d(-870,-115);
		glVertex2d(-870,-105);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		// main furnace, gray color
		glVertex2d(-600,-505);
		glVertex2d(-460,305);
		glVertex2d(-240,305);
		glVertex2d(-100,-505);
		glVertex2d(-600,-505);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-600,-505);
		glVertex2d(-460,305);
		glVertex2d(-240,305);
		glVertex2d(-100,-505);
		glVertex2d(-600,-505);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.1,0.1);
		// main furnace bottom line, red color
		glVertex2d(-600,-505);
		glVertex2d(-580,-395);
		glVertex2d(-120,-395);
		glVertex2d(-100,-505);
		glVertex2d(-600,-505);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-600,-505);
		glVertex2d(-580,-395);
		glVertex2d(-120,-395);
		glVertex2d(-100,-505);
		glVertex2d(-600,-505);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.8,0.1,0.1);
		// main furnace top line, red color
		glVertex2d(-480,175);
		glVertex2d(-460,295);
		glVertex2d(-240,295);
		glVertex2d(-220,175);
		glVertex2d(-480,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-480,175);
		glVertex2d(-460,295);
		glVertex2d(-240,295);
		glVertex2d(-220,175);
		glVertex2d(-480,175);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.85,0.85,0.85);
		// smaller roof, darker gray
		glVertex2d(200,-15);
		glVertex2d(230,45);
		glVertex2d(670,45);
		glVertex2d(700,-15);
		glVertex2d(200,-15);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(200,-15);
		glVertex2d(230,45);
		glVertex2d(670,45);
		glVertex2d(700,-15);
		glVertex2d(200,-15);
	glEnd();

	for(i=0;i<201;i+=200){
		glBegin(GL_POLYGON);
			glColor3f(0.95,0.95,0.95);
			// smaller outlets
			glVertex2d(i+300,45);
			glVertex2d(i+300,505);
			glVertex2d(i+400,505);
			glVertex2d(i+400,45);
			glVertex2d(i+300,45);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glColor3f(0,0,0);
			glVertex2d(i+300,45);
			glVertex2d(i+300,505);
			glVertex2d(i+400,505);
			glVertex2d(i+400,45);
			glVertex2d(i+300,45);
		glEnd();
	}

	for(i=0;i<201;i+=200){
		for(j=-351;j<50;j+=90){
			glBegin(GL_POLYGON);
				glColor3f(0.8,0.1,0.1);
				// smaller outlet bars
				glVertex2d(i+300,j+455);
				glVertex2d(i+400,j+455);
				glVertex2d(i+400,j+405);
				glVertex2d(i+300,j+405);
				glVertex2d(i+300,j+455);
			glEnd();
			glBegin(GL_LINE_STRIP);
				glColor3f(0,0,0);
				glVertex2d(i+300,j+455);
				glVertex2d(i+400,j+455);
				glVertex2d(i+400,j+405);
				glVertex2d(i+300,j+405);
				glVertex2d(i+300,j+455);
			glEnd();
		}
	}

	glBegin(GL_POLYGON);
		glColor3f(0.5,0.5,0.5);
		// window 1 outer frame
		glVertex2d(-800,-245);
		glVertex2d(-650,-245);
		glVertex2d(-650,-355);
		glVertex2d(-800,-355);
		glVertex2d(-800,-245);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-800,-245);
		glVertex2d(-650,-245);
		glVertex2d(-650,-355);
		glVertex2d(-800,-355);
		glVertex2d(-800,-245);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.6);
		// window 1 inner frame
		glVertex2d(-790,-255);
		glVertex2d(-660,-255);
		glVertex2d(-660,-345);
		glVertex2d(-790,-345);
		glVertex2d(-790,-255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-790,-255);
		glVertex2d(-660,-255);
		glVertex2d(-660,-345);
		glVertex2d(-790,-345);
		glVertex2d(-790,-255);
	glEnd();

	for(i=0;i<800;i+=250){
		glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			// window 2 outer frame
			glVertex2d(i+-50,-245);
			glVertex2d(i+100,-245);
			glVertex2d(i+100,-355);
			glVertex2d(i+-50,-355);
			glVertex2d(i+-50,-245);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glColor3f(0,0,0);
			glVertex2d(i+-50,-245);
			glVertex2d(i+100,-245);
			glVertex2d(i+100,-355);
			glVertex2d(i+-50,-355);
			glVertex2d(i+-50,-245);
		glEnd();

		glBegin(GL_POLYGON);
			glColor3f(0.1,0.1,0.6);
			// window 2 inner frame
			glVertex2d(i+-40,-255);
			glVertex2d(i+90,-255);
			glVertex2d(i+90,-345);
			glVertex2d(i+-40,-345);
			glVertex2d(i+-40,-255);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glColor3f(0,0,0);
			glVertex2d(i+-40,-255);
			glVertex2d(i+90,-255);
			glVertex2d(i+90,-345);
			glVertex2d(i+-40,-345);
			glVertex2d(i+-40,-255);
		glEnd();
	}

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
