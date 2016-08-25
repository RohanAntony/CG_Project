void smoke(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

  glBegin(GL_POLYGON);
	glColor3f(0.8,0.8,0.8);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(cos(deg*3.14/360.0)*-120,100+sin(deg*3.14/360.0)*-120);
		}
	glEnd();
  glBegin(GL_LINE_STRIP);
  glColor3f(0,0,0);
    for(deg=-360;deg<=360;deg++){
      glVertex2d(cos(deg*3.14/360.0)*-120,100+sin(deg*3.14/360.0)*-120);
    }
  glEnd();

  glBegin(GL_POLYGON);
	glColor3f(0.8,0.8,0.8);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-40+cos(deg*3.14/360.0)*-120,-100+sin(deg*3.14/360.0)*-120);
		}
	glEnd();
  glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-40+cos(deg*3.14/360.0)*-120,-100+sin(deg*3.14/360.0)*-120);
		}
	glEnd();

  glBegin(GL_POLYGON);
	glColor3f(0.8,0.8,0.8);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-50+cos(deg*3.14/360.0)*-120,-10+sin(deg*3.14/360.0)*-120);
		}
	glEnd();
  glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-50+cos(deg*3.14/360.0)*-120,-10+sin(deg*3.14/360.0)*-120);
		}
	glEnd();

  glBegin(GL_POLYGON);
	glColor3f(0.8,0.8,0.8);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(40+cos(deg*3.14/360.0)*-120,sin(deg*3.14/360.0)*-120);
		}
	glEnd();
  glBegin(GL_LINE_STRIP);
	glColor3f(0,0,0);
		for(deg=-150;deg<=100;deg++){
			glVertex2d(40+cos(deg*3.14/360.0)*120,sin(deg*3.14/360.0)*120);
		}
	glEnd();

  glBegin(GL_POLYGON);
	glColor3f(0.8,0.8,0.8);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(-20+cos(deg*3.14/360.0)*-100,sin(deg*3.14/360.0)*-180);
		}
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
