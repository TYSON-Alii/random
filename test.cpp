#include <iostream>
#define Random_Capitalize
#define import_randint
#include "random.hpp"

using namespace std;

int main() {
	cout << random.randInt(5, 10) << '\n';
	cout << random.choice({9,3,54,8}) << '\n';
};
