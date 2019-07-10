#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10000

int proper_divisor_sum (int i){
    int sum = 0;
    for (int n = 1; n <= sqrt(i); n++){
        if( i % n == 0){
            sum += n;
            sum += i / n;
        }
    }
    return sum;   
}


int main()
{
    bool amicable[MAX];
    int proper_divisor_sums[MAX];
    int result = 0;
    
    for (int i = 0; i < MAX; i++){
        amicable[i] = false;
        proper_divisor_sums[i] = 0;
    }
    
    
    for (int i = 2; i < MAX; i+=2){
        if(amicable[i] == false){
            if(proper_divisor_sums[i] == 0){
                proper_divisor_sums[i] = proper_divisor_sum(i);
                proper_divisor_sums[proper_divisor_sums[i]] = proper_divisor_sum(proper_divisor_sums[i]);
                
            }
            if(i == proper_divisor_sums[proper_divisor_sums[i]]){
                amicable[i] = true;
                amicable[proper_divisor_sums[i]] = true;
                cout << "Amicable Number: " << i << '\n';
                result += i;
            }
        }
        else
            cout << "Amicable Number: " << i << '\n';
            result += i;
        
    }
    cout << result<<'\n';
}
