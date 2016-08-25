void mouseClick(int btn,int state,int x,int y){
  if(btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
    if(currentFrame >= FOOD && currentFrame <= HEALTHCARE){
      if(x>=452 && y>=539 && x<=505 && y<=556){
        currentFrame = MENU;
      }else if(x>=979 && x<=992 && y>=9 && y<=24){
        currentFrame = EXIT;
      }
    }else if(currentFrame == MENU){
      int x2Max[] = {224,235,243,344,274,277};
      int y2Min[] = {230,280,330,380,430,480};
      char frameNumber[] = {FOOD,WATER,SHELTER,POWER,EDUCATION,HEALTHCARE};
      for(i=0;i<6;i++)
        if(x>=150 && x<=x2Max[i] && y>=y2Min[i] && y<=y2Min[i]+20)
          currentFrame = frameNumber[i];
    }else if(currentFrame == NAME_SCREEN){
      if(x>=379 && y>=559 && x<=616 && y<=575)
        currentFrame = MENU;
    }
    frameInit(currentFrame);
  }
}
