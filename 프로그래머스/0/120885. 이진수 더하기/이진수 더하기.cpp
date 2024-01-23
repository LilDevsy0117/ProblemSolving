#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    string s = "";
    int len1 = bin1.size();
    int len2 = bin2.size();
    if(len1 > len2){
        for(int i = 0; i<len1 - len2; i++){
            s += "0";
        }
        bin2 = s + bin2;
    }else{
        for(int i = 0; i<len2 - len1; i++){
            s += "0";
        }
        bin1 = s + bin1;
    }
    int carry = 0;
    for(int i = bin1.size()-1; i>=0; i--){
        answer = to_string((bin1[i]-'0' + bin2[i] - '0' + carry)%2) + answer;
        carry = (bin1[i]-'0' + bin2[i] - '0' + carry)/2;
    }
    if(carry == 1){
        answer = "1" + answer;
    }
    return answer;
}