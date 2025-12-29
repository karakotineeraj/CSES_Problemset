#include <iostream>
#include <vector>

int main() {
	int n;

	long long min_moves = 0;

	std::cin >> n;

	std::vector<long long> nums(n);

	for(int i = 0; i < n; ++i) {
		std::cin >> nums[i];
	}

	for (int i = 1; i < n; ++i) {
		if (nums[i] < nums[i-1]) {
			min_moves += nums[i-1] - nums[i];
			nums[i] = nums[i-1];
		}
	}

	std::cout << min_moves << "\n";

	return 0;
}
