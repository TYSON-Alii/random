#include <stdlib.h>
#include <vector>
struct {
	int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
	template <typename T>
	T choice(std::initializer_list<T> v) {
		std::vector<T> l = v;
		auto s = std::rand() % l.size();
		return l[s];
	};
} random;

#if defined(import_randint)
int randint(int begin, int end) { return (std::rand() % (end - begin)) + begin; };
#endif
#if defined(import_choice)
template <typename T>
T choice(std::initializer_list<T> v) {
	std::vector<T> l = v;
	auto s = std::rand() % l.size();
	return l[s];
};
#endif
