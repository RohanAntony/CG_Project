void starterScreen(int x,int y,float scaleX=1.0,float scaleY=1.0){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);

  char college[] = "Dayananda Sagar College of Engineering";
  char department[] = "Department of Computer Science and Engineering";
  char projectStatement[] = "A mini project on";
  char title[] = "SELF SUFFICIENT VILLAGES";

  char author1[] = "Rohan Antony [1DS13CS083]";
  char author2[] = "Rijul Jain [1DS13CS079]";

  char guideText[] = "Guides:";
  char guide1[] = "Prof. Sasidhar B";
  char guide2[] = "Prof. Dhara K N";

  char finalText[] = "Click Here to continue";

  glClearColor(0,0,0,0);
  glClear(GL_COLOR_BUFFER_BIT);

  writeText(-430,450,college,1,0,0);
  writeText(-520,350,department,0,1,0);
  writeText(-210,150,projectStatement,0,0,1);
  writeText(-300,50,title,0,0,1);
  writeText(-550,-150,"By:",0,0,1);
  writeText(-800,-250,author1,0,0,1);
  writeText(-750,-350,author2,0,0,1);
  writeText(450,-150,guideText,0,0,1);
  writeText(350,-250,guide1,0,0,1);
  writeText(350,-350,guide2,0,0,1);

  if(show == 0)
    writeText(-250,-550,finalText,0,0,0);
  else
    writeText(-250,-550,finalText,1,1,1);

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void blinkFinalText(){
  if(show == 0)
    show = 1;
  else if(show == 1)
    show = 0;
}

void introScreen(int x,int y,float scaleX=1.0,float scaleY=1.0){
  int m,n;
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);

  glClearColor(0,0,0,0);
  glClear(GL_COLOR_BUFFER_BIT);

  char introText[] = "A society is considered self sufficient if";
  char point[3][100] = { "1.Their residents value and practice community living.",
                        "2.Their residents are not overly dependent on government or corporate.",
                        "3.They are self sufficient when it comes to basic resources like"};
  char frame[6][30] = { "a) Food [1]",
                        "b) Water [2]",
                        "c) Shelter [3]",
                        "d) Power/Electricity [4]",
                        "e) Education [5]",
                        "f) Healthcare [6]"
                      };


  writeBitmapText(-800,500,introText,1,0,0);
  for(m=0,n=400;m<3;m++,n-=100){
    writeBitmapText(-700,n,point[m],1,0,0);
  }
  for(m=0,n=100;m<6;m++,n-=100){
    writeBitmapText(-600,n,frame[m],1,0,0);
  }

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void exit(){
  glClearColor(0,0,0,1);
  glClear(GL_COLOR_BUFFER_BIT);
  writeText(-550,-100,"The End",1,1,1,0.5);
}
