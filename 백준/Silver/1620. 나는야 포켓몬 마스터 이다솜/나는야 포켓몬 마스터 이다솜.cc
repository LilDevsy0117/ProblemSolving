#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int n,m;
	cin>>n>>m;
	
	string temp;
	map<int, string> mp1;
	map<string, int> mp2;
	for(int i = 0; i < n; ++i){
		cin>>temp;
		mp1[i+1] = temp;
		mp2[temp] = i+1;
	}
	
	string q;
	int key;
	for(int i = 0; i < m; ++i){
		cin>> q;
		if(q[0] < 'A'){
			key = stoi(q);
			cout<<mp1[key]<<"\n";
		}else{
			cout<<mp2[q]<<"\n";
		}
	}

	return 0;
}

