#include <string>
#include <vector>
#include<algorithm> 
using namespace std;

string solution(string a, string b) {
    string answer = "";
    string temp = "";
    int zero;
    if(a.size() > b.size()){
        zero = a.size() - b.size();
    }else{
        zero = b.size() - a.size();
    }
    for(int i = 0; i<zero; i++){
        temp += "0";
    }
    if(a.size() > b.size()){
        b = temp + b;
    }else{
        a = temp + a;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int carry = 0;
    for(int i = 0; i<a.size(); i++){
        int temp_sum = a[i]-'0'+b[i]-'0'+carry;
        answer += to_string((temp_sum%10));
        if(temp_sum >= 10){
            carry = 1;
        }else{
            carry = 0;
        }
    }
    if(carry == 1){
        answer += "1";
    }
    reverse(answer.begin(), answer.end());
    return answer;
}