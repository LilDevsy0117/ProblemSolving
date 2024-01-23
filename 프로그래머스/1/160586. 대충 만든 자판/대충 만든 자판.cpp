#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int push, min_idx;
    for(int i = 0; i<targets.size(); i++){
        push = 0;
        for(int j = 0; j<targets[i].size(); j++){
            min_idx = 101;
            for(int k = 0; k<keymap.size(); k++){
                if(find(keymap[k].begin(), keymap[k].end(), targets[i][j]) != keymap[k].end()){
                    int temp = find(keymap[k].begin(), keymap[k].end(), targets[i][j]) -keymap[k].begin()+1;
                    min_idx = min(min_idx,temp);
                }
            }
            if(min_idx != 101) push+=min_idx;
            else break;
        }
        if(min_idx == 101) answer.push_back(-1);
        else answer.push_back(push); 
    }
    return answer;
}