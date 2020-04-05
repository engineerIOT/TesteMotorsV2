#include "Pin.h"
#include "MotorDePasso.h"


using namespace std;
MotorDePasso *motordepasso;
Pin *pin;
//fases do motor
Pin FASE_A(2);
Pin FASE_B(3);
Pin FASE_C(4);
Pin FASE_D(5);

void setup()
{

  Serial.begin(9600);
  FASE_A.mode(OUTPUT);
  FASE_B.mode(OUTPUT);
  FASE_C.mode(OUTPUT);
  FASE_D.mode(OUTPUT);
  motordepasso = new MotorDePasso();
  pin = new Pin();
  motordepasso->definePinosMotor(2, 3, 4, 5);
}

void loop()
{

  
  
  FASE_A.blink(1800);
  FASE_B.blink(1800);
  FASE_C.blink(1800);
  FASE_D.blink(1800);

  motordepasso->passoDisableMotor(2,3,4,5);


}
