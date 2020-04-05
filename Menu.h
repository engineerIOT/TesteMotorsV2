#ifndef MENU_H_
#define MENU_H_
#include <Arduino.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



class Menu {
private:
   char tecla;

public:
    Menu();
    
	
    virtual ~Menu();
};

#endif /* MENU_H_ */