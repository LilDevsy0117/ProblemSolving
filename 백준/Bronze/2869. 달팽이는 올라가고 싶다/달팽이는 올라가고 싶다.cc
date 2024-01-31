#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int a, b, v;
	cin>>a>>b>>v;
	int h;
	
	if(a>=v){
		cout<<1<<"\n";
	}else if(2*a-b>=v){
		cout<<2<<"\n";
	}else{
		h = v - (2*a-b);
		if(h%(a-b) == 0){
			cout<<h/(a-b)+2<<"\n";
		}else{
			cout<<h/(a-b)+3<<"\n";
		}
	}

	return 0;
}

