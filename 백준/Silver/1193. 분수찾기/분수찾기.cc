#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int x;
	cin>>x;
	int idx =1 ;
	
	while(!(x >= 1+idx*(idx-1)/2 && x<= 1 + (idx-1)*(idx+2)/2 )){
		++idx;
	}
	
	int i = x - (1+idx*(idx-1)/2);

	
	int n,dn; //n 분자 dn 분모
	
	if(idx%2 == 1){
		n = idx - i;
		dn = 1+i;
	}else{
		n = 1+i;
		dn = idx - i;
	}
	
	cout<<n<<"/"<<dn<<"\n";
	
	
	

	
	
	
	
	return 0;
}

