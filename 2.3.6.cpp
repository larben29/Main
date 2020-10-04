#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

class BoundedRandom {
	int low;
	int high;
public:
	BoundedRandom(int l, int h) : low(l), high(h) {}
	int operator () () { return rand() % (high - low + 1) + low; }
};

int main() {
	int* arr;
	size_t size;
	std::cout << "Array size: ";
	std::cin >> size;

	arr = new int[size];
	srand(time(NULL));
	std::generate_n(arr, size, BoundedRandom(0, 100));

	std::cout << "Array:" << std::endl;
	std::copy(arr, arr + size, std::ostream_iterator<int>(std::cout, " "));
	
	delete[] arr;
	return 0;
}