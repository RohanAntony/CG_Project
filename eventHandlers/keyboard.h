void keyboard(unsigned char key,int x,int y){
  switch(key){
    case NAME_SCREEN:
      currentFrame=NAME_SCREEN;break;
    case SHELTER:
      currentFrame=SHELTER;break;
    case FOOD:
      currentFrame=FOOD;break;
    case WATER:
      currentFrame=WATER;break;
    case POWER:
      currentFrame=POWER;break;
    case EDUCATION:
      currentFrame=EDUCATION;break;
    case HEALTHCARE:
      currentFrame=HEALTHCARE;break;
    case EXIT:
      currentFrame=EXIT;break;
    case MENU:
    default:
      currentFrame=MENU;
  }
  frameInit(currentFrame);
}
