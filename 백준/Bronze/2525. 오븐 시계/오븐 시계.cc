#include <iostream>

using namespace std;

int main(){
	int H,M,time;
	int a,b;
	cin>>H>>M>>time;
	a = time/60;
	b = time%60;
	H += a;
	M += b;
	if(M >=60){
		M-=60;
		H+=1;
		
	}
	if(H>=24){
		H-=24;
	}
	cout<<H<<" "<<M<<endl;
	
}