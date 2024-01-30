#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	int num;
	cin>>num;
	double *array = new double[num];
	for(int i = 0; i<num; ++i){
		cin>>array[i];
	}
	int max=array[0];
	for(int i = 1; i<num; ++i){
		if(max<array[i]){
			max = array[i];
		}
	}
	double average=0;
	
	for(int i = 0; i<num; ++i){
		array[i] = (array[i]/max)*100;
		average +=array[i];
	}
	average = average/num;
	cout<<average<<"\n";
	

}	