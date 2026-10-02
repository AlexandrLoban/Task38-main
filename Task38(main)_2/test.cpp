#include "test.h";

void test(int number, int expected, string test_name) {
	int actual = reverse(number);
	string msg = test_name + " ---> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
}


void run_all_tests() {
	test(12345, 54321, "test01");
	test(-12345, -54321, "test02");
	test(12300, 32100, "test03");
	test(-12300, -32100, "test04");
	test(10000, 10000, "test05");
	test(-10000, -10000, "test05");
	test(0, 0, "test06");
	test(6, 6, "test07");
	test(-6, -6, "test08");
}