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
	
	int a;
	cin>>a;
	int num,cnt;
	int sum = 0;
	for(int i = 0; i < a; i++) {
		cin>>num>>cnt;
		sum = sum + num*cnt;
	}
	
	if(n == sum) cout<<"Yes";
	else cout<<"No";
	
	return 0;
}