#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n_count; // 진짜약수의 수
	cin>>n_count;
	vector<int> real_m(n_count) ; // 진짜약수 배열
	
	
	for(int i = 0; i < n_count; i++) {
		cin>>real_m[i];
	}
	
	
	if(n_count == 1){
		cout<<pow(real_m[0], 2);
		
	}else{
		sort(real_m.begin(), real_m.end());
		cout<<real_m[0]*real_m[n_count-1];
	}
	
	
	return 0;
}