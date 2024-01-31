#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0) break;
		if(b%a == 0) {
			cout<<"factor"<<"\n";
		}else if(a%b == 0){
			cout<<"multiple"<<"\n";
		}else{
			cout<<"neither"<<"\n";
		} 
	}
	
	return 0;
}