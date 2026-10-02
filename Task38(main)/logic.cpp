#include "logic.h" 

bool is_palindrome(int number) {
    if (number <= 0) {
        return false;
    }
    if (number <= 9) {
        return true;
    }

    int reverse = 0;
    int number_default = number;

    while (number > 0) {
       
        reverse = reverse * 10 + number % 10;
        number /= 10; 
    }

    return reverse == number_default;
}
