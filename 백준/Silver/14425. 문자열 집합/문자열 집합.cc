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
	
	int n,m;
	cin>>n>>m;
	
	set<string> s;
	string temp;
	for(int i = 0;i<n;i++){
		cin>>temp;
		s.insert(temp);
	}
	int cnt = 0;
	for(int i = 0;i<m;i++){
		cin>>temp;
		if(s.find(temp) != s.end()) ++cnt;
	}
	cout<<cnt<<"\n";
	
	

	return 0;
}

