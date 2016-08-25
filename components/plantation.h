void plantation(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
