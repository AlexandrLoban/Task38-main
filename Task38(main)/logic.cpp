#include "logic.h" 
bool number_is_a_palindrome(int number) {
    if (number < 0) {
        number = -number;
    }
    if (number <= 9) {
        return false;
    }

    int reverse = 0;
    int number_default = number;
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
    
    while (number > 0) {
       
        reverse = reverse * 10 + number % 10;
        number /= 10; 
    }

    reverse *= pow(10, count);
    return reverse == number_default;
}
