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
	
	int n,k;
	cin>>n>>k;
	
	int s=1, m=1;
	
	for(int i = 0; i<k; i++){
		s *= n;
		n -= 1;
	}
	
	//cout<<"s: "<<s<<"\n";
	int temp = k;
	for(int i = 0; i<k; i++){
		m *= temp;
		temp -= 1;
	}
	
	//cout<<"m: "<<m<<"\n";
	
	cout<<s/m;
	
	return 0;
}