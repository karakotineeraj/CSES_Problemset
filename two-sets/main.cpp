#include <iostream>

int main() {
	long long n;

	std::cin >> n;

	long long sum = n * (n + 1) / 2;
	if (sum%2) {
		std::cout << "NO\n";
		return 0;
	}

	std::cout << "YES\n";

	if (n%2) {
		std::cout << n/2 + 1 << "\n";
		sum = n;
	} else {
		std::cout << n/2 << "\n";
		sum = n + 1;
	}

	for (long long i = 1; i <= sum/2; i += 2) {
		std::cout << i << " " << sum - i << " ";
	}

	if (n%2) {
		std::cout << "\n" << n/2 << "\n" << n << " ";
	} else {
		std::cout << "\n" << n/2 << "\n";
	}

	for (long long i = 2; i <= sum/2; i += 2) {
		std::cout << i << " " << sum - i << " ";
	}

	std::cout << "\n";
	return 0;
}
