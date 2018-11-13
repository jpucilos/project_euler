/*

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include<iostream>
#include<math.h>
#include<cstdint>
using namespace std;

uint64_t n = 2000000;

int main(){
	bool isPrime[n];
	uint64_t sum = 0;
	
	for (int i = 0; i < n; i++)
		isPrime[i] = true; 
	
	
	for (int i = 2; i < sqrt(n); i++)
		if (isPrime[i])
			for(int j = (i*i); j < n; j+= i)
				isPrime[j] = false;
	
	for(int i = 2; i < n-1; i++){
		if(isPrime[i])
			sum += i ;
	}
	cout << sum << '\n';
}