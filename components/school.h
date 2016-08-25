void school(int x,int y,float scaleX=1.0,float scaleY=1.0){
	glBegin(GL_POLYGON);
		// side background polygon
		glColor3f(218/255.0,120/255.0,20/255.0);
		glVertex2d((x+-900)*scaleX,(y+-535)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-535)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-535)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// side backgound lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-535)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-535)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// side roof line polygon
		glColor3f(70/255.0,70/255.0,70/255.0);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-35)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// side roof line lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-35)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-35)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// side floor line polygon
		glColor3f(54/255.0,54/255.0,54/255.0);
		glVertex2d((x+-910)*scaleX,(y+-525)*scaleY);
		glVertex2d((x+-910)*scaleX,(y+-555)*scaleY);
		glVertex2d((x+910)*scaleX,(y+-555)*scaleY);
		glVertex2d((x+910)*scaleX,(y+-525)*scaleY);
		glVertex2d((x+-910)*scaleX,(y+-525)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// side floor line lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-910)*scaleX,(y+-525)*scaleY);
		glVertex2d((x+-910)*scaleX,(y+-555)*scaleY);
		glVertex2d((x+910)*scaleX,(y+-555)*scaleY);
		glVertex2d((x+910)*scaleX,(y+-525)*scaleY);
		glVertex2d((x+-910)*scaleX,(y+-525)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// side slant roof polygon
		glColor3f(130/255.0,69/255.0,7/255.0);
		glVertex2d((x+-900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+-700)*scaleX,(y+185)*scaleY);
		glVertex2d((x+700)*scaleX,(y+185)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-15)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// side slant roof lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-700)*scaleX,(y+185)*scaleY);
		glVertex2d((x+700)*scaleX,(y+185)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+-15)*scaleY);
		glVertex2d((x+-700)*scaleX,(y+185)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// central polygon
		glColor3f(250/255.0,128/255.0,23/255.0);
		glVertex2d((x+-250)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-250)*scaleX,(y+115)*scaleY);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
		glVertex2d((x+250)*scaleX,(y+115)*scaleY);
		glVertex2d((x+250)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// central lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-250)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-250)*scaleX,(y+115)*scaleY);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
		glVertex2d((x+250)*scaleX,(y+115)*scaleY);
		glVertex2d((x+250)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-250)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// central left roof polygon
		glColor3f(40/255.0,40/255.0,40/255.0);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
		glVertex2d((x+-300)*scaleX,(y+85)*scaleY);
		glVertex2d((x+-300)*scaleX,(y+115)*scaleY);
		glVertex2d((x+0)*scaleX,(y+295)*scaleY);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// central right roof polygon
		glColor3f(40/255.0,40/255.0,40/255.0);
		glVertex2d((x+0)*scaleX,(y+295)*scaleY);
		glVertex2d((x+300)*scaleX,(y+115)*scaleY);
		glVertex2d((x+300)*scaleX,(y+85)*scaleY);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
		glVertex2d((x+0)*scaleX,(y+295)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// central roof lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-300)*scaleX,(y+115)*scaleY);
		glVertex2d((x+0)*scaleX,(y+295)*scaleY);
		glVertex2d((x+300)*scaleX,(y+115)*scaleY);
		glVertex2d((x+300)*scaleX,(y+85)*scaleY);
		glVertex2d((x+0)*scaleX,(y+265)*scaleY);
		glVertex2d((x+-300)*scaleX,(y+85)*scaleY);
		glVertex2d((x+-300)*scaleX,(y+115)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// main door outer frame polygon
		glColor3f(245/255.0,245/255.0,12/255.0);
		glVertex2d((x+-150)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-150)*scaleX,(y+-215)*scaleY);
		glVertex2d((x+150)*scaleX,(y+-215)*scaleY);
		glVertex2d((x+150)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// main door outer frame lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-150)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-150)*scaleX,(y+-215)*scaleY);
		glVertex2d((x+150)*scaleX,(y+-215)*scaleY);
		glVertex2d((x+150)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-150)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// inner door left frame polygon
		glColor3f(12/255.0,12/255.0,245/255.0);
		glVertex2d((x+-130)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-130)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+-10)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+-10)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// inner door left frame lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+-130)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-130)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+-10)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+-10)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+-130)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// inner door right frame polygon
		glColor3f(12/255.0,12/255.0,245/255.0);
		glVertex2d((x+10)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+10)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+130)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+130)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_LINE_STRIP);
		// inner door right frame lineStrip
		glColor3f(0,0,0);
		glVertex2d((x+10)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+10)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+130)*scaleX,(y+-235)*scaleY);
		glVertex2d((x+130)*scaleX,(y+-545)*scaleY);
		glVertex2d((x+10)*scaleX,(y+-545)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		// door knobs
		glColor3f(20/255.0,20/255.0,23/255.0);
		glVertex2d((x+-40)*scaleX,(y+-365)*scaleY);
		glVertex2d((x+-20)*scaleX,(y+-365)*scaleY);
		glVertex2d((x+-20)*scaleX,(y+-395)*scaleY);
		glVertex2d((x+-40)*scaleX,(y+-395)*scaleY);
		glVertex2d((x+-40)*scaleX,(y+-365)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(20/255.0,20/255.0,23/255.0);
		glVertex2d((x+20)*scaleX,(y+-365)*scaleY);
		glVertex2d((x+40)*scaleX,(y+-365)*scaleY);
		glVertex2d((x+40)*scaleX,(y+-395)*scaleY);
		glVertex2d((x+20)*scaleX,(y+-395)*scaleY);
		glVertex2d((x+20)*scaleX,(y+-365)*scaleY);
	glEnd();

	//start of for loop
	for(j=-30;j>-200;j-=130){
		for(i=0;i<310;i+=150){

			glBegin(GL_POLYGON);
				// central window top outer polygon
				glColor3f(180/255.0,180/255.0,183/255.0);
				glVertex2d((x+i+-200)*scaleX,(y+j+85)*scaleY);
				glVertex2d((x+i+-100)*scaleX,(y+j+85)*scaleY);
				glVertex2d((x+i+-100)*scaleX,(y+j+-5)*scaleY);
				glVertex2d((x+i+-200)*scaleX,(y+j+-5)*scaleY);
				glVertex2d((x+i+-200)*scaleX,(y+j+85)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// central window top outer lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+-200)*scaleX,(y+j+85)*scaleY);
				glVertex2d((x+i+-100)*scaleX,(y+j+85)*scaleY);
				glVertex2d((x+i+-100)*scaleX,(y+j+-5)*scaleY);
				glVertex2d((x+i+-200)*scaleX,(y+j+-5)*scaleY);
				glVertex2d((x+i+-200)*scaleX,(y+j+85)*scaleY);
			glEnd();

			glBegin(GL_POLYGON);
				// central inner window top polygon
				glColor3f(220/255.0,220/255.0,223/255.0);
				glVertex2d((x+i+-190)*scaleX,(y+j+75)*scaleY);
				glVertex2d((x+i+-110)*scaleX,(y+j+75)*scaleY);
				glVertex2d((x+i+-110)*scaleX,(y+j+5)*scaleY);
				glVertex2d((x+i+-190)*scaleX,(y+j+5)*scaleY);
				glVertex2d((x+i+-190)*scaleX,(y+j+75)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// central inner window top lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+-190)*scaleX,(y+j+75)*scaleY);
				glVertex2d((x+i+-110)*scaleX,(y+j+75)*scaleY);
				glVertex2d((x+i+-110)*scaleX,(y+j+5)*scaleY);
				glVertex2d((x+i+-190)*scaleX,(y+j+5)*scaleY);
				glVertex2d((x+i+-190)*scaleX,(y+j+75)*scaleY);
			glEnd();
		}
	}
	//End of for loop

	//start of loop
	for(i=30;i>-500;i-=210){
		for(j=-30;j>-250;j-=200){
			glBegin(GL_POLYGON);
				// left window outer frame polygon
				glColor3f(220/255.0,220/255.0,223/255.0);
				glVertex2d((x+i+-460)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+-320)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+-320)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-460)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-460)*scaleX,(y+j+-95)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// left window outer frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+-460)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+-320)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+-320)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-460)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-460)*scaleX,(y+j+-95)*scaleY);
			glEnd();

			glBegin(GL_POLYGON);
				// left window inner frame polygon
				glColor3f(128/255.0,116/255.0,219/255.0);
				glVertex2d((x+i+-450)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+-330)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+-330)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+-450)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+-450)*scaleX,(y+j+-105)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// left window inner frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+-450)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+-330)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+-330)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+-450)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+-450)*scaleX,(y+j+-105)*scaleY);
			glEnd();

			glBegin(GL_POLYGON);
				// left window bottom frame polygon
				glColor3f(250/255.0,246/255.0,30/255.0);
				glVertex2d((x+i+-480)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-300)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-300)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+-480)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+-480)*scaleX,(y+j+-205)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// left window bottom frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+-480)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-300)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+-300)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+-480)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+-480)*scaleX,(y+j+-205)*scaleY);
			glEnd();

		}
	}
	//end of loop

	//Right side window loop
	//start of loop
	for(i=-30;i<500;i+=210){
		for(j=-30;j>-250;j-=200){
			glBegin(GL_POLYGON);
				// right window outer frame polygon
				glColor3f(220/255.0,220/255.0,223/255.0);
				glVertex2d((x+i+460)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+320)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+320)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+460)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+460)*scaleX,(y+j+-95)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// right window outer frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+460)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+320)*scaleX,(y+j+-95)*scaleY);
				glVertex2d((x+i+320)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+460)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+460)*scaleX,(y+j+-95)*scaleY);
			glEnd();

			glBegin(GL_POLYGON);
				// right window inner frame polygon
				glColor3f(128/255.0,116/255.0,219/255.0);
				glVertex2d((x+i+450)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+330)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+330)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+450)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+450)*scaleX,(y+j+-105)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// right window inner frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+450)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+330)*scaleX,(y+j+-105)*scaleY);
				glVertex2d((x+i+330)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+450)*scaleX,(y+j+-195)*scaleY);
				glVertex2d((x+i+450)*scaleX,(y+j+-105)*scaleY);
			glEnd();

			glBegin(GL_POLYGON);
				// right window bottom frame polygon
				glColor3f(250/255.0,246/255.0,30/255.0);
				glVertex2d((x+i+480)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+300)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+300)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+480)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+480)*scaleX,(y+j+-205)*scaleY);
			glEnd();

			glBegin(GL_LINE_STRIP);
				// right window bottom frame lineStrip
				glColor3f(0,0,0);
				glVertex2d((x+i+480)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+300)*scaleX,(y+j+-205)*scaleY);
				glVertex2d((x+i+300)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+480)*scaleX,(y+j+-215)*scaleY);
				glVertex2d((x+i+480)*scaleX,(y+j+-205)*scaleY);
			glEnd();
		}
	}
	//end of loop
}
