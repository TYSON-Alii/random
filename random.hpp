#include <stdlib.h>
#include <vector>
struct {
#if !defined(Random_Capitalize)
	int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
	int randint(int end) { return std::rand() % end; };
	int randint() { return std::rand() % INT_MAX; };

	const bool randbool() { return std::rand() % 2 == 0 ? false : true; };

	const char randchar() { return char(std::rand() % 256 - 128); };
	const char randletter() { return char(randbool() ? randint(65, 91) : randint(97,123)); };
	const char randsymbol() { return char( randbool() ? randint(33, 48) : randbool() ? randint(58, 65) : randbool() ? randint(91, 97) : randint(123, 127) ); };

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
#else
	int randInt(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
	int randInt(int end) { return std::rand() % end; };
	int randInt() { return std::rand() % INT_MAX; };

	const bool randBool() { return std::rand() % 2 == 0 ? false : true; };

	const char randChar() { return char(std::rand() % 256 - 128); };
	const char randLetter() { return char(randBool() ? randInt(65, 91) : randInt(97, 123)); };
	const char randSymbol() { return char(randBool() ? randInt(33, 48) : randBool() ? randInt(58, 65) : randBool() ? randInt(91, 97) : randInt(123, 127)); };

	int randInRange(int limit, int start = 0, int step = 1) {
		std::vector<int> l;
		for (int i = start; i < limit; i += step)
			l.push_back(i);
		return choice(l);
	};
	std::vector<int> randRange(int limit, int begin, int end) {
		std::vector<int> l;
		for (int i = 0; i < limit; i++)
			l.push_back(randInt(begin, end));
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
#endif
} random;

#if defined(import_randint)
#if !defined(Random_Capitalize)
int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
int randint(int end) { return std::rand() % end; };
int randint() { return std::rand() % INT_MAX; };
#else
int randInt(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
int randInt(int end) { return std::rand() % end; };
int randInt() { return std::rand() % INT_MAX; };
#endif
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
#if !defined(Random_Capitalize)
bool randbool() { return std::rand() % 2 == 0 ? false : true; };
#else
bool randbool() { return std::rand() % 2 == 0 ? false : true; };
#endif
#endif

#if defined(import_randchar)
#if !defined(Random_Capitalize)
char randchar() { return char(std::rand() % 256 - 128); };
#else
char randchar() { return char(std::rand() % 256 - 128); };
#endif
#endif

#if defined(import_randletter)
#if !defined(Random_Capitalize)
char randletter() { return char(randbool() ? randint(65, 91) : randint(97, 123)); };
#else
char randletter() { return char(randbool() ? randint(65, 91) : randint(97, 123)); };
#endif
#endif

#if defined(import_symbol)
#if !defined(Random_Capitalize)
char randsymbol() { return char(randbool() ? randint(33, 48) : randbool() ? randint(58, 65) : randbool() ? randint(91, 97) : randint(123, 127)); };
#else
char randsymbol() { return char(randbool() ? randint(33, 48) : randbool() ? randint(58, 65) : randbool() ? randint(91, 97) : randint(123, 127)); };
#endif
#endif

#if defined(import_randinrange)
#if !defined(Random_Capitalize)
int randinrange(int limit, int start = 0, int step = 1) {
	std::vector<int> l;
	for (int i = start; i < limit; i += step)
		l.push_back(i);
	return choice(l);
};
#else
int randinrange(int limit, int start = 0, int step = 1) {
	std::vector<int> l;
	for (int i = start; i < limit; i += step)
		l.push_back(i);
	return choice(l);
};
#endif
#endif

#if defined(import_randrange)
#if !defined(Random_Capitalize)
std::vector<int> randrange(int limit, int begin, int end) {
	std::vector<int> l;
	for (int i = 0; i < limit; i++)
		l.push_back(randint(begin, end));
	return l;
};
#else
std::vector<int> randrange(int limit, int begin, int end) {
	std::vector<int> l;
	for (int i = 0; i < limit; i++)
		l.push_back(randint(begin, end));
	return l;
};
#endif
#endif
