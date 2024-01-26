#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    int idx = 0;
    int cont = 0;
    for(int i  = 1; i<=attacks[attacks.size()-1][0]; i++){
        if(attacks[idx][0] == i){
            answer -= attacks[idx][1];
            if(answer <= 0) break;
            idx ++;
            cont = 0;
        }else{
            answer += bandage[1];
            if(answer > health) answer = health;
            cont++;
        }
        
        if(cont == bandage[0]){
            answer += bandage[2];
            cont = 0;
        }
    }
    if(answer <= 0) answer = -1;
    return answer;
}