#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<int> v(4);
    for(int i = 0; i<survey.size(); i++){
        if(survey[i][1] == 'R'){
            v[0] += choices[i]-4;
        }else if(survey[i][1] == 'T'){
            v[0] -= choices[i]-4;
        }else if(survey[i][1] == 'C'){
            v[1] += choices[i]-4;
        }else if(survey[i][1] == 'F'){
            v[1] -= choices[i]-4;
        }else if(survey[i][1] == 'J'){
            v[2] += choices[i]-4;
        }else if(survey[i][1] == 'M'){
            v[2] -= choices[i]-4;
        }else if(survey[i][1] == 'A'){
            v[3] += choices[i]-4;
        }else if(survey[i][1] == 'N'){
            v[3] -= choices[i]-4;
        }
    }
    if(v[0] >= 0){
        answer += 'R';
    }else if(v[0] < 0){
        answer += 'T';
    }
    
    if(v[1] >= 0){
        answer += 'C';
    }else if(v[1] < 0){
        answer += 'F';
    }
    
    if(v[2] >= 0){
        answer += 'J';
    }else if(v[2] < 0){
        answer += 'M';
    }
    
    if(v[3] >= 0){
        answer += 'A';
    }else if(v[3] < 0){
        answer += 'N';
    }
    return answer;
}