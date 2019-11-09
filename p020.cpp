/*
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

#include<iostream>
using namespace std;

#define MULTIPLICAND 1000

int main(){
	
	int carry = 0;
	int product[MULTIPLICAND];
	
	
	for(int i = 0; i < MULTIPLICAND; i++){
		product[i] = 0;
	}
	product[0] = 1;
	
	for(int i = 1; i <= 100; i++){
		for (int j = 1; j <= MULTIPLICAND; j++){
			product[j-1] *= i;
			product[j-1] += carry;
			carry = product[j-1] / 10;
			product[j-1] %= 10;
		}
	}
	 
	uint32_t sum = carry;
	for(int i = 0; i < MULTIPLICAND; i++)
		sum += product[i];
	cout << sum << '\n';
}
