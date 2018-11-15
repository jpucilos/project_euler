/*

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?

*/

#include<iostream>
#include<list>
using namespace std;

#define EXPONENT 1000

int main(){
	
	int carry = 0;
	int digits[EXPONENT];
	
	
	for(int i = 0; i < EXPONENT; i++){
		digits[i] = 0;
	}
	digits[0] = 1;
	
	for(int i = 0; i < EXPONENT; i++){
		for (int j = 0; j < EXPONENT; j++){
			digits[j] *= 2;
			digits[j] += carry;
			carry = digits[j] / 10;
			digits[j] %= 10;
		}
	}

	uint32_t sum = carry;
	for(int i = 0; i < EXPONENT; i++)
		sum += digits[i];
	cout << sum << '\n';
}
