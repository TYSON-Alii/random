#include <stdlib.h>
#include <vector>
struct {
	int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
	int randint(int end) { return std::rand() % end; };
	int randint() { return std::rand() % INT_MAX; };

	bool randbool() { return std::rand() % 2 == 0 ? false : true; };

	char randchar() { return char(std::rand() % 256 - 128); };
	char randletter() { return char(randbool() ? randint(65, 91) : randint(97,123)); };
	char randsymbol() { return char( randbool() ? randint(33, 48) : randbool() ? randint(58, 65) : randbool() ? randint(91, 97) : randint(123, 127) ); };

	template <typename T>
	T choice(std::initializer_list<T> v) {
		std::vector<T> l = v;
		auto s = std::rand() % l.size();
		return l[s];
	};
	template <typename T>
	T choice(std::vector<T> v) {
		auto s = std::rand() % v.size();
		return v[s];
	};
} random;

#if defined(import_randint)
int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
int randint(int end) { return std::rand() % end; };
int randint() { return std::rand() % INT_MAX; };
#endif
#if defined(import_choice)
template <typename T>
T choice(std::initializer_list<T> v) {
	std::vector<T> l = v;
	auto s = std::rand() % l.size();
	return l[s];
};
template <typename T>
T choice(std::vector<T> v) {
	auto s = std::rand() % v.size();
	return v[s];
};
#endif

