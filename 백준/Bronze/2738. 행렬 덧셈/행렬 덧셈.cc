#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	vector<int> v1(n*m);
	vector<int> v2(n*m);
	
	int num;
	for(int i=0;i<n*m;i++) {
		cin>>num;
		v1[i] = num;
	}
	
	for(int i=0;i<n*m;i++) {
		cin>>num;
		v2[i] = num;
	}
	
	for(int i=0;i<n*m;i++) {
		cout<<v1[i]+v2[i]<<" ";
		if((i+1)%m ==0) cout<<"\n";
	}
	
	return 0;
}