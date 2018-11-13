/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include<iostream>
#include<math.h>
using namespace std;

uint32_t n = 1000000;

int main(){
	bool isPrime[n];
	int count = 0;
	
	for (int i = 0; i < n; i++)
		isPrime[i] = true; 
	
	
	for (int i = 2; i < sqrt(n); i++)
		if (isPrime[i])
			for(int j = (i*i); j < n; j+= i)
				isPrime[j] = false;
	
	for(int i = 2; i < n-1; i++){
		if(isPrime[i])
			count++;
		if(isPrime[i] && count == 10001)
			cout << i << '\n';
	}
}
