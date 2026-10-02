#include "test.h";

void test(int number, bool expected, string test_name) {
	int actual = is_palindrome(number);
	string msg = test_name + " ---> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
}

void run_all_tests() {
	test(121, 1, "test01");
	test(-121, 1, "test02");
	test(112211000, 0, "test03");
	test(10, 0, "test04");
	test(1234, 0, "test05");
	test(4321, 0, "test06");
	test(0, 0, "test07");
	test(1211, 0, "test08");
	test(1121, 0, "test09");
}