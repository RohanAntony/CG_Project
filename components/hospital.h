void hospital(int x,int y,float scaleX=1.0,float scaleY=1.0){

	//Front side
	glBegin(GL_POLYGON);
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+900)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+900)*scaleX,(y+450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-450)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+900)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+900)*scaleX,(y+450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+900)*scaleX,(y+-450)*scaleY);
	glEnd();

	// Plus polygons(rectangle)
	glBegin(GL_POLYGON);
		glColor3f(200/255.0,10/255.0,10/255.0);
		glVertex2d((x+480)*scaleX,(y+400)*scaleY);
		glVertex2d((x+520)*scaleX,(y+400)*scaleY);
		glVertex2d((x+520)*scaleX,(y+300)*scaleY);
		glVertex2d((x+480)*scaleX,(y+300)*scaleY);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(200/255.0,10/255.0,10/255.0);
		glVertex2d((x+450)*scaleX,(y+370)*scaleY);
		glVertex2d((x+550)*scaleX,(y+370)*scaleY);
		glVertex2d((x+550)*scaleX,(y+330)*scaleY);
		glVertex2d((x+450)*scaleX,(y+330)*scaleY);
	glEnd();


	// Plus border
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+450)*scaleX,(y+330)*scaleY);
		glVertex2d((x+450)*scaleX,(y+370)*scaleY);
		glVertex2d((x+480)*scaleX,(y+370)*scaleY);
		glVertex2d((x+480)*scaleX,(y+400)*scaleY);
		glVertex2d((x+520)*scaleX,(y+400)*scaleY);
		glVertex2d((x+520)*scaleX,(y+370)*scaleY);
		glVertex2d((x+550)*scaleX,(y+370)*scaleY);
		glVertex2d((x+550)*scaleX,(y+330)*scaleY);
		glVertex2d((x+520)*scaleX,(y+330)*scaleY);
		glVertex2d((x+520)*scaleX,(y+300)*scaleY);
		glVertex2d((x+480)*scaleX,(y+300)*scaleY);
		glVertex2d((x+480)*scaleX,(y+330)*scaleY);
		glVertex2d((x+450)*scaleX,(y+330)*scaleY);
	glEnd();

	//Staircase
	glBegin(GL_POLYGON);
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+300)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+300)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+700)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+700)*scaleX,(y+-450)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+300)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+300)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+700)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+700)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+300)*scaleX,(y+-450)*scaleY);
	glEnd();

	//staircase 2
	glBegin(GL_POLYGON);
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+310)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-430)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+310)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-430)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-430)*scaleY);
	glEnd();

	//Door
	glBegin(GL_POLYGON);
		glColor3f(100/255.0,100/255.0,230/255.0);
		glVertex2d((x+351)*scaleX,(y+-409)*scaleY);
		glVertex2d((x+351)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+649)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+649)*scaleX,(y+-409)*scaleY);
	glEnd();
	//Door line
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+500)*scaleX,(y+-409)*scaleY);
		glVertex2d((x+500)*scaleX,(y+-150)*scaleY);
	glEnd();
	//knob1
	glBegin(GL_POLYGON);
		glColor3f(100/255.0,100/255.0,100/255.0);
		glVertex2d((x+460)*scaleX,(y+-270)*scaleY);
		glVertex2d((x+460)*scaleX,(y+-300)*scaleY);
		glVertex2d((x+490)*scaleX,(y+-300)*scaleY);
		glVertex2d((x+490)*scaleX,(y+-270)*scaleY);
		glVertex2d((x+460)*scaleX,(y+-270)*scaleY);
	glEnd();
	//knob2
	glBegin(GL_POLYGON);
		glColor3f(100/255.0,100/255.0,100/255.0);
		glVertex2d((x+510)*scaleX,(y+-270)*scaleY);
		glVertex2d((x+510)*scaleX,(y+-300)*scaleY);
		glVertex2d((x+540)*scaleX,(y+-300)*scaleY);
		glVertex2d((x+540)*scaleX,(y+-270)*scaleY);
		glVertex2d((x+510)*scaleX,(y+-270)*scaleY);
	glEnd();


	// Door frame polygon
	glBegin(GL_POLYGON);
		//frame left
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+320)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+320)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+350)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+350)*scaleX,(y+-410)*scaleY);
	glEnd();
	glBegin(GL_POLYGON);
		//frame right
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+680)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+680)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+650)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+650)*scaleX,(y+-410)*scaleY);
	glEnd();
	glBegin(GL_POLYGON);
		//frame top
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+310)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-120)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-120)*scaleY);
	glEnd();
	// Door frame borders
	glBegin(GL_LINE_STRIP);
		//frame left
		glColor3f(0,0,0);
		glVertex2d((x+320)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+320)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+350)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+350)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+320)*scaleX,(y+-410)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		//frame right
		glColor3f(0,0,0);
		glVertex2d((x+680)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+680)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+650)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+650)*scaleX,(y+-410)*scaleY);
		glVertex2d((x+680)*scaleX,(y+-410)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		//frame top
		glColor3f(0,0,0);
		glVertex2d((x+310)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-150)*scaleY);
		glVertex2d((x+690)*scaleX,(y+-120)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-120)*scaleY);
		glVertex2d((x+310)*scaleX,(y+-150)*scaleY);
	glEnd();

	//Start loop for x and y
	for(i=0;i<650;i+=145){
		for(j=-10;j>-250;j-=165){
			//Windows loop 0 to 650
			glBegin(GL_POLYGON);
				// Window frames, in black
				glColor3f(220/255.0,220/255.0,220/255.0);
				glVertex2d((x+i+161)*scaleX,(y+j+259)*scaleY);
				glVertex2d((x+i+279)*scaleX,(y+j+259)*scaleY);
				glVertex2d((x+i+279)*scaleX,(y+j+141)*scaleY);
				glVertex2d((x+i+161)*scaleX,(y+j+141)*scaleY);
			glEnd();
			glBegin(GL_LINE_STRIP);
				// Window frames border, in black
				glColor3f(0,0,0);
				glVertex2d((x+i+160)*scaleX,(y+j+260)*scaleY);
				glVertex2d((x+i+280)*scaleX,(y+j+260)*scaleY);
				glVertex2d((x+i+280)*scaleX,(y+j+140)*scaleY);
				glVertex2d((x+i+160)*scaleX,(y+j+140)*scaleY);
				glVertex2d((x+i+160)*scaleX,(y+j+260)*scaleY);
			glEnd();
			glBegin(GL_POLYGON);
				// Inside of window in light blue
				glColor3f(100/255.0,100/255.0,230/255.0);
				glVertex2d((x+i+171)*scaleX,(y+j+249)*scaleY);
				glVertex2d((x+i+269)*scaleX,(y+j+249)*scaleY);
				glVertex2d((x+i+269)*scaleX,(y+j+151)*scaleY);
				glVertex2d((x+i+171)*scaleX,(y+j+151)*scaleY);
			glEnd();
			glBegin(GL_LINE_STRIP);
				// Inside of window frame
				glColor3f(0,0,0);
				glVertex2d((x+i+170)*scaleX,(y+j+250)*scaleY);
				glVertex2d((x+i+270)*scaleX,(y+j+250)*scaleY);
				glVertex2d((x+i+270)*scaleX,(y+j+150)*scaleY);
				glVertex2d((x+i+170)*scaleX,(y+j+150)*scaleY);
				glVertex2d((x+i+170)*scaleX,(y+j+250)*scaleY);
			glEnd();
		}
	}
	//End loop

	// Left side
	glBegin(GL_POLYGON);
		glColor3f(230/255.0,230/255.0,230/255.0);
		glVertex2d((x+99)*scaleX,(y+50)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+50)*scaleY);
		glVertex2d((x+-800)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+99)*scaleX,(y+-450)*scaleY);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0);
		glVertex2d((x+100)*scaleX,(y+50)*scaleY);
		glVertex2d((x+-900)*scaleX,(y+50)*scaleY);
		glVertex2d((x+-800)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+-450)*scaleY);
		glVertex2d((x+100)*scaleX,(y+50)*scaleY);
	glEnd();


	//Start loop for x and y
	for(i=40;i<650;i+=250){
		for(j=-10;j>-250;j-=180){
			//Windows loop 0 to 650
			glBegin(GL_POLYGON);
				// Window frames, in black
				glColor3f(220/255.0,220/255.0,220/255.0);
				glVertex2d((x+i+-760)*scaleX,(y+j+-40)*scaleY);
				glVertex2d((x+i+-760)*scaleX,(y+j+-159)*scaleY);
				glVertex2d((x+i+-551)*scaleX,(y+j+-159)*scaleY);
				glVertex2d((x+i+-551)*scaleX,(y+j+-40)*scaleY);
			glEnd();
			glBegin(GL_LINE_STRIP);
				// Window frames border, in black
				glColor3f(0,0,0);
				glVertex2d((x+i+-760)*scaleX,(y+j+-40)*scaleY);
				glVertex2d((x+i+-760)*scaleX,(y+j+-160)*scaleY);
				glVertex2d((x+i+-550)*scaleX,(y+j+-160)*scaleY);
				glVertex2d((x+i+-550)*scaleX,(y+j+-40)*scaleY);
				glVertex2d((x+i+-760)*scaleX,(y+j+-40)*scaleY);
			glEnd();
			glBegin(GL_POLYGON);
				// Inside of window in light blue
				glColor3f(100/255.0,100/255.0,230/255.0);
				glVertex2d((x+i+-750)*scaleX,(y+j+-50)*scaleY);
				glVertex2d((x+i+-750)*scaleX,(y+j+-149)*scaleY);
				glVertex2d((x+i+-561)*scaleX,(y+j+-149)*scaleY);
				glVertex2d((x+i+-561)*scaleX,(y+j+-50)*scaleY);
			glEnd();
			glBegin(GL_LINE_STRIP);
				// Inside of window frame
				glColor3f(0,0,0);
				glVertex2d((x+i+-750)*scaleX,(y+j+-50)*scaleY);
				glVertex2d((x+i+-750)*scaleX,(y+j+-150)*scaleY);
				glVertex2d((x+i+-560)*scaleX,(y+j+-150)*scaleY);
				glVertex2d((x+i+-560)*scaleX,(y+j+-50)*scaleY);
				glVertex2d((x+i+-750)*scaleX,(y+j+-50)*scaleY);
			glEnd();
		}
	}
}
