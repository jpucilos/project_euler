/*

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include<iostream>
using namespace std;

int main(){
	uint64_t sum1= 1;
	uint64_t sum2= 1;
	
	for (int i = 2; i <=100; i++){
		sum1 += i*i;
		sum2 += i;
	}
	cout << sum2*sum2 - sum1 << '\n';
}
