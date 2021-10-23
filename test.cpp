#include <iostream>
#define import_randint
#include "random.hpp"

using namespace std;

int main() {
	cout << randint(5, 10) << '\n';
	cout << random.choice({9,3,54,8}) << '\n';
};
