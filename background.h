void background(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0,float r=0.8,float g=0.8,float b=0.8){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

  glBegin(GL_POLYGON);
	glColor3f(r,g,b);
		for(deg=0;deg<=360;deg++){
			glVertex2d(cos(deg*3.14/360.0)*1200,sin(deg*3.14/360.0)*200);
		}
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=0;deg<=360;deg++){
			glVertex2d(cos(deg*3.14/360.0)*1200,sin(deg*3.14/360.0)*200);
		}
	glEnd();

  glBegin(GL_POLYGON);
  glColor3f(r,g,b);
    glVertex2d(-1200,-600);
    glVertex2d(1200,-600);
    glVertex2d(1200,0);
    glVertex2d(-1200,0);
  glEnd();

  glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
