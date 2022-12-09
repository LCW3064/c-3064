#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int a, int b) {
	coffee = a;
	water = b;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
	cout << "에스프레소 1잔\n";
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
	cout << "아메리카노 1잔\n";
}
void CoffeeMachine::show() {
	cout << "<커피 머신 채움>\n";
	cout << "커피 머신 상태, 커피:" << coffee << "\t물:" << water << endl << endl;
}
void CoffeeMachine::fill() {
	coffee = 10; water = 10;
}
