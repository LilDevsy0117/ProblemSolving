#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin>>n;
	int k = n/3;
	int rst,check=0;
	
	
	
	for(int i = 0; i<=k; ++i){
		if(n%3 != 0 ){
			if((n - 3*(k-i))%5 != 0){
				check -= 1;
			}
		}
		if((n - 3*(k-i))%5 == 0){
			rst = (n - 3*(k-i))/5;
		}
	}
	
	if(check == -(1+k)){
		cout<<-1<<"\n";
	}else{
		cout<<(n-5*rst)/3 + rst<<"\n";
	}
	
	
	
	return 0;
}

