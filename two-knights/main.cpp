#include <iostream>

int main() {
	long long n;
	long long ans;

	std::cin >> n;

	/*
	* Number of ways knights can be placed: k^2 * (k^2 - 1)
	* as knights are identical, we need to remove duplicates: k^2 * (k^2 - 1) / 2
	* Now, we need to get the positions where knights are attacking each other.
	* 
	* Key Observation: Knights only attack each other when they are on the corner of a 2 * 3 or 3 * 2 box.
	* In each of these boxes, knights have only 2 unique positions for attacking.
	* So, number of attacking positions will be: 2 * (number_of_2_by_3 + number_of_3_by_2)
	*
	* For 2 * 3 boxes, there are (k-1) positions in a column and (k-2) positions in a row. Vice versa for 3 * 2 boxes.
	* So, total attacking positions: 2 * ((k-1)(k-2) + (k-1)(k-2)) => 4 * (k-1) * (k-2)
	*
	* Ans = k^2 * (k^2 - 1) / 2 - 4 * (k-1) * (k-2)
	*/ 

	for (long long i = 1; i <= n; i += 1) {
		ans = (i * i) * (i * i - 1) / 2;
		ans -= 4 * (i - 1) * (i - 2);
		
		std::cout << ans << "\n";
	}

	return 0;
}
