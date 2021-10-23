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

	int randinrange(int limit, int start = 0, int step = 1) {
		std::vector<int> l;
		for (int i = start; i < limit; i += step)
			l.push_back(i);
		return choice(l);
	};
	std::vector<int> randrange(int limit, int begin, int end) {
		std::vector<int> l;
		for (int i = 0; i < limit; i++)
			l.push_back(randint(begin, end));
		return l;
	};

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

#if defined(import_bool)
bool randbool() { return std::rand() % 2 == 0 ? false : true; };
#endif

#if defined(import_randchar)
char randchar() { return char(std::rand() % 256 - 128); };
#endif

#if defined(import_randletter)
char randletter() { return char(randbool() ? randint(65, 91) : randint(97, 123)); };
#endif

#if defined(import_symbol)
char randsymbol() { return char(randbool() ? randint(33, 48) : randbool() ? randint(58, 65) : randbool() ? randint(91, 97) : randint(123, 127)); };
#endif

#if defined(import_randinrange)
int randinrange(int limit, int start = 0, int step = 1) {
	std::vector<int> l;
	for (int i = start; i < limit; i += step)
		l.push_back(i);
	return choice(l);
};
#endif

#if defined(import_randrange)
std::vector<int> randrange(int limit, int begin, int end) {
	std::vector<int> l;
	for (int i = 0; i < limit; i++)
		l.push_back(randint(begin, end));
	return l;
};
#endif
