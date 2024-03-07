#include <string>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    vector<int> pos = {5,5};
    vector<vector<int>> x (11, vector<int>(10));
    vector<vector<int>> y (11, vector<int>(10));
    
    for(int i = 0; i<dirs.size(); i++){
        if(dirs[i] == 'U'){
            if(pos[1]+1 <=10){
                pos[1]++;
                y[pos[0]][pos[1]-1] = 1;    
            }
        }else if(dirs[i] == 'D'){
            if(pos[1]-1 >=0){
                pos[1]--;
                y[pos[0]][pos[1]] = 1;    
            }
        }else if(dirs[i] == 'L'){
            if(pos[0]-1 >=0){
                pos[0]--;
                x[pos[1]][pos[0]] = 1;    
            }
        }else{
            if(pos[0]+1 <=10){
                pos[0]++;
                x[pos[1]][pos[0]-1] = 1;    
            }
        }
    }
    for(int i = 0; i<x.size(); i++){
        for(int j = 0; j<x[i].size(); j++){
            if(x[i][j])answer++;
            if(y[i][j])answer++;
        }
    }
    
    return answer;
}