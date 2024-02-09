#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;

int gcd(int a, int b){
	int n;
	while(b!=0){
		n = a%b;
		a=b;
		b=n;
	}
	return a;
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int DP[60][29];

int comb(int n, int k){
	if(k==0){
		return 1;
	}else if(n==k){
		return 1;
	}
	
	if(DP[n][k] != 0) return DP[n][k];

	return DP[n][k] = comb(n-1, k-1) + comb(n-1, k);
}


int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	/*
	
	H(n,r) = C(n+r-1, r)
	
	n+1HM-n
	mCM-n
	
	
	*/
	
	int t;
	cin>>t;
	
	int n,m;
	
	for(int i=0;i<t;i++){
		cin>>n>>m;
		cout<<comb(m,m-n)<<"\n";
	}
	
	
	return 0;
}