#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10000

int proper_divisor_sum (int i){
    int sum = 1;
    for (int n = 2; n <= i / 2; n++){
        if( i % n == 0){
            sum += n;
        }
    }
    return sum;   
}


int main()
{
    bool amicable[MAX];
    int proper_divisor_sums[MAX];
    int result = 0;
    for (int i  = 2; i < MAX; i++){
		if (proper_divisor_sum(proper_divisor_sum(i)) ==i){
			if ( proper_divisor_sum(i) != i){
				result += i;
			}
			
		}
	}
		
    cout << result<<'\n';
}
