#define NAME_SCREEN 'N'
#define MENU '0'
#define FOOD '1'
#define WATER '2'
#define SHELTER '3'
#define POWER '4'
#define EDUCATION '5'
#define HEALTHCARE '6'
#define EXIT '7'

int ITERATION_ROTATIONS = 5;
int GLOBAL_SUN_DEG;
int GLOBAL_CLOUD1_POSITION,GLOBAL_CLOUD2_POSITION;
int GLOBAL_DISPLAY_RAIN = 0;
float GLOBAL_BACKGROUND_RED = 0.95,GLOBAL_BACKGROUND_GREEN = 0.95,GLOBAL_BACKGROUND_BLUE = 0.7;
float GLOBAL_BACKGROUND_LOWER_RED = 0.6,GLOBAL_BACKGROUND_LOWER_GREEN = 0.9,GLOBAL_BACKGROUND_LOWER_BLUE = 0.6;
float GLOBAL_CROP_SCALE = 0.4;
float GLOBAL_SMOKE_SCALE = 0.4;
int GLOBAL_SMOKE_Y_POS = 100;
int GLOBAL_SCHOOL_BUS_X_POS = 1200;
int GLOBAL_AMBULANCE_X_POS = -1200;
int GLOBAL_RAIN_POSITION = 0,GLOBAL_RAIN_WAIT_ROTATION = 0;

int i,j,k,deg,delay1,delay2;
char *p;

char currentFrame = NAME_SCREEN;
