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
	
	int t;
	cin>>t;
	
	string temp;
	for(int i = 0; i < t; ++i) {
		cin>>temp;
		cout<<temp[0]<<temp[temp.length()-1]<<"\n";
	}
	
	return 0;
}