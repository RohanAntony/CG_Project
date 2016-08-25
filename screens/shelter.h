void shelter(int x,int y,float scaleX=1.0,float scaleY=1.0,int width=1000,int height=600){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);

  glClearColor(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_GREEN,GLOBAL_BACKGROUND_BLUE,1);
  glClear(GL_COLOR_BUFFER_BIT);

  background(0,-200,1,1,0,0,0,GLOBAL_BACKGROUND_LOWER_RED,GLOBAL_BACKGROUND_LOWER_GREEN,GLOBAL_BACKGROUND_LOWER_BLUE);

  tree1(-310,-60,0.2,0.3);
  tree1(270,-30,0.15,0.25);
  tree1(310,-60,0.18,0.28);
  house1(-650,-100,0.35,0.35);
  house2(-10,-60,0.35,0.35);
  house3(650,-50,0.35,0.35);
  sun(cos(GLOBAL_SUN_DEG*3.14/360.0)*1000,200+sin(GLOBAL_SUN_DEG*3.14/360.0)*200,0.35,0.35,0,0,0,1,0.8,0);
  cloud(GLOBAL_CLOUD1_POSITION,400,0.5,0.5);
  if(GLOBAL_DISPLAY_RAIN){
    //rain animation
    rain(450,200+GLOBAL_RAIN_POSITION,0.7,0.7);
  }

  // carSide(0,0);
  road(0,-310,1.2,0.6);

  writeBitmapText(1050,550,"X");
  writeBitmapText(0,-510,"Menu");
  writeBitmapText(-880,550,"Shelter");

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void shelterMove(){
  if(GLOBAL_SUN_DEG < 180){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE+=0.00108;
    GLOBAL_BACKGROUND_GREEN+=0.0016;
  }else if(GLOBAL_SUN_DEG >= 180 && GLOBAL_SUN_DEG < 300){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE-=0.00108;
    GLOBAL_BACKGROUND_GREEN-=0.0016;
  }

  if(GLOBAL_CLOUD1_POSITION > 400){
    GLOBAL_CLOUD1_POSITION-=10;
  }else{
    GLOBAL_DISPLAY_RAIN = 1;
  }

  if(GLOBAL_RAIN_WAIT_ROTATION >= ITERATION_ROTATIONS && GLOBAL_RAIN_POSITION == -50){
    GLOBAL_RAIN_WAIT_ROTATION = 0;
    GLOBAL_RAIN_POSITION = 50;
  }else if(GLOBAL_RAIN_WAIT_ROTATION >= ITERATION_ROTATIONS && GLOBAL_RAIN_POSITION == 50){
    GLOBAL_RAIN_WAIT_ROTATION = 0;
    GLOBAL_RAIN_POSITION = -50;
  }else{
    GLOBAL_RAIN_WAIT_ROTATION++;
  }
}
