#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	int arr[100][100] = {};
	int x,y;
	
	for(int i = 0; i < n; i++) {
		cin>>x>>y;
		for(int j = y; j<y+10; ++j){
			for(int k = x; k<x+10; ++k){
				arr[k][j] = 1;
				//cout<<k<<" "<<j<<"/";
			}
			//cout<<"\n";
		}
	}
	//cout<<"------------------"<<"\n";
	int sum = 0;
	for(int i = 0; i<100; ++i){
		for(int j = 0; j<100; ++j){
			if(arr[i][j] == 1){
				++sum;
				//cout<<i<<" "<<j<<" / ";
			}
		}
		//cout<<"\n";
	}
	cout<<sum;
}