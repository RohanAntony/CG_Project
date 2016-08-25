void display(){
  glClear(GL_COLOR_BUFFER_BIT);
  switch(currentFrame){
    case NAME_SCREEN:
      starterScreen(0,0);break;
    case SHELTER:
      shelter(0,0);break;
    case FOOD:
      food(0,0);break;
    case WATER:
      water(0,0);break;
    case POWER:
      power(0,0);break;
    case EDUCATION:
      education(0,0);break;
    case HEALTHCARE:
      healthcare(0,0);break;
    case EXIT:
      exit();break;
    case MENU:
    default:
      introScreen(0,0);
  }
  glutSwapBuffers();
}
