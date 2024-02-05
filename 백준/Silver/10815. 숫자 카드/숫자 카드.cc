#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	set<int> s;
	int n;
	cin>>n;
	int num;
	for(int i = 0; i < n; ++i){
		cin>>num;
		s.insert(num);
	}
	int m;
	cin>>m;
	int cnt = 0;
	for(int i = 0; i < m; ++i){
		cin>>num;
		if(s.find(num) != s.end()){
			cout<<1<<" ";
		}else{
			cout<<0<<" ";
		}
	}
	
	

	return 0;
}

