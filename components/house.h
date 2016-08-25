void house1(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.2,0.2);
		// main roof
		glVertex2d(-860,-25);
		glVertex2d(-660,325);
		glVertex2d(-110,325);
		glVertex2d(200,325);
		glVertex2d(200,-25);
		glVertex2d(-860,-25);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-860,-25);
		glVertex2d(-660,325);
		glVertex2d(-110,325);
		glVertex2d(200,325);
		glVertex2d(200,-25);
		glVertex2d(-860,-25);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(181/255.0,116/255.0,94/255.0);
		// bodyLeft
		glVertex2d(-860,-425);
		glVertex2d(-860,-25);
		glVertex2d(-460,-25);
		glVertex2d(-460,-425);
		glVertex2d(-860,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-860,-425);
		glVertex2d(-860,-25);
		glVertex2d(-460,-25);
		glVertex2d(-460,-425);
		glVertex2d(-860,-425);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(191/255.0,126/255.0,104/255.0);
		// second body from left
		glVertex2d(-460,-425);
		glVertex2d(-460,75);
		glVertex2d(-60,75);
		glVertex2d(-60,-425);
		glVertex2d(-460,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-460,-425);
		glVertex2d(-460,75);
		glVertex2d(-60,75);
		glVertex2d(-60,-425);
		glVertex2d(-460,-425);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(191/255.0,126/255.0,104/255.0);
		//second body from right
		glVertex2d(-60,-425);
		glVertex2d(-60,175);
		glVertex2d(340,405);
		glVertex2d(740,175);
		glVertex2d(740,-425);
		glVertex2d(-60,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-60,-425);
		glVertex2d(-60,175);
		glVertex2d(340,405);
		glVertex2d(740,175);
		glVertex2d(740,-425);
		glVertex2d(-60,-425);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(191/255.0,126/255.0,104/255.0);
		//first body from right
		glVertex2d(240,-425);
		glVertex2d(240,-25);
		glVertex2d(540,175);
		glVertex2d(840,-25);
		glVertex2d(840,-425);
		glVertex2d(240,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(240,-425);
		glVertex2d(240,-25);
		glVertex2d(540,175);
		glVertex2d(840,-25);
		glVertex2d(840,-425);
		glVertex2d(240,-425);
	glEnd();

	// garage door outer frame
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(360,-425);
		glVertex2d(360,-125);
		glVertex2d(720,-125);
		glVertex2d(720,-425);
		glVertex2d(360,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(360,-425);
		glVertex2d(360,-125);
		glVertex2d(720,-125);
		glVertex2d(720,-425);
		glVertex2d(360,-425);
	glEnd();

	// garage door inner frame
	glBegin(GL_POLYGON);
		glColor3f(0.92,0.8,0.75);
		glVertex2d(370,-425);
		glVertex2d(370,-145);
		glVertex2d(710,-145);
		glVertex2d(710,-425);
		glVertex2d(370,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(370,-425);
		glVertex2d(370,-145);
		glVertex2d(710,-145);
		glVertex2d(710,-425);
		glVertex2d(370,-425);
	glEnd();

	// main door outer frame
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-20,-425);
		glVertex2d(-20,-135);
		glVertex2d(200,-135);
		glVertex2d(200,-425);
		glVertex2d(-20,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-20,-425);
		glVertex2d(-20,-135);
		glVertex2d(200,-135);
		glVertex2d(200,-425);
		glVertex2d(-20,-425);
	glEnd();

	// main door inner frame
	glBegin(GL_POLYGON);
		glColor3f(0.94,0.94,0.7);
		glVertex2d(-10,-425);
		glVertex2d(-10,-145);
		glVertex2d(190,-145);
		glVertex2d(190,-425);
		glVertex2d(-10,-425);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-10,-425);
		glVertex2d(-10,-145);
		glVertex2d(190,-145);
		glVertex2d(190,-425);
		glVertex2d(-10,-425);
	glEnd();

	// door knob
	glBegin(GL_POLYGON);
		glColor3f(0.25,0.2,0.3);
		glVertex2d(-10,-265);
		glVertex2d(10,-265);
		glVertex2d(10,-295);
		glVertex2d(-10,-295);
		glVertex2d(-10,-265);
	glEnd();

	// leftmost window
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-800,-95);
		glVertex2d(-520,-95);
		glVertex2d(-520,-355);
		glVertex2d(-800,-355);
		glVertex2d(-800,-95);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-800,-95);
		glVertex2d(-520,-95);
		glVertex2d(-520,-355);
		glVertex2d(-800,-355);
		glVertex2d(-800,-95);
	glEnd();

		// leftmost window inner frame
	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.8);
		glVertex2d(-790,-105);
		glVertex2d(-530,-105);
		glVertex2d(-530,-345);
		glVertex2d(-790,-345);
		glVertex2d(-790,-105);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-790,-105);
		glVertex2d(-530,-105);
		glVertex2d(-530,-345);
		glVertex2d(-790,-345);
		glVertex2d(-790,-105);
	glEnd();

	// window borders
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-670,-105);
		glVertex2d(-650,-105);
		glVertex2d(-650,-345);
		glVertex2d(-670,-345);
		glVertex2d(-670,-105);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-790,-215);
		glVertex2d(-530,-215);
		glVertex2d(-530,-235);
		glVertex2d(-790,-235);
		glVertex2d(-790,-215);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-790,-155);
		glVertex2d(-670,-155);
		glVertex2d(-530,-155);
		glVertex2d(-530,-165);
		glVertex2d(-790,-165);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-790,-285);
		glVertex2d(-530,-285);
		glVertex2d(-530,-295);
		glVertex2d(-790,-295);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-730,-105);
		glVertex2d(-720,-105);
		glVertex2d(-720,-345);
		glVertex2d(-730,-345);
		glVertex2d(-730,-105);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-600,-105);
		glVertex2d(-590,-105);
		glVertex2d(-590,-345);
		glVertex2d(-600,-345);
		glVertex2d(-600,-105);
	glEnd();

	glTranslatef(0,-100,0);
	// rightmost window 2 outer frame
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-400,-25);
		glVertex2d(-120,-25);
		glVertex2d(-120,-175);
		glVertex2d(-410,-175);
		glVertex2d(-410,-25);
		glVertex2d(-390,-25);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-400,-25);
		glVertex2d(-120,-25);
		glVertex2d(-120,-175);
		glVertex2d(-410,-175);
		glVertex2d(-410,-25);
		glVertex2d(-390,-25);
	glEnd();
	// window inner frame color blue
	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.8);
		glVertex2d(-400,-35);
		glVertex2d(-130,-35);
		glVertex2d(-130,-165);
		glVertex2d(-400,-165);
		glVertex2d(-400,-35);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-400,-35);
		glVertex2d(-130,-35);
		glVertex2d(-130,-165);
		glVertex2d(-400,-165);
		glVertex2d(-400,-35);
	glEnd();
	// window borders
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-270,-35);
		glVertex2d(-260,-35);
		glVertex2d(-260,-165);
		glVertex2d(-270,-165);
		glVertex2d(-270,-35);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-340,-35);
		glVertex2d(-330,-35);
		glVertex2d(-330,-165);
		glVertex2d(-340,-165);
		glVertex2d(-340,-35);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-200,-35);
		glVertex2d(-190,-35);
		glVertex2d(-190,-165);
		glVertex2d(-200,-165);
		glVertex2d(-200,-35);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(-400,-95);
		glVertex2d(-130,-95);
		glVertex2d(-130,-105);
		glVertex2d(-400,-105);
	glEnd();
	glTranslatef(0,+100,0);

	//roof lining
	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(-870,-25);
		glVertex2d(-870,-5);
		glVertex2d(-460,-5);
		glVertex2d(-460,-25);
		glVertex2d(-870,-25);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-870,-25);
		glVertex2d(-870,-5);
		glVertex2d(-460,-5);
		glVertex2d(-460,-25);
		glVertex2d(-870,-25);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(-470,75);
		glVertex2d(-470,95);
		glVertex2d(-60,95);
		glVertex2d(-60,75);
		glVertex2d(-470,75);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-470,75);
		glVertex2d(-470,95);
		glVertex2d(-60,95);
		glVertex2d(-60,75);
		glVertex2d(-470,75);
	glEnd();

	//v shaped roof
	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(-80,175);
		glVertex2d(-60,175);
		glVertex2d(340,405);
		glVertex2d(340,425);
		glVertex2d(-90,175);
		glVertex2d(-60,175);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(770,175);
		glVertex2d(740,175);
		glVertex2d(340,405);
		glVertex2d(340,425);
		glVertex2d(770,175);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-90,175);
		glVertex2d(-60,175);
		glVertex2d(340,405);
		glVertex2d(740,175);
		glVertex2d(770,175);
		glVertex2d(340,425);
		glVertex2d(-90,175);
	glEnd();

	//v shaped roof 2
	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(210,-25);
		glVertex2d(240,-25);
		glVertex2d(540,175);
		glVertex2d(540,195);
		glVertex2d(210,-25);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.95,0.95,0.95);
		glVertex2d(540,195);
		glVertex2d(870,-25);
		glVertex2d(840,-25);
		glVertex2d(540,175);
		glVertex2d(540,195);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(210,-25);
		glVertex2d(240,-25);
		glVertex2d(540,175);
		glVertex2d(840,-25);
		glVertex2d(870,-25);
		glVertex2d(540,195);
		glVertex2d(210,-25);
	glEnd();

	// top window outer frame
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(280,315);
		glVertex2d(410,315);
		glVertex2d(410,245);
		glVertex2d(280,245);
		glVertex2d(280,315);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(280,315);
		glVertex2d(410,315);
		glVertex2d(410,245);
		glVertex2d(280,245);
		glVertex2d(280,315);
	glEnd();

	// inner window frame
	glBegin(GL_POLYGON);
		glColor3f(0.4,0.4,0.9);
		glVertex2d(290,305);
		glVertex2d(400,305);
		glVertex2d(400,255);
		glVertex2d(290,255);
		glVertex2d(290,305);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(290,305);
		glVertex2d(400,305);
		glVertex2d(400,255);
		glVertex2d(290,255);
		glVertex2d(290,305);
	glEnd();

	//center line in top window
	glBegin(GL_POLYGON);
		glColor3f(0.1,0.1,0.1);
		glVertex2d(340,305);
		glVertex2d(350,305);
		glVertex2d(350,255);
		glVertex2d(340,255);
		glVertex2d(340,305);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void house2(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// lower body
		glVertex2d(-645,-135);
		glVertex2d(-645,-535);
		glVertex2d(255,-535);
		glVertex2d(255,-135);
		glVertex2d(-645,-135);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-645,-135);
		glVertex2d(-645,-535);
		glVertex2d(255,-535);
		glVertex2d(255,-135);
		glVertex2d(-645,-135);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2d(-445,-535);
		glVertex2d(-445,-235);
		glVertex2d(55,-235);
		glVertex2d(55,-535);
		glVertex2d(-445,-535);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-445,-535);
		glVertex2d(-445,-235);
		glVertex2d(55,-235);
		glVertex2d(55,-535);
		glVertex2d(-445,-535);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// upper body
		glVertex2d(-645,-5);
		glVertex2d(-645,315);
		glVertex2d(255,315);
		glVertex2d(255,-5);
		glVertex2d(-645,-5);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-645,-5);
		glVertex2d(-645,315);
		glVertex2d(255,315);
		glVertex2d(255,-5);
		glVertex2d(-645,-5);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.45,0.35,0.25);
		// upper roof
		glVertex2d(-645,315);
		glVertex2d(-795,315);
		glVertex2d(-195,535);
		glVertex2d(405,315);
		glVertex2d(-645,315);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-645,315);
		glVertex2d(-795,315);
		glVertex2d(-195,535);
		glVertex2d(405,315);
		glVertex2d(-645,315);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		// upper window
		glVertex2d(-395,265);
		glVertex2d(-395,65);
		glVertex2d(-295,65);
		glVertex2d(-295,265);
		glVertex2d(-395,265);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-395,265);
		glVertex2d(-395,65);
		glVertex2d(-295,65);
		glVertex2d(-295,265);
		glVertex2d(-395,265);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		// upper window
		glVertex2d(-245,265);
		glVertex2d(-245,65);
		glVertex2d(-145,65);
		glVertex2d(-145,265);
		glVertex2d(-245,265);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-245,265);
		glVertex2d(-245,65);
		glVertex2d(-145,65);
		glVertex2d(-145,265);
		glVertex2d(-245,265);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		// upper window
		glVertex2d(-95,265);
		glVertex2d(-95,65);
		glVertex2d(5,65);
		glVertex2d(5,265);
		glVertex2d(-95,265);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-95,265);
		glVertex2d(-95,65);
		glVertex2d(5,65);
		glVertex2d(5,265);
		glVertex2d(-95,265);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-385,255);
		glVertex2d(-385,175);
		glVertex2d(-305,175);
		glVertex2d(-305,255);
		glVertex2d(-385,255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-385,255);
		glVertex2d(-385,175);
		glVertex2d(-305,175);
		glVertex2d(-305,255);
		glVertex2d(-385,255);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-385,155);
		glVertex2d(-385,75);
		glVertex2d(-305,75);
		glVertex2d(-305,155);
		glVertex2d(-385,155);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-385,155);
		glVertex2d(-385,75);
		glVertex2d(-305,75);
		glVertex2d(-305,155);
		glVertex2d(-385,155);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-235,255);
		glVertex2d(-235,175);
		glVertex2d(-155,175);
		glVertex2d(-155,255);
		glVertex2d(-235,255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-235,255);
		glVertex2d(-235,175);
		glVertex2d(-155,175);
		glVertex2d(-155,255);
		glVertex2d(-235,255);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-235,155);
		glVertex2d(-235,75);
		glVertex2d(-155,75);
		glVertex2d(-155,155);
		glVertex2d(-235,155);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-235,155);
		glVertex2d(-235,75);
		glVertex2d(-155,75);
		glVertex2d(-155,155);
		glVertex2d(-235,155);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-85,255);
		glVertex2d(-85,175);
		glVertex2d(-5,175);
		glVertex2d(-5,255);
		glVertex2d(-85,255);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-85,255);
		glVertex2d(-85,175);
		glVertex2d(-5,175);
		glVertex2d(-5,255);
		glVertex2d(-85,255);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// upper window inner part
		glVertex2d(-85,155);
		glVertex2d(-85,75);
		glVertex2d(-5,75);
		glVertex2d(-5,155);
		glVertex2d(-85,155);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-85,155);
		glVertex2d(-85,75);
		glVertex2d(-5,75);
		glVertex2d(-5,155);
		glVertex2d(-85,155);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// side body
		glVertex2d(255,-185);
		glVertex2d(705,-185);
		glVertex2d(705,-515);
		glVertex2d(255,-515);
		glVertex2d(255,-185);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(255,-185);
		glVertex2d(705,-185);
		glVertex2d(705,-515);
		glVertex2d(255,-515);
		glVertex2d(255,-185);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.45,0.35,0.25);
		// side roof
		glVertex2d(255,-185);
		glVertex2d(795,-185);
		glVertex2d(685,95);
		glVertex2d(255,95);
		glVertex2d(255,-185);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(255,-185);
		glVertex2d(795,-185);
		glVertex2d(685,95);
		glVertex2d(255,95);
		glVertex2d(255,-185);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(250,-135);
		glVertex2d(775,-135);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(255,-85);
		glVertex2d(755,-85);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(245,-35);
		glVertex2d(735,-35);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(255,15);
		glVertex2d(715,15);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(255,55);
		glVertex2d(705,55);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		//side outer window
		glVertex2d(355,-235);
		glVertex2d(355,-435);
		glVertex2d(455,-435);
		glVertex2d(455,-235);
		glVertex2d(355,-235);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(355,-235);
		glVertex2d(355,-435);
		glVertex2d(455,-435);
		glVertex2d(455,-235);
		glVertex2d(355,-235);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		//side outer window
		glVertex2d(505,-235);
		glVertex2d(505,-435);
		glVertex2d(605,-435);
		glVertex2d(605,-235);
		glVertex2d(505,-235);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(505,-235);
		glVertex2d(505,-435);
		glVertex2d(605,-435);
		glVertex2d(605,-235);
		glVertex2d(505,-235);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// side inner window
		glVertex2d(365,-245);
		glVertex2d(365,-325);
		glVertex2d(445,-325);
		glVertex2d(445,-245);
		glVertex2d(365,-245);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(365,-245);
		glVertex2d(365,-325);
		glVertex2d(445,-325);
		glVertex2d(445,-245);
		glVertex2d(365,-245);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// side inner window
		glVertex2d(365,-345);
		glVertex2d(365,-425);
		glVertex2d(445,-425);
		glVertex2d(445,-345);
		glVertex2d(365,-345);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(365,-345);
		glVertex2d(365,-425);
		glVertex2d(445,-425);
		glVertex2d(445,-345);
		glVertex2d(365,-345);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		glVertex2d(515,-245);
		// side inner window
		glVertex2d(515,-325);
		glVertex2d(595,-325);
		glVertex2d(595,-245);
		glVertex2d(515,-245);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(515,-245);
		glVertex2d(515,-325);
		glVertex2d(595,-325);
		glVertex2d(595,-245);
		glVertex2d(515,-245);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.2,0.6,0.8);
		// side inner window
		glVertex2d(515,-345);
		glVertex2d(515,-425);
		glVertex2d(595,-425);
		glVertex2d(595,-345);
		glVertex2d(515,-345);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(515,-345);
		glVertex2d(515,-425);
		glVertex2d(595,-425);
		glVertex2d(595,-345);
		glVertex2d(515,-345);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.45,0.35,0.25);
		// lower body roof
		glVertex2d(-745,-165);
		glVertex2d(355,-165);
		glVertex2d(255,-5);
		glVertex2d(-645,-5);
		glVertex2d(-745,-165);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-745,-165);
		glVertex2d(355,-165);
		glVertex2d(255,-5);
		glVertex2d(-645,-5);
		glVertex2d(-745,-165);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void house3(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// left house body
		glVertex2d(-405,-550);
		glVertex2d(-855,-550);
		glVertex2d(-855,-100);
		glVertex2d(-405,100);
		glVertex2d(-405,-550);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-405,-550);
		glVertex2d(-855,-550);
		glVertex2d(-855,-100);
		glVertex2d(-405,100);
		glVertex2d(-405,-550);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// left house roof
		glVertex2d(-855,-100);
		glVertex2d(-935,-140);
		glVertex2d(-945,-120);
		glVertex2d(-405,120);
		glVertex2d(-405,100);
		glVertex2d(-855,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-855,-100);
		glVertex2d(-935,-140);
		glVertex2d(-945,-120);
		glVertex2d(-405,120);
		glVertex2d(-405,100);
		glVertex2d(-855,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex2d(645,-200);
		// Right house body
		glVertex2d(945,-200);
		glVertex2d(945,-550);
		glVertex2d(645,-550);
		glVertex2d(645,-200);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(645,-200);
		glVertex2d(945,-200);
		glVertex2d(945,-550);
		glVertex2d(645,-550);
		glVertex2d(645,-200);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.74,0.87,0.88);
		// right house window
		glVertex2d(705,-270);
		glVertex2d(705,-450);
		glVertex2d(865,-450);
		glVertex2d(865,-270);
		glVertex2d(705,-270);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(705,-270);
		glVertex2d(705,-450);
		glVertex2d(865,-450);
		glVertex2d(865,-270);
		glVertex2d(705,-270);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(785,-270);
		glVertex2d(785,-450);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(705,-360);
		glVertex2d(865,-360);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// right house roof
		glVertex2d(645,-90);
		glVertex2d(945,-90);
		glVertex2d(945,-100);
		glVertex2d(645,-100);
		glVertex2d(645,-90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(645,-90);
		glVertex2d(945,-90);
		glVertex2d(945,-100);
		glVertex2d(645,-100);
		glVertex2d(645,-90);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// right house roof
		glVertex2d(745,-100);
		glVertex2d(745,-200);
		glVertex2d(755,-200);
		glVertex2d(755,-100);
		glVertex2d(735,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(745,-100);
		glVertex2d(745,-200);
		glVertex2d(755,-200);
		glVertex2d(755,-100);
		glVertex2d(735,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// right house roof
		glVertex2d(905,-100);
		glVertex2d(905,-200);
		glVertex2d(915,-200);
		glVertex2d(915,-100);
		glVertex2d(905,-100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(905,-100);
		glVertex2d(905,-200);
		glVertex2d(915,-200);
		glVertex2d(915,-100);
		glVertex2d(905,-100);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// front left house body
		glVertex2d(-405,-130);
		glVertex2d(45,30);
		glVertex2d(45,450);
		glVertex2d(-405,270);
		glVertex2d(-405,-130);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-405,-130);
		glVertex2d(45,30);
		glVertex2d(45,450);
		glVertex2d(-405,270);
		glVertex2d(-405,-130);
	glEnd();



	glBegin(GL_POLYGON);
		glColor3f(0.74,0.87,0.88);
		// front left house window
		glVertex2d(-305,250);
		glVertex2d(-305,30);
		glVertex2d(-105,30);
		glVertex2d(-105,250);
		glVertex2d(-305,250);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-305,250);
		glVertex2d(-305,30);
		glVertex2d(-105,30);
		glVertex2d(-105,250);
		glVertex2d(-305,250);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-205,250);
		glVertex2d(-205,30);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-305,140);
		glVertex2d(-105,140);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// front left house roof
		glVertex2d(45,450);
		glVertex2d(235,530);
		glVertex2d(225,550);
		glVertex2d(-505,250);
		glVertex2d(-495,230);
		glVertex2d(-405,270);
		glVertex2d(45,450);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(45,450);
		glVertex2d(235,530);
		glVertex2d(225,550);
		glVertex2d(-505,250);
		glVertex2d(-495,230);
		glVertex2d(-405,270);
		glVertex2d(45,450);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// front right house body
		glVertex2d(45,30);
		glVertex2d(45,410);
		glVertex2d(645,150);
		glVertex2d(645,-550);
		glVertex2d(35,-550);
		glVertex2d(45,-550);
		glVertex2d(45,40);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(45,30);
		glVertex2d(45,410);
		glVertex2d(645,150);
		glVertex2d(645,-550);
		glVertex2d(35,-550);
		glVertex2d(45,-550);
		glVertex2d(45,40);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.74,0.87,0.88);
		// front right house window
		glVertex2d(405,-240);
		glVertex2d(405,-440);
		glVertex2d(585,-440);
		glVertex2d(585,-240);
		glVertex2d(405,-240);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(405,-240);
		glVertex2d(405,-440);
		glVertex2d(585,-440);
		glVertex2d(585,-240);
		glVertex2d(405,-240);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(495,-240);
		glVertex2d(495,-440);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(585,-340);
		glVertex2d(405,-340);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.74,0.87,0.88);
		// front right house window
		glVertex2d(405,100);
		glVertex2d(405,-100);
		glVertex2d(585,-100);
		glVertex2d(585,100);
		glVertex2d(405,100);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(405,100);
		glVertex2d(405,-100);
		glVertex2d(585,-100);
		glVertex2d(585,100);
		glVertex2d(405,100);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(495,100);
		glVertex2d(495,-100);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(405,0);
		glVertex2d(585,0);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		//triangle top
		glVertex2d(185,500);
		glVertex2d(185,370);
		glVertex2d(25,440);
		glVertex2d(185,510);
		glVertex2d(185,490);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(185,500);
		glVertex2d(185,370);
		glVertex2d(25,440);
		glVertex2d(185,510);
		glVertex2d(185,490);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// front right house roof
		glVertex2d(25,410);
		glVertex2d(25,440);
		glVertex2d(945,50);
		glVertex2d(935,30);
		glVertex2d(25,410);
	glEnd();
	glBegin(GL_LINE_STRIP);

		glColor3f(0,0,0);
		//glVertex2d(25,410);
		//glVertex2d(25,440);
		glVertex2d(945,50);
		glVertex2d(935,30);
		glVertex2d(25,410);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		// front house body
		glVertex2d(-405,-550);
		glVertex2d(-405,-150);
		glVertex2d(145,50);
		glVertex2d(345,-50);
		glVertex2d(345,-550);
		glVertex2d(-395,-550);
		glVertex2d(-405,-550);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-405,-550);
		glVertex2d(-405,-150);
		glVertex2d(145,50);
		glVertex2d(345,-50);
		glVertex2d(345,-550);
		glVertex2d(-395,-550);
		glVertex2d(-405,-550);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// front house roof
		glVertex2d(-405,-150);
		glVertex2d(-415,-130);
		glVertex2d(145,70);
		glVertex2d(145,50);
		glVertex2d(-405,-150);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		// front house roof
		glVertex2d(145,70);
		glVertex2d(355,-30);
		glVertex2d(345,-50);
		glVertex2d(145,50);
		glVertex2d(145,70);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-405,-150);
		glVertex2d(-415,-130);
		//glVertex2d(145,70);
		//glVertex2d(145,50);
		glVertex2d(-405,-150);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(145,70);
		glVertex2d(355,-30);
		glVertex2d(345,-50);
		//glVertex2d(145,50);
		//glVertex2d(145,70);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		//front house door
		glVertex2d(105,-550);
		glVertex2d(105,-210);
		glVertex2d(305,-210);
		glVertex2d(305,-550);
		glVertex2d(105,-550);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(105,-550);
		glVertex2d(105,-210);
		glVertex2d(305,-210);
		glVertex2d(305,-550);
		glVertex2d(105,-550);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.74,0.87,0.88);
		// front house window
		glVertex2d(-315,-240);
		glVertex2d(-315,-440);
		glVertex2d(45,-440);
		glVertex2d(45,-240);
		glVertex2d(-315,-240);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-315,-240);
		glVertex2d(-315,-440);
		glVertex2d(45,-440);
		glVertex2d(45,-240);
		glVertex2d(-315,-240);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-45,-240);
		glVertex2d(-45,-440);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-135,-240);
		glVertex2d(-135,-440);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-225,-240);
		glVertex2d(-225,-440);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-315,-340);
		glVertex2d(45,-340);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.247,0.247,0.247);
		//extra part added to top
		glVertex2d(0,425);
		glVertex2d(0,455);
		glVertex2d(25,440);
		glVertex2d(25,410);
		glVertex2d(0,425);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		//glVertex2d(0,425);
		//glVertex2d(0,455);
		//glVertex2d(25,440);
		glVertex2d(25,410);
		glVertex2d(0,425);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}

void house4(int x,int y,float scaleX=1.0,float scaleY=1.0,int rotationX=0,int rotationY=0,int rotationZ=0){
	glTranslatef(x,y,0);
	glRotatef(rotationX,1,0,0);
	glRotatef(rotationY,0,1,0);
	glRotatef(rotationZ,0,0,1);
	glScalef(scaleX,scaleY,1);

	glBegin(GL_POLYGON);
		glColor3f(0.91,0.81,0.47);
		// right part
		glVertex2d(935,-340);
		glVertex2d(935,260);
		glVertex2d(335,260);
		glVertex2d(335,-340);
		glVertex2d(935,-340);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(935,-340);
		glVertex2d(935,260);
		glVertex2d(335,260);
		glVertex2d(335,-340);
		glVertex2d(935,-340);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.75,0.57,0.46);
		//Right Part Roof
		glVertex2d(925,260);
		glVertex2d(945,260);
		glVertex2d(945,340);
		glVertex2d(325,340);
		glVertex2d(325,260);
		glVertex2d(935,260);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(925,260);
		glVertex2d(945,260);
		glVertex2d(945,340);
		glVertex2d(325,340);
		glVertex2d(325,260);
		glVertex2d(935,260);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.72,0.84,0.92);
		// right window
		glVertex2d(735,160);
		glVertex2d(735,-290);
		glVertex2d(795,-290);
		glVertex2d(795,160);
		glVertex2d(735,160);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glVertex2d(735,160);
		glVertex2d(735,-290);
		glVertex2d(795,-290);
		glVertex2d(795,160);
		glVertex2d(735,160);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.91,0.81,0.47);
		// midddle part
		glVertex2d(335,90);
		glVertex2d(-565,90);
		glVertex2d(-565,-340);
		glVertex2d(335,-340);
		glVertex2d(335,90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(335,90);
		glVertex2d(-565,90);
		glVertex2d(-565,-340);
		glVertex2d(335,-340);
		glVertex2d(335,90);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.75,0.57,0.46);
		// middle roof
		glVertex2d(-565,90);
		glVertex2d(-585,90);
		glVertex2d(-585,140);
		glVertex2d(335,140);
		glVertex2d(335,90);
		glVertex2d(-565,90);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-565,90);
		glVertex2d(-585,90);
		glVertex2d(-585,140);
		glVertex2d(335,140);
		glVertex2d(335,90);
		glVertex2d(-565,90);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.74,0.84,0.92);
		// middle window
		glVertex2d(-465,30);
		glVertex2d(-465,-340);
		glVertex2d(235,-340);
		glVertex2d(235,30);
		glVertex2d(-465,30);
		glVertex2d(-465,40);
		glVertex2d(235,40);
		glVertex2d(235,30);
		glVertex2d(-455,30);
		glVertex2d(-465,30);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glPointSize(5.0);
		glVertex2d(-465,30);
		glVertex2d(-465,-340);
		glVertex2d(235,-340);
		glVertex2d(235,30);
		glVertex2d(-465,30);
		glVertex2d(-465,40);
		glVertex2d(235,40);
		glVertex2d(235,30);
		glVertex2d(-455,30);
		glVertex2d(-465,30);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glVertex2d(-325,40);
		glVertex2d(-325,-340);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glVertex2d(-185,40);
		glVertex2d(-185,-340);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glVertex2d(-45,40);
		glVertex2d(-45,-340);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.306,0.306,0.306);
		glVertex2d(95,40);
		glVertex2d(95,-340);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// window lines white
		glColor3f(1,1,1);
		glVertex2d(-405,-70);
		glVertex2d(-355,0);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-425,-260);
		glVertex2d(-385,-200);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-255,-70);
		glVertex2d(-215,0);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-235,-110);
		glVertex2d(-205,-60);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-15,-80);
		glVertex2d(45,20);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-15,-180);
		glVertex2d(45,-80);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(185,-40);
		glVertex2d(225,20);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(125,-280);
		glVertex2d(185,-180);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(125,-320);
		glVertex2d(155,-270);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(-145,-290);
		glVertex2d(-85,-210);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.91,0.81,0.47);
		glVertex2d(-565,40);
		// left part
		glVertex2d(-945,40);
		glVertex2d(-945,-340);
		glVertex2d(-565,-340);
		glVertex2d(-565,40);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-565,40);
		glVertex2d(-945,40);
		glVertex2d(-945,-340);
		glVertex2d(-565,-340);
		glVertex2d(-565,40);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.9,0.9,0.5);
		glVertex2d(-565,-40);
		// left door
		glVertex2d(-915,-40);
		glVertex2d(-915,-340);
		glVertex2d(-565,-340);
		glVertex2d(-565,-40);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d(-565,-40);
		glVertex2d(-915,-40);
		glVertex2d(-915,-340);
		glVertex2d(-565,-340);
		glVertex2d(-565,-40);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// left door lines
		glColor3f(0.87,0.87,0.4);
		glVertex2d(-905,-80);
		glVertex2d(-645,-80);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.87,0.87,0.4);
		glVertex2d(-895,-140);
		glVertex2d(-625,-140);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.87,0.87,0.4);
		glVertex2d(-905,-180);
		glVertex2d(-655,-180);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.87,0.87,0.4);
		glVertex2d(-875,-240);
		glVertex2d(-605,-240);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(0.87,0.87,0.4);
		glVertex2d(-875,-290);
		glVertex2d(-605,-290);
	glEnd();

	glBegin(GL_LINE_STRIP);
		//Right Window Lines
		glColor3f(1,1,1);
		glVertex2d(785,140);
		glVertex2d(755,90);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(745,-190);
		glVertex2d(785,-120);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glColor3f(1,1,1);
		glVertex2d(755,-270);
		glVertex2d(785,-210);
	glEnd();

	glScalef(1/scaleX,1/scaleY,1);
	glRotatef(-rotationZ,0,0,1);
	glRotatef(-rotationY,0,1,0);
	glRotatef(-rotationX,1,0,0);
	glTranslatef(-x,-y,0);
}
