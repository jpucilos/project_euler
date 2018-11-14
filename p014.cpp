/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include<iostream>
using namespace std;

int collatz[1000000];


uint64_t collatzSequence(uint64_t n){
	uint64_t temp = n;
	uint64_t count = 0;
	while(n != 1){
		if(collatz[n] != 0){
			if(n % 2 == 0)
				n /= 2;
			else
				n = 3*n + 1;
			count++;
		}
		else{
			collatz[temp] = count + collatz[n]; 
			return collatz[temp];
		}
	}
	return count;
}

//Add memoization for speed
int main(){
	
	for(int i = 0; i < 1000000; i++)
		collatz[1000000] = 0;
	uint64_t ans = 0;
	uint64_t longestChain = 0;
	for (uint64_t n = 1; n < 1000000; n++){
		cout << "Testing n = " << n << '\n';
		uint64_t tempChain = collatzSequence(n);
		if(tempChain > longestChain) {
			longestChain = tempChain;
			ans = n;
		}
	}
	cout << ans << '\n';
}