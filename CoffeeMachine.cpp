#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int a, int b) {
	coffee = a;
	water = b;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
	cout << "���������� 1��\n";
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
	cout << "�Ƹ޸�ī�� 1��\n";
}
void CoffeeMachine::show() {
	cout << "<Ŀ�� �ӽ� ä��>\n";
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << endl << endl;
}
void CoffeeMachine::fill() {
	coffee = 10; water = 10;
}
