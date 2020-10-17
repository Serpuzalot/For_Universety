#include <iostream>
void task19() {
	int height, weight, Nweight, need;
input:std::cout << " Input your height and press <Enter> " << std::endl;
	std::cin >> height;
	std::cout << " Input your weight and press <Enter> " << std::endl;
	std::cin >> weight;
	if (height <= 0 || weight <= 0) {
		std::cout << "Input error" << std::endl;
		goto input;//Возвращает на 4 строку из-за неправильного ввода даных
	}
	Nweight = height - 100;
	if (weight == Nweight) {
		std::cout << " Your weight is nice " << std::endl;
	}
	else {
		if (weight < Nweight) {
			need = Nweight - weight;
			std::cout << " You need to gain : ";
			std::cout << need;
		}
		else {
			need = weight - Nweight;
			std::cout << " You need to lose weight on: ";
			std::cout << need;
		}
	}
	
}
void task23() {
	int i, num;
input:std::cout << "Input number ( 1 to 99  ) and press <Enter>" << std::endl;
	std::cin >> num;
	if (num < 1 || num >= 100) {
		std::cout << "Input error" << std::endl;
		std::cin.ignore();
		goto input;//Возврат к вводу значения (32 строка)
	}
	else {
		if (num != 11 && num % 10 == 1) {
			std::cout << num;
			std::cout << " копейка" << std::endl;
		}
		else {
			if (num != 12 && num != 13 && num != 14) {
				if (num % 10 == 2 || num % 10 == 3 || num % 10 == 4) {
					std::cout << num;
					std::cout << " копейки" << std::endl;
				}
				else {
					std::cout << num;
					std::cout << " копеек" << std::endl;
				}
			}
		}
	}

}
int main() {
	setlocale(LC_ALL, "Russian");
	task19();
	task23();
}