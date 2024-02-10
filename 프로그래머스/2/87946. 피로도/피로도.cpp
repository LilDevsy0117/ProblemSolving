#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    int temp;
    int max;
    sort(dungeons.begin(), dungeons.end());
    do{
        temp = k;
        max = 0;
        for(int i = 0; i<dungeons.size(); i++){
            if(dungeons[i][0] <= temp && temp>=dungeons[i][1]){
                temp -= dungeons[i][1];
                max++;
            }else{
                if(answer<max){
                    answer = max;
                }
                break;
            }
            if(answer<max){
                answer = max;
            }
        }    
    }while(next_permutation(dungeons.begin(), dungeons.end()));
    
    return answer;
}