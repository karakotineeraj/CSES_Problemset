#include <iostream>

int main() {
	long long t, r, c;
	long long ans;

	std::cin >> t;

	for (int i = 0; i < t; i += 1) {
		std::cin >> r >> c;
		if (c > r) {
			if (c%2 == 0) {
				ans = (c-1) * (c-1) + r;
			} else {
				ans = c * c - r + 1;
			}
		} else {
			if (r%2 == 0) {
				ans = r * r - c + 1;
	  		} else {
				ans = (r-1) * (r-1) + c;
	  		}
		}

		std::cout << ans << "\n";
	}

	return 0;
}
