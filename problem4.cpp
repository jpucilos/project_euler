/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
using namespace std;

bool isPalindrome(uint32_t i){
	uint32_t n = i;
	int a = 0;
	while(n / 10 != 0){
		a++;
		n /= 10;
	} 
	
	int b[a+1];
	n = i;
	
	for(int k = 0; k <= a; k++){
		b[k] = n % 10;
		n /= 10;
	}
	
	for(int k = 0; k < a; k++){
		n += b[k];
		n *= 10;
	}
	n += b[a];
	
	cout << a << "   " << n << "    " << i <<'\n';	 
	if(n == i)
		return true;
	return false;

}


int main(){
	uint32_t ans = 0;
	for(int i = 999; i >= 100; i--)
		for (int k = 999; k >= 100; k--)
			if(i*k > ans && isPalindrome(i*k))
				ans = i*k;		
	cout << ans << '\n';
}
