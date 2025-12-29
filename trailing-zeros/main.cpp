#include <iostream>

#define M 1000000007

int main() {
	long long n;

	std::cin >> n;

	long long ans = 0;
	long long pow_five = 5;

	while (pow_five <= n) {
		ans += n / pow_five;
	}

	std::cout << ans << "\n";

	return 0;
}
