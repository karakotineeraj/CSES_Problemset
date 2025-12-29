#include <algorithm>
#include <iostream>

int main() {
	std::string dna_seq;

	std::cin >> dna_seq;

	long long n = dna_seq.length();

	long long start = 0;
	long long maxRep = 0;
	for (int end = 1; end < n; ++end) {
		if (dna_seq[end] != dna_seq[start]) {
			maxRep = std::max(maxRep, end - start);
			start = end;
		}
	}

	maxRep = std::max(maxRep, n - start);

	std::cout << maxRep << "\n";
	return 0;
}
