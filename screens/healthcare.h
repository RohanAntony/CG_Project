void healthcare(int x,int y,float scaleX=1.0,float scaleY=1.0){
  glTranslatef(x,y,0);
  glScalef(scaleX,scaleY,1);
  glClearColor(GLOBAL_BACKGROUND_RED,GLOBAL_BACKGROUND_GREEN,GLOBAL_BACKGROUND_BLUE,1);
  glClear(GL_COLOR_BUFFER_BIT);
  background(0,-200,1,1,0,0,0,GLOBAL_BACKGROUND_LOWER_RED,GLOBAL_BACKGROUND_LOWER_GREEN,GLOBAL_BACKGROUND_LOWER_BLUE);


  moon(cos(GLOBAL_SUN_DEG*3.14/360.0)*1000,200+sin(GLOBAL_SUN_DEG*3.14/360.0)*200,0.35,0.35);
  road(0,-310,1.2,0.6);

  tree1(-400,-150,0.2,0.2);
  tree1(-290,-150,0.2,0.2);
  tree1(-180,-150,0.2,0.2);
  tree1(770,-130,0.19,0.19);
  tree1(830,-150,0.2,0.2);
  hospital(650,-100,0.45,0.45);
  medStore(-700,-140,0.4,0.4);
  ambulance(GLOBAL_AMBULANCE_X_POS,-200,0.2,0.2);
  cloud(100,300,0.5,0.5);
  cloud(300,340,0.5,0.5);
  //cloud

  writeText(-700,-100,"MedStore");
  writeBitmapText(1050,550,"X");
  writeBitmapText(0,-510,"Menu");
  writeBitmapText(-880,550,"Healthcare");

  glScalef(1/scaleX,1/scaleY,1);
  glTranslatef(-x,-y,0);
}

void healthcareMovement(){
  if(GLOBAL_AMBULANCE_X_POS < 700)
    GLOBAL_AMBULANCE_X_POS+=20;
  if(GLOBAL_SUN_DEG > 100)
    GLOBAL_SUN_DEG -= 1;
}
