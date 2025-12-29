#include <iostream>

#define M 1000000007

int main() {
	long long n;

	std::cin >> n;

	long long ans = 1;

	for (int i = 0; i < n; ++i) {
		ans = (ans * 2 ) % M;
	}

	std::cout << ans % M << "\n";

	return 0;
}
