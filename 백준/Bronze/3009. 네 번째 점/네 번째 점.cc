#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#include <ctime>

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x[3];
	int y[3];
	
	int num;
	for(int i = 0; i < 3; i++) {
		cin>>num;
		x[i] = num;
		cin>>num;
		y[i] = num;
	}
	
	int rst_x, rst_y;
	for(int i = 0; i < 3; i++) {
		if(1 == count(x, x+3, x[i])){
			rst_x = x[i];
		}
		
		if(1 == count(y, y+3, y[i])){
			rst_y = y[i];
		}
	}
	
	cout<<rst_x<<" "<<rst_y;
	
	

	return 0;
}