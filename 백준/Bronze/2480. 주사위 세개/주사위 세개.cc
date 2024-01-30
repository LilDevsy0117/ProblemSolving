#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	int pm;
	cin>>a>>b>>c;
	
	if(a==b && b==c){
		pm = 10000 + a*1000;
	}else if(a!=b && b!=c && a!=c){
		if(a>=b && a>=c){
			pm = a*	100;
		}else if(b>=a && b>=c){
			pm = b*	100;
		}else{
			pm = c*	100;
		}
	}else{
		if(a==b){
			pm = 1000+a*100;
		}else if(a==c){
			pm = 1000+a*100;
		}else{
			pm = 1000+b*100;
		}
		
	}
	
	cout<<pm<<endl;
}