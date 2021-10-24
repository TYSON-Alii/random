## random
Python random library for c++

```cpp
#include <iostream>
#define import_randInt
//#define import_rand_all
#include "random.hpp"

using namespace std;

int main() {
	cout << randint(5, 10) << '\n';
	cout << random.choice({9,3,54,8}) << '\n';
};
```
