#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    for(int h = 0; h<park.size(); h++){
        for(int w = 0; w<park[h].size(); w++){
            if(park[h][w] == 'S'){
                answer.push_back(h);
                answer.push_back(w);
                break;
            }
        }
    }
    
    for(int i = 0; i<routes.size(); i++){
        if(routes[i][0] == 'N'){
            bool flag = true;
            for(int j = 1; j<=routes[i][2]-'0'; j++){
                if(answer[0]-j < 0 ||park[answer[0]-j][answer[1]] == 'X'){
                    flag =false;
                    break;
                }
            }
            if(flag){
                answer[0] -= routes[i][2]-'0';
            }
        }else if(routes[i][0] == 'S'){
            bool flag = true;
            for(int j = 1; j<=routes[i][2]-'0'; j++){
                if(answer[0]+j >= park.size() ||park[answer[0]+j][answer[1]] == 'X'){
                    flag =false;
                    // cout<<answer[0]<<" "<<j;
                    break;
                }
            }
            if(flag){
                answer[0] += routes[i][2]-'0';
            }
        }else if(routes[i][0] == 'W'){
            bool flag = true;
            for(int j = 1; j<=routes[i][2]-'0'; j++){
                if(answer[1]-j < 0 ||park[answer[0]][answer[1]-j] == 'X'){
                    flag =false;
                    break;
                }
            }
            if(flag){
                answer[1] -= routes[i][2]-'0';
            }
        }else{
            bool flag = true;
            for(int j = 1; j<=routes[i][2]-'0'; j++){
                if(answer[1]+j >= park[0].size() ||park[answer[0]][answer[1]+j] == 'X'){
                    flag =false;
                    break;
                }
            }
            if(flag){
                answer[1] += routes[i][2]-'0';
            }
        }
    }
    
    return answer;
}