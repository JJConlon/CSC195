#include <iostream>
#include <time.h>

void func0() {

}

void func1(int& i) {
	i = 10;
}

void func2(std::string& text) {
	//
}

void func3(int* i) {
	if (i) {
		std::cout << i << std::endl;
	}
}

int Random(int max) {
	int r = rand() % max + 1;
	return r;
}

class A {
public:
	A() : i(0) { }
	A(int v) : i{v} { }

	void Set(int v) { i = v; }
	int Get() const { return i; }
	int& GetRef() { return i; }
	const int& GetConstRef() const { return i; }
	int* GetPtr() { return &i; }

	int& operator [] (int index) { return m_elements[index]; }
	const int& operator [] (int index) const { return m_elements[index]; }

private:
	int i;
	int m_elements[10];
};

void func4(const A& a) {
	a.GetConstRef();
	std::cout << a[2] << std::endl;
}

int main() {
	A a{10};
	a.Set(12);

	a[3] = 12;
	
	a.GetRef() = 23;

	std::cout << a.Get() << std::endl;

	srand(static_cast<unsigned int>(time(NULL)));
	std::cout << Random(10) << std::endl;

	int i = 0;
	func1(i);
	std::cout << i << std::endl;

	std::string text = "Hello!";
	func2(text);

	time_t start = time(NULL);
	for (int i = 0; i < 1000000; i++) {
		func2(text);
	}
	
	time_t end = time(NULL);
	std::cout << end - start << std::endl;

	int* p = &i;
	func3(p);
}