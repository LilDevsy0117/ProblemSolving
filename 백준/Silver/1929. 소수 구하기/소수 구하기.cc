#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int m,n;
	cin>>m>>n;
	
	int flag = 0;
	
	for(int i = m; i<=n; ++i){
		if(i == 1){
			continue;
		}
		if(i<4){
			cout<<i<<"\n";
			continue;
		}
		for(int j =2; j<=sqrt(i); ++j){
			if(i % j == 0){
				flag = -1;
				break;
			}
		}
		if(flag == -1){
			flag = 0;
			continue;
		}
		cout<<i<<"\n";
	}

	return 0;
}

