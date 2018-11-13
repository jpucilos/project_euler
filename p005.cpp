/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <iostream>
using namespace std;

int n = 20;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(){
	uint64_t ans = n;
	for (int i = n-1; i >= 1; i--){
		cout<<"Multiplying by : " << i / gcd(ans, i) << '\n'; 
		ans *= (i / gcd(ans, i));
	}
	cout << ans << '\n';
}

