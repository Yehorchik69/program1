#include <iostream>
#include <iomanip>

int main() {
	int count = 0;
	for (int i = 0; i <= 999999; ++i) {
		int n = i;
		int d5 = n % 10; n /= 10;
		int d4 = n % 10; n /= 10;
		int d3 = n % 10; n /= 10;
		int d2 = n % 10; n /= 10;
		int d1 = n % 10; n /= 10;
		int d0 = n % 10;

		int sum1 = d0 + d1 + d2;
		int sum2 = d3 + d4 + d5;

		if (sum1 == sum2) {
			std::cout << std::setfill('0') << std::setw(6) << i << std::endl;
			++count;
		}
	}
	std::cout << "Total lucky tickets: " << count << std::endl;
	return 0;
}

