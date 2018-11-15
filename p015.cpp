/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

#include<iostream>
using namespace std;


//20x20 Grid
#define GRID 20

uint64_t pathCounterSlow(int i, int j){
	if(i == GRID)
		return 1;
	else if(j == GRID)
		return 1;
	else
		return pathCounterSlow(i+1, j) + pathCounterSlow(i, j+1);
}

uint64_t pathCounterFast(){
	uint64_t paths = 1;
	for(int i = 0; i < GRID; i++){
		paths *= (2*GRID) - i;
		paths /= i+1;
	}
	return paths;
}


int main(){
	cout << pathCounterFast() << '\n';
}
