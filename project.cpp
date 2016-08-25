#include <GL/glut.h>
#include <math.h>
#include <string.h>

#include "globals.h"
#include "helper.h"
#include "screens/starter.h"

//shelter
#include "components/house.h"
#include "components/road.h"
#include "components/sun.h"

#include "background.h"

#include "components/tree.h"

#include "components/cloud.h"

//food
#include "components/sugarcane.h"
#include "components/plantation.h"
#include "components/rain.h"
#include "components/crop.h"
#include "components/silo.h"
#include "components/moon.h"
#include "components/well.h"
#include "components/rainWaterHouse.h"
#include "components/river.h"

#include "components/mountain.h"

//power
#include "components/powerplant.h"
#include "components/windFarm.h"
#include "components/solarFarm.h"
#include "components/smoke.h"

//education
#include "components/school.h"
#include "components/flagpost.h"
#include "components/schoolBus.h"

//healthcare
#include "components/hospital.h"
#include "components/medStore.h"
#include "components/ambulance.h"

//screens
#include "screens/food.h"
#include "screens/water.h"
#include "screens/shelter.h"
#include "screens/power.h"
#include "screens/healthcare.h"
#include "screens/education.h"

#include "eventHandlers/init.h"
#include "eventHandlers/display.h"
#include "eventHandlers/idleFunc.h"
#include "eventHandlers/keyboard.h"
#include "eventHandlers/mouseClick.h"

// background(0,-300,1,1,0,0,0,0.5,0.38,0.13);
// house4(-10,-130,0.25,0.35);

int main(int argc,char *argv[]){
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowPosition(0,0);
  glutInitWindowSize(WIDTH_OF_VIEWPORT,HEIGHT_OF_VIEWPORT);
  glutCreateWindow("Project");
  init();
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  glutIdleFunc(idleFunc);
  glutMouseFunc(mouseClick);
  glutMainLoop();
  return 0;
}
