#include "swap.h"
void swap (int number1, int number2) {
	int temp = number1;
	number1 = number2;
	number2 = temp;
	cout << "number1 = " << number1 << "," << "numbre2= " << number2 << endl;
}