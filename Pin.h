#ifndef PIN_H_
#define PIN_H_

class Pin
{

private:
    int _pin;  //Guarda o número do pino
    int _mode; //Guarda o modo de operação

public:
    Pin();
    Pin(int pin);               //Número do pino
    void mode(int mode);        //Modo de operação
    void on();                  //Ativa o pino;
    void off();                 //Desativa o pino;
    void blink(int duration);   //Ativa o pino por um determinado tempo
    void ativo(int duration);   //Ativa o pino por um determinado temp
    void inativo(int duration); //Ativa o pino por um determinado temp
    void passo1(int _pin);
    virtual ~Pin();
};

#endif /*PIN_H_ */