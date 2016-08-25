void sugarcane(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.3,0.9,0.3);
		glVertex2d(-60,-445);
		glVertex2d(-60,255);
		glVertex2d(-10,255);
		glVertex2d(-10,-445);
		glVertex2d(-60,-445);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-445);
		glVertex2d(-60,255);
		glVertex2d(-10,255);
		glVertex2d(-10,-445);
		glVertex2d(-60,-445);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,255);
		glVertex2d(-40,245);
		glVertex2d(-30,245);
		glVertex2d(-10,255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,195);
		glVertex2d(-40,185);
		glVertex2d(-30,185);
		glVertex2d(-10,195);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,145);
		glVertex2d(-40,135);
		glVertex2d(-30,135);
		glVertex2d(-10,145);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,85);
		glVertex2d(-40,75);
		glVertex2d(-30,75);
		glVertex2d(-10,95);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,25);
		glVertex2d(-40,15);
		glVertex2d(-30,15);
		glVertex2d(-10,25);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-35);
		glVertex2d(-40,-45);
		glVertex2d(-30,-45);
		glVertex2d(-10,-35);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-85);
		glVertex2d(-40,-95);
		glVertex2d(-30,-95);
		glVertex2d(-10,-85);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-165);
		glVertex2d(-40,-175);
		glVertex2d(-20,-175);
		glVertex2d(-10,-165);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-225);
		glVertex2d(-50,-235);
		glVertex2d(-30,-235);
		glVertex2d(-10,-215);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-265);
		glVertex2d(-40,-275);
		glVertex2d(-20,-275);
		glVertex2d(-10,-265);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-335);
		glVertex2d(-40,-345);
		glVertex2d(-30,-345);
		glVertex2d(-10,-335);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-395);
		glVertex2d(-40,-405);
		glVertex2d(-30,-405);
		glVertex2d(-10,-385);
	glEnd();

	//leaves
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-60,255);
		glVertex2d(-120,235);
		glVertex2d(-130,255);
		glVertex2d(-60,275);
		glVertex2d(-60,255);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-130,255);
		glVertex2d(-150,205);
		glVertex2d(-120,235);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-50,265);
		glVertex2d(-110,305);
		glVertex2d(-90,315);
		glVertex2d(-40,285);
		glVertex2d(-50,265);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-110,305);
		glVertex2d(-160,305);
		glVertex2d(-190,315);
		glVertex2d(-90,315);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-30,275);
		glVertex2d(20,385);
		glVertex2d(130,445);
		glVertex2d(-10,275);
		glVertex2d(-30,285);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-10,275);
		glVertex2d(60,295);
		glVertex2d(60,265);
		glVertex2d(-10,255);
		glVertex2d(-10,275);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(60,295);
		glVertex2d(190,255);
		glVertex2d(60,265);
	glEnd();
	//leaves border
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,255);
		glVertex2d(-120,235);
		glVertex2d(-150,205);
		glVertex2d(-130,255);
		glVertex2d(-70,275);
		glVertex2d(-110,305);
		glVertex2d(-170,305);
		glVertex2d(-190,315);
		glVertex2d(-90,315);
		glVertex2d(-40,285);
		glVertex2d(-30,285);
		glVertex2d(20,385);
		glVertex2d(130,445);
		glVertex2d(-10,275);
		glVertex2d(60,295);
		glVertex2d(180,255);
		glVertex2d(50,265);
		glVertex2d(-10,255);
	glEnd();

	//center of leaf
	glBegin(GL_POLYGON);
		glColor3f(0.2,0.8,0.2);
		glVertex2d(-60,255);
		glVertex2d(-60,275);
		glVertex2d(-40,285);
		glVertex2d(-30,285);
		glVertex2d(-10,275);
		glVertex2d(-10,255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,255);
		glVertex2d(-60,275);
		glVertex2d(-40,285);
		glVertex2d(-30,285);
		glVertex2d(-10,275);
		glVertex2d(-10,255);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}


void sugarcaneFarm(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

  int l = 0;
	for(i=-230,l=0;i<230;i+=30,l++)
		for(k=0,j=100;j>-100;j-=50,k++)
			sugarcane(i,j,0.3,0.3,0,0,-5*rand()%3);

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
