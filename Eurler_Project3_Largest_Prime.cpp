/*
What is the largest prime factor for N = 600851475143?

The minimum ranges you can rely on are :

short int and int : -32, 767 to 32, 767
unsigned short int and unsigned int : 0 to 65, 535
long int : -2, 147, 483, 647 to 2, 147, 483, 647
unsigned long int : 0 to 4, 294, 967, 295
This means that no, long int cannot be relied upon to store any 10 digit number.However, a larger type long long int was introduced to C in C99 and C++ in C++11 (this type is also often supported as an extension by compilers built for older standards that did not include it).The minimum range for this type, if your compiler supports it, is :

	long long int : -9, 223, 372, 036, 854, 775, 807 to 9, 223, 372, 036, 854, 775, 807
	unsigned long long int : 0 to 18, 446, 744, 073, 709, 551, 615
*/

#include <iostream>
#include "utils3.h"
using namespace std;

int main() {
	long long int N = 600851475143;
	long long int M = largestprime(N);
	cout << M << endl;
	system("pause");
	return 0;
				
}