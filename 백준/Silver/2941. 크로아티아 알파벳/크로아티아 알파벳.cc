#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int findk(string &a, int &wcnt){
	static int s_cnt = 0;
	string b = a;
	int n ;
	while(b.size()>0){
		if(b.find("c=") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("c=");
		b =b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("c-") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("c-");
		b =b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("dz=") != std::string::npos){
	
			wcnt +=1;
		}else{
			break;
		}
		n = b.find("dz=");
		b =b.substr(n+3);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("d-") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("d-");
		b =b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("lj") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("lj");
		b =b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("nj") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("nj");
		b =b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("s=") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("s=");
		b = b.substr(n+2);
	}
	
	b =a ;
	while(b.size()>0){
		if(b.find("z=") != std::string::npos){
			s_cnt++;
			wcnt +=2;
		}else{
			break;
		}
		n = b.find("z=");
		b = b.substr(n+2);
	}
	
	
	return s_cnt;
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// cout.tie(NULL);
	
	string s;
	cin>>s;
	
	int n = 0;
	
	int cnt = findk(s, n);
	if(n<s.size()){
		cnt = cnt + s.size() - n;
	}
	
	cout<<cnt<<"\n";
	
	return 0;
}

