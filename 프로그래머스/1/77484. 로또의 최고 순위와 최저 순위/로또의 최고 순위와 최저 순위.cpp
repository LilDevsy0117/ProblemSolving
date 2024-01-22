#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero = count(lottos.begin(), lottos.end(), 0);
    int n = 0;
    for(int i = 0; i<lottos.size(); i++){
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()){
            n++;
        }
    }
    if(n+zero<2){
        answer.push_back(6);
        answer.push_back(6);
    }else{
        answer.push_back(7-(n+zero));
        if(n < 2) n = 1;
        answer.push_back(7-n);
    }
    
    return answer;
}