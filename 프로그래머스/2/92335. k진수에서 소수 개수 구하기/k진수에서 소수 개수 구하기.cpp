#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool prime(string s){
    long long n = stoll(s);
    if(n == 1) return false;
    for(long long i = 2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string s = "";
    while(n >= k){
        s = to_string(n%k) + s;
        n /= k;
    }
    s = to_string(n) + s;
    
    string temp = "";
    for(int i = 0; i<s.size(); i++){
        if(s[i] != '0'){
            temp += s[i];
        }else if(s[i] == '0' && temp.size() >0 ){
            if(prime(temp)) answer ++;
            temp = "";
        }
    }
    if(temp.size()>0){
        if(prime(temp)) answer ++;
    }
    
    return answer;
}