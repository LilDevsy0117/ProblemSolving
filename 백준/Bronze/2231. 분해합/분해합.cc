#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> v(n+1);
	int sum = 0;
	int min = n;
	for(int i = 1; i<n; ++i){
		if(v[i] == 1) continue;
		
		int temp = i;
		int x;
		while(temp<n){
			sum = 0;
			sum += temp;	
			x = temp;
			while(temp!=0){
				sum += temp%10;
				temp /= 10;
			}
			if(sum == n && x < min){
				min = x;
				break;
			}
			if(sum>n) break;
			// cout<<sum<<"\n";
			if(v[sum] == 1) break;
			v[sum] = 1;
			temp = sum;
		}
	}
	
	if(min == n){
		cout<<0<<"\n";
	}else{
		cout<<min<<"\n";
	}

	
	return 0;
}

