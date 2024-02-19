#include <string>
#include <vector>
#include <iostream>

using namespace std;

string change(int num, int n){
    string result = "";
    while(num >= n){
        int temp = num%n;
        string s = "";
        if(temp < 10){
            s = to_string(temp);
        }else{
            s += 'A'+temp-10;
        }
        result = s + result;
        num /= n;
    }
    string s = "";
        if(num < 10){
            s = to_string(num);
        }else{
            s += 'A'+num-10;
        }
    result = s + result;
    return result;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    
    int play = 0;
    int num = 0;
    while(play < t*m){
        string temp = change(num, n);
        for(int i = 0; i<temp.size(); i++){
            if(play >= t*m) return answer;
            if(play%m == p-1){
                answer += temp[i];
            }
            play++;
        }
        num++;
    }
    
    return answer;
}