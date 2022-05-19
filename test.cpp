#include <iostream>
#include "random.hpp"

using namespace std;

int main() {
	auto& r = random; // aliasing
	r.randInt(5, 10);
	random.randFloat();
	if (random.randBool())
		cout << random.rand<unsigned long long>(50) << '\n';
	random.choice({9,3,54,8});
	random.choice({"selam", "meraba", "wow"});
	string falanke = "filanke";
	random.choice(falanke);
	// or random.choice("filanke"s);
	random.randRange(50, 10);
	cout << random.randChar() << '\n';
	cout << random.randLetter() << '\n';
	cout << random.randSymbol() << '\n';
};
