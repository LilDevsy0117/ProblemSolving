#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    for(int i = 0; i<=discount.size()-10; i++){
        vector<string> v(discount.begin()+i, discount.begin()+i+10);
        answer++;
       
        for(int j = 0; j<number.size(); j++){
            if(count(v.begin(),v.end(),want[j]) != number[j]){
                answer--;
                
                break;
            }
        }
    }
    return answer;
}