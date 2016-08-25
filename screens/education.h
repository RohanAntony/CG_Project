void education(int x,int y,float scaleX=1.0,float scaleY=1.0){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);
  glClearColor(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_GREEN,GLOBAL_BACKGROUND_BLUE,1);
  glClear(GL_COLOR_BUFFER_BIT);
  background(0,-200,1,1,0,0,0,GLOBAL_BACKGROUND_LOWER_RED,GLOBAL_BACKGROUND_LOWER_GREEN,GLOBAL_BACKGROUND_LOWER_BLUE);

  sun(cos(GLOBAL_SUN_DEG*3.14/360.0)*1000,200+sin(GLOBAL_SUN_DEG*3.14/360.0)*200,0.35,0.35,0,0,0,1,0.8,0);
  cloud(GLOBAL_CLOUD1_POSITION,400,0.5,0.5);
  cloud(GLOBAL_CLOUD2_POSITION,300,0.4,0.4);

  road(0,-310,1.2,0.6);

  school(-1500,-50,0.4,0.4);
  flagPost(-100,-80,0.3,0.3);
  schoolBus(GLOBAL_SCHOOL_BUS_X_POS,-230,-0.3,0.3);
  //inner view

  writeBitmapText(1050,550,"X");
  writeBitmapText(0,-510,"Menu");
  writeBitmapText(-880,550,"Education");

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void educationMovement(){
  if(GLOBAL_SUN_DEG < 180){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE+=0.00108;
    GLOBAL_BACKGROUND_GREEN+=0.0016;
  }else if(GLOBAL_SUN_DEG >= 180 && GLOBAL_SUN_DEG < 300){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE-=0.00108;
    GLOBAL_BACKGROUND_GREEN-=0.0016;
  }
  if(GLOBAL_CLOUD1_POSITION >= -700)
    GLOBAL_CLOUD1_POSITION-=8;
  if(GLOBAL_CLOUD2_POSITION <= 1200)
    GLOBAL_CLOUD2_POSITION+=10;
  if(GLOBAL_SCHOOL_BUS_X_POS >= -600)
    GLOBAL_SCHOOL_BUS_X_POS -= 15;
}
