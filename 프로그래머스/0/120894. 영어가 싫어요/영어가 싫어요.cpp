#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string temp = "";
    string result = "";
    for(int i =0; i<numbers.size(); i++){
        temp += numbers[i];
        if(temp == "one"){
            result += "1";
            temp = "";
        }else if(temp == "two"){
            result += "2";
            temp = "";
        }else if(temp == "three"){
            result += "3";
            temp = "";
        }else if(temp == "four"){
            result += "4";
            temp = "";
        }else if(temp == "five"){
            result += "5";
            temp = "";
        }else if(temp == "six"){
            result += "6";
            temp = "";
        }else if(temp == "seven"){
            result += "7";
            temp = "";
        }else if(temp == "eight"){
            result += "8";
            temp = "";
        }else if(temp == "nine"){
            result += "9";
            temp = "";
        }else if(temp == "zero"){
            result += "0";
            temp = "";
        }
    }
    answer = stol(result);
    return answer;
}