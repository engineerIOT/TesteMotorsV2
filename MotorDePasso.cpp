#include "MotorDePasso.h"
#include <Arduino.h>
#include "Pin.h"
using namespace std;

MotorDePasso::MotorDePasso()
{
}

void MotorDePasso::definePinosMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  this->ledPin_1 = Pin(ledPin_1);
  this->ledPin_2 = Pin(ledPin_2);
  this->ledPin_3 = Pin(ledPin_3);
  this->ledPin_4 = Pin(ledPin_4);

  Serial.println("INICIO SETUP");
  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_1);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_2);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_3);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_4);
  Serial.println();

  Serial.println("FIM SETUP");

  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
}

void MotorDePasso::passoDisableMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{

  Serial.println("PASSO DISABLE MOTOR");
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_1);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_2);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_3);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.println(ledPin_4);
  Serial.println("FIM PASSO DISABLE MOTOR");
}

void MotorDePasso::passo_0_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
  /*
  Serial.println("PASSO DISABLE MOTOR");
  digitalWrite(ledPin_1, LOW);
  digitalWrite(ledPin_2, LOW);
  digitalWrite(ledPin_3, LOW);
  digitalWrite(ledPin_4, LOW);

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_1);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_2);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.print(ledPin_3);
  Serial.println();

  Serial.print("Valor do ledPin_1:");
  Serial.println(ledPin_4);
  Serial.println("FIM PASSO DISABLE MOTOR");
  */
}

void MotorDePasso::passo_1_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
}

void MotorDePasso::passo_2_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
}

void MotorDePasso::passo_3_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
}

void MotorDePasso::passo_4_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  digitalWrite(ledPin_1, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);
  digitalWrite(ledPin_4, HIGH);
}

void MotorDePasso::passoBipolarParaleloMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4)
{
  Serial.println("MODO BIPOLAR PARALELO MOTOR 1");
  delayMicroseconds(tempoDePasso);

  MotorDePasso::passo_0_Motor(LOW, LOW, LOW, LOW);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_1_Motor(LOW, LOW, LOW, HIGH);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_2_Motor(HIGH, HIGH, LOW, LOW);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_3_Motor(LOW, HIGH, HIGH, LOW);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_4_Motor(LOW, LOW, HIGH, HIGH);
  delay(tempoDePasso);
}

void MotorDePasso::passoBipolarSerieMotor(int direcao, int tempoDePasso, int passosMaximo)
{
  Serial.println("MODO BIPOLAR SÉRIE MOTOR 1");
  MotorDePasso::passo_0_Motor(0, 0, 0, 0);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_1_Motor(1, 0, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_2_Motor(0, 1, 0, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_3_Motor(0, 1, 1, 1);
  delayMicroseconds(tempoDePasso);
  MotorDePasso::passo_4_Motor(1, 0, 1, 0);
  delayMicroseconds(tempoDePasso);
}

MotorDePasso::~MotorDePasso()
{
  // TODO Auto-generated destructor stub
}