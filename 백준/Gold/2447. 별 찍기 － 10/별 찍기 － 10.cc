#include <iostream>
#include <string>
// #include <vector>
// #include <algorithm>
// #include <cmath>
using namespace std;



void drawStar(int i,int j, int n){
	if(i / n % 3 == 1 && j / n % 3 == 1){
		cout<<" ";
	}else if(n/3 ==0){
		cout<<"*";
	}else{
		drawStar(i,j,n/3);
	}

}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int n;
	cin>>n;
	for(int i =0; i<n; ++i){
		for(int j=0; j<n; ++j){
			drawStar(i,j,n);
		}
		cout<<"\n";
	}
	
	
	return 0;
}

