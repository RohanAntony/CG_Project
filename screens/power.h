void power(int x,int y,float scaleX=1.0,float scaleY=1.0){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);
  glClearColor(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_GREEN,GLOBAL_BACKGROUND_BLUE,1);
  glClear(GL_COLOR_BUFFER_BIT);
  background(0,-200,1,1,0,0,0,GLOBAL_BACKGROUND_LOWER_RED,GLOBAL_BACKGROUND_LOWER_GREEN,GLOBAL_BACKGROUND_LOWER_BLUE);

  sun(cos(GLOBAL_SUN_DEG*3.14/360.0)*1000,200+sin(GLOBAL_SUN_DEG*3.14/360.0)*200,0.35,0.35,0,0,0,1,0.8,0);
  smoke(-670,GLOBAL_SMOKE_Y_POS,GLOBAL_SMOKE_SCALE,GLOBAL_SMOKE_SCALE);
  powerplant(-500,-100,0.5,0.5);
  windFarm(500,0,0.7,0.7,0,windmillHeadDegree*4);
  solarFarm(1100,-800,0.45,0.45);

  writeBitmapText(1050,550,"X");
  writeBitmapText(0,-510,"Menu");
  writeBitmapText(-880,550,"Power/Electricity");

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void powerMovement(){
  windmillHeadDegree++;
  if(GLOBAL_SUN_DEG < 180){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE+=0.00108;
    GLOBAL_BACKGROUND_GREEN+=0.0016;
  }else if(GLOBAL_SUN_DEG >= 180 && GLOBAL_SUN_DEG < 300){
    GLOBAL_SUN_DEG++;
    GLOBAL_BACKGROUND_BLUE-=0.00108;
    GLOBAL_BACKGROUND_GREEN-=0.0016;
  }

  if(GLOBAL_SMOKE_SCALE > 0){
    GLOBAL_SMOKE_SCALE-=0.007;
    GLOBAL_SMOKE_Y_POS+=10;
  }else{
    GLOBAL_SMOKE_SCALE = 0.4;
    GLOBAL_SMOKE_Y_POS = 100;
  }
}
