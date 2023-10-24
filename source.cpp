#include <iostream>

int main() {
	int n = 0;
	do {
		std::cin >> n;
	} while (n<0 || n>2000000);
	int count = 0;
	int top = n;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = n * 3 + 1;
		}
		++count;
		if (n > top) {
			top = n;
		}
	}
	std::cout << count << " " << top << std::endl;
	return 0;
}
