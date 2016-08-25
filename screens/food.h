void food(int x,int y,float scaleX=1.0,float scaleY=1.0){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);
  glClearColor(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_GREEN,GLOBAL_BACKGROUND_BLUE,1);
  glClear(GL_COLOR_BUFFER_BIT);
  background(0,-200,1,1,0,0,0,GLOBAL_BACKGROUND_LOWER_RED,GLOBAL_BACKGROUND_LOWER_GREEN,GLOBAL_BACKGROUND_LOWER_BLUE);

  moon(cos(GLOBAL_SUN_DEG*3.14/360.0)*1000,200+sin(GLOBAL_SUN_DEG*3.14/360.0)*200,0.35,0.35);
  sugarcaneFarm(-370,-220,1,GLOBAL_CROP_SCALE);
  cropFarm(150,-200,1,GLOBAL_CROP_SCALE);
  cloud(GLOBAL_CLOUD1_POSITION,400,0.5,0.5);
  cloud(GLOBAL_CLOUD1_POSITION+300,400,0.5,0.5);

  if(GLOBAL_DISPLAY_RAIN)
    rain(-100,150+GLOBAL_RAIN_POSITION);

  tree(500,100,0.3,0.3);
  tree(850,50,0.35,0.35);
  tree(620,-150,0.45,0.45);
  silo(-750,-40,0.5,0.5);
  silo(-850,-140,0.6,0.6);

  writeBitmapText(1050,550,"X");
  writeBitmapText(0,-510,"Menu");
  writeBitmapText(-880,550,"Food");

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void foodMovement(){
  if(GLOBAL_CLOUD1_POSITION >= -250)
    GLOBAL_CLOUD1_POSITION-=10;
  else if(GLOBAL_CROP_SCALE < 0.8){
    GLOBAL_BACKGROUND_LOWER_RED -= 0.005;
    GLOBAL_BACKGROUND_LOWER_GREEN -= 0.005;
    GLOBAL_BACKGROUND_LOWER_BLUE -= 0.005;
    GLOBAL_DISPLAY_RAIN = 1;
    GLOBAL_CROP_SCALE += 0.01;
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
