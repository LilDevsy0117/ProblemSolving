#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.rbegin(), citations.rend());
    for(int i = 0; i<citations.size(); i++){
        if(citations[i] != citations[i+1] || i == citations.size()-1){
            if(i+1>=citations[i]){
                if(citations[i] > answer){
                    answer = citations[i];
                }
            }else{
                if(i+1 > answer){
                    answer = i+1;
                }
            }
        }
    }
    return answer;
}