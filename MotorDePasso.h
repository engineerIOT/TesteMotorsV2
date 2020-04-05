#ifndef MOTORDEPASSO_H_
#define MOTORDEPASSO_H_
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <Pin.h>

class MotorDePasso
{

private:
    Pin pin;
    Pin ledPin_1; // número do pino do LED
    Pin ledPin_2; // número do pino do LED
    Pin ledPin_3; // número do pino do LED
    Pin ledPin_4; // número do pino do LED

    int tempoDePasso = 1800;
    int passos = 0;
    int passosMaximo = 0;
    int direcao = 0;
    int npasso = 1;
    int _faseA;
    int _faseB;
    int _faseC;
    int _faseD;

public:
    MotorDePasso();

    MotorDePasso(int _faseA, int _faseB, int _faseC, int _faseD);

    void definePinosMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passoDisableMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);

    void passo_0_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_1_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_2_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_3_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passo_4_Motor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passoBipolarParaleloMotor(int ledPin_1, int ledPin_2, int ledPin_3, int ledPin_4);
    void passoBipolarSerieMotor(int direcao, int tempoDePasso, int passosMaximo);

    virtual ~MotorDePasso();
};

#endif /* MOTORDEPASSO_H_ */