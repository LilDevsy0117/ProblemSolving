#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int l = 9;
    int r = 11;
    int l_len=0, r_len=0;
    for(int i = 0; i<numbers.size(); i++){
        if(numbers[i] == 0){
            numbers[i] = 10;
        }else{
            numbers[i]--;
        }
        if(numbers[i] % 3 == 0){
            l = numbers[i];
            answer += "L";
        }else if(numbers[i] % 3 == 2){
            r = numbers[i];
            answer += "R";
        }else{
            l_len = abs(l/3-numbers[i]/3) + abs(l%3 - numbers[i]%3);
            r_len = abs(r/3-numbers[i]/3) + abs(r%3 - numbers[i]%3);
            if(l_len < r_len){
                l = numbers[i];
                answer += "L";
            }else if(l_len > r_len){
                r = numbers[i];
                answer += "R";
            }else{
                if(hand == "left"){
                    l = numbers[i];
                    answer += "L";
                }else{
                    r = numbers[i];
                    answer += "R";
                }
            }
        }
        
    }
    return answer;
}