#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin>>n;
	
	
	if(n==1){
		return 0;
	}
	
	int k =2;
	int scope = sqrt(n);
	while(n != 1 && k<=scope){
		if(n % k == 0){
			cout<<k<<"\n";
			n /= k;
		}else{
			++k;
		}
	}
	
	if(n > 1){
		cout<<n<<"\n";
	}

	return 0;
}

