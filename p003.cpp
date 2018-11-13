/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include<math.h>
#include<iostream>
using namespace std;

uint64_t n = 600851475143;

bool isPrime(uint64_t n){
	for (uint64_t i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(){
	for(uint64_t i = sqrt(n); i >= 2; i--){
		if(n % i == 0)
			if(isPrime(i)){
				cout << i << '\n';
				return 0;
			}
	}
}
