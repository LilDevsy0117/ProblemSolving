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

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		cout<<lcm(a,b)<<"\n";
	}
	
	
	return 0;
}