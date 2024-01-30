#include <iostream>
#include <string>
using namespace std;

int main(){
	string num1;
	string num2;
	int sum = 0;
	int a = 1;
	
	
	
	cin>>num1>>num2;
	
	for(int i =0; i<num1.size(); i++){
		cout<<stoi(num1) * (num2[2-i] - '0')<<endl;
		sum += stoi(num1) * (num2[2-i] - '0') * a;
		a*=10;
	}
	
	cout <<sum<<endl;
	
	
	
}