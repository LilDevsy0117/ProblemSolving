#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> average;
    for(int i = 0; i <score.size(); i++){
        average.push_back(score[i][0] + score[i][1]);
    }
    for(int i = 0; i<average.size(); i++){
        int grade = 1;
        for(int j = 0; j<average.size(); j++){
            if(average[i] < average[j]){
                grade ++;
            }
        }
        answer.push_back(grade);
    }
    
    return answer;
}