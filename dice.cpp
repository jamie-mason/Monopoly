#include "dice.h"
#include <cstdlib>
#include <ctime>
/*consider useing unsigned int dice instead of int dice because you cannot roll a negative value on a die*/
Dice::Dice(){
	sides = 6;
}

int Dice::rollDice(){

	int roll = 0;
	roll = rand() % sides + 1;
	
	return roll;
}
