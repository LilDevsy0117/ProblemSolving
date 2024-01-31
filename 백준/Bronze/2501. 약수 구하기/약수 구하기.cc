#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	int cnt = 0;
	bool flag = false;
	for(int i = 1; i<=n; ++i){
		if(n%i == 0){
			++cnt;
			if(cnt == k){
				cout<<i;
				flag = true;
				break;
			}
		}
	}
	if(flag == false){
		cout<<0;
	}
}