#include "test.h";

void test(int number, bool expected, string test_name) {
	bool actual = is_palindrome(number);
	string msg = test_name + " ---> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
}

void run_all_tests() {
	test(121, true, "test01");
	test(5, true, "test02");
	test(555, true, "test03");
	test(-555, false, "test04");
	test(-121, false, "test05");
	test(112211000, false, "test06");
	test(10, false, "test07");
	test(1234, false, "test08");
	test(4321, false, "test09");
	test(0, false, "test10"); 
	test(1211, false, "test11");
	test(1121, false, "test12");
}