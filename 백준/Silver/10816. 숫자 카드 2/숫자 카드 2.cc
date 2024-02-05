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
	
	
	int n;
	int temp;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		
		cin>>temp;
		v[i] = temp;
	}
	
	sort(v.begin(), v.end());
	cin>>n;
	for(int i = 0; i < n; ++i){
		cin>>temp;
		auto upper = upper_bound(v.begin(), v.end(), temp);
        auto lower = lower_bound(v.begin(), v.end(), temp);
		cout<<upper-lower<<" ";
	}
		

	return 0;
}

