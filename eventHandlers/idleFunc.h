void idleFunc(){
  for(delay1=0;delay1<2000;delay1++)
    for(delay2=0;delay2<10000;delay2++);
  // usleep(10000);
  switch(currentFrame){
    case NAME_SCREEN:
      blinkFinalText();break;
    case SHELTER:
      shelterMove();break;
    case FOOD:
      foodMovement();break;
    case WATER:
      waterMovement();break;
    case POWER:
      powerMovement();break;
    case EDUCATION:
      educationMovement();break;
    case HEALTHCARE:
      healthcareMovement();break;
  }
  glutPostRedisplay();
}
