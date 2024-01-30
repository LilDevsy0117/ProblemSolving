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
	
	int n;
	cin>>n;
	vector<int> v(201);
	
	int num;
	for(int i =0; i<n; ++i){
		cin>>num;
		v[num+100] ++;
	}
	
	int a;
	cin>>a;
	cout<<v[a+100];
	
	
	return 0;
}