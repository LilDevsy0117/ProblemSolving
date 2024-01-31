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
	
	int m, n;
	cin>>m>>n;
	
	int* ary = new int[n-m+1]();
	int idx = 0;
	int flag = 0;
	
	for(int i = m; i<=n; ++i){
		if(i == 1 || i == 4){
			continue;
		}else if(i <5){
			ary[idx] = i;
			++idx;
		}else{
			for(int j =2; j<=sqrt(i); ++j){
				if(i%j == 0){
					flag = -1;
					break;
				}
			}
			if(flag == -1){
				flag = 0;
				continue;
			}
			ary[idx] = i;
			++idx;
		}
	}
	
	if(ary[0] == 0){
		cout<<-1<<"\n";
		return 0;
	}
	
	int min = ary[0];
	int sum = 0;
	
	for(int i = 0; i<n-m+1; ++i){
		sum  += ary[i];
	}
	
	cout<<sum<<"\n"<<min<<"\n";
	
	
	return 0;
}

