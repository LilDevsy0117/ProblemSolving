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
	
	int n[31] = {0, };
	
	int num;
	for(int i =1; i<=28; ++i){
		cin>>num;
		n[num] = 1;
		
	}
	
	for(int i =1; i<=30; ++i){
		
		if(n[i] == 0) cout<<i<<"\n";
	}
	
	
	return 0;
}