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
	int i=2 ;
	
	if(n==1){
		cout<<n<<"\n";
	}else{
		while(1){
			if( 2 + (i-2)*(12 + (i-3)*6)/2  <=  n && n <=   7 + (i-2)*(24 + (i-3)*6)/2 ){
				cout<<i<<"\n";
				break;
			}
			++i;
		}
			
		
	}
	
	
	
	return 0;
}

