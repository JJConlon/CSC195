#include <iostream>
#include "Main.h"

//int max(int i1, int i2) {
//	return (i1 > i2) ? i1 : i2;
//}

template<typename T>
T max(T i1, T i2) {
	return (i1 > i2) ? i1 : i2;
}

template<typename T1, typename T2>
T1 max(T1 i1, T2 i2) {
	return (i1 > i2) ? i1 : i2;
}

template<typename T>
T min(T i1, T i2) {
	return (i1 < i2) ? i1 : i2;
}

template<typename T>
T sqr(T v) {
	return v * v;
}

int main() {
	pointi_t pi(4, 6);
	pointf_t pf(3.5f, 10.1f);

	array<float, 10> n;
	array<Point<int>, 10> points;
	n[4] = 45.5f;


	std::cout << max<int>(10, 24) << std::endl;
	std::cout << max<float>(3.5f, 6.7f) << std::endl;
	std::cout << max<float, int>(3.5f, 18) << std::endl;
}