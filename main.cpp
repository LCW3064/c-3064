#include "CoffeeMachine.h"

int main() {
	CoffeeMachine java(5, 10);
	cout << "커피 머신 상태\n";
	cout << "커피량: 5, 물량 : 10으로 초기화\n\n";
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.fill();
	java.show();
}