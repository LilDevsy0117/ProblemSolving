#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int primeNumber(int n){
	
	int cnt = 0;
	int* ary = new int[n+1]();
	for(int i =2; i<=n; ++i){
		for(int j = i+i; j<=n; j+=i){
			ary[j] = 1;
		}
	}
		
	for(int i =2; i<=n; ++i){
		if(ary[i] == 0){
			++cnt;
		}
	}
	delete[] ary;
	return cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	
	while(1){
		int cnt = 0;
		cin>>n;
		if(n==0) break;
		
		
		cnt = primeNumber(2*n) - primeNumber(n);
		cout<<cnt<<"\n";
	}

	return 0;
}

