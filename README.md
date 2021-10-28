## random
Python random library for c++

```cpp
#include <iostream>
#define Random_Capitalize
//#define import_rand_all
#include "random.hpp"

using namespace std;
int main() {
	cout << randFloat() << '\n';
	cout << randInt(5, 10) << '\n';
	cout << choice({"elma","armut","cilek"}) << '\n';
};
```
