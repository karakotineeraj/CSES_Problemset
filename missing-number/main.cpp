#include <iostream>

int main() {
	long long n, temp, sum = 0;

	std::cin >> n;

	for (int i = 1; i < n; ++i) {
		std::cin >> temp;

		sum += temp;
	}

	long long sum_till_n = (n * (n+1)) / 2;
	std::cout << (sum_till_n - sum) << "\n";

	return 0;
}
