#include <iostream>
#include "utils3.h"
using namespace std;

long long int largestprime(long long int N) {
	int factor = 2;
	while (factor <= N) {
		if (N%factor == 0)
			N = N / factor;
		else
			factor = factor + 1;
	}
	return factor;
}