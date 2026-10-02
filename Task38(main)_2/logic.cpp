#include "logic.h";

int reverse(int number) {
	bool flag = false;

	if (number < 0) {
		number = -number;
		flag = true;
	}

	int result = 0;
	int count = 0;

	while (number > 0) {

		if (number % 10 == 0) {
			count++;
		}
		else {
			break;
		}
		number /= 10;
	}


	while (number > 9) {
		int digit = number % 10;
		result += digit;
		result *= 10;

		number /= 10;
	}

	result += number;

	result *= pow(10, count);

	return flag ? -result : result;
}