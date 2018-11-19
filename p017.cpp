/*

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

*/

#include<iostream>
#include<string>
using namespace std;


//This is by far, the worst code I've ever written
int main(){
	int ans = 0;
	string ones[20];
	string tens[10];
	ones[0] = '\n';
	ones[1] = "one";
	ones[2] = "two";
	ones[3] = "three";
	ones[4] = "four";
	ones[5] = "five";
	ones[6] = "six";
	ones[7] = "seven";
	ones[8] = "eight";
	ones[9] = "nine";
	ones[10] = "ten";
	ones[11] = "eleven";
	ones[12] = "twelve";
	ones[13] = "thirteen";
	ones[14] = "fourteen";
	ones[15] = "fifteen";
	ones[16] = "sixteen";
	ones[17] = "seventeen";
	ones[18] = "eighteen";
	ones[19] = "nineteen";
	
	tens[0] = '\n';
	tens[1] = '\n';
	tens[2] = "twenty";
	tens[3] = "thirty";
	tens[4] = "forty";
	tens[5] = "fifty";
	tens[6] = "sixty";
	tens[7] = "seventy";
	tens[8] = "eighty";
	tens[9] = "ninety";

	int temp_i = 0;
	for(int i = 1; i <= 1000; i++){
		temp_i = i;
		
		if(temp_i / 1000 != 0){ 
			ans += 11;
			temp_i = temp_i % 1000;
			if( temp_i == 0) continue;
		}
		if(temp_i / 100 != 0){
			ans += 7;
			ans += ones[temp_i/100].length();
			temp_i = temp_i % 100;
			if( temp_i == 0) continue;
			ans+= 3;
		}
		if(temp_i / 20 != 0){
			ans += tens[temp_i/10].length();
			temp_i = temp_i % 10;
		}
		if(temp_i != 0) {
			ans += ones[temp_i].length();
		}
	}	
	cout << ans << '\n';

}
