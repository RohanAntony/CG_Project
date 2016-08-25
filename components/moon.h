void moon(int x,int y,float scaleX=1.0,float scaleY=1.0){
	glTranslatef(x,y,0);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
	glColor3f(0.9,0.9,0.9);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(cos(deg*3.14/360.0)*130,sin(deg*3.14/360.0)*130);
		}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_BLUE,GLOBAL_BACKGROUND_GREEN);
		for(deg=-360;deg<=360;deg++){
			glVertex2d(50+cos(deg*3.14/360.0)*130,80+sin(deg*3.14/360.0)*130);
		}
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glTranslatef(-x,-y,0);
}
