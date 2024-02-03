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
	
	int x,y,w,h;
	cin>>x>>y>>w>>h;
	
	int x_gap = w - x;
	if(x<x_gap) x_gap = x;
	int y_gap = h - y;
	if(y<y_gap) y_gap = y;
	
	if(x_gap>y_gap){
		cout<<y_gap;
	}else{
		cout<<x_gap;
	}
	
	

	return 0;
}