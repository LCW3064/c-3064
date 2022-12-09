#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
public:
	void drinkEspresso();
	void drinkAmericano();
	void show();
	void fill();
	CoffeeMachine(int a, int b);
};
