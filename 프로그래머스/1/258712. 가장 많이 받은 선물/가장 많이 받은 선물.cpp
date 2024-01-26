#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    map<string, int> idx_m;
    vector<int> v(friends.size());
    vector<vector<int>> give_take(friends.size(), v);
    for(int i = 0; i<friends.size(); i++){
        idx_m.insert({friends[i], i});
    }
    for(int i = 0; i<gifts.size(); i++){
        stringstream ss(gifts[i]);
        string first, second;
        ss >>first >> second;
        give_take[idx_m[first]][idx_m[second]]++;
    }
    vector<int> gift_idx(friends.size());
    for(int i = 0; i<give_take.size(); i++){
        for(int j = 0; j<give_take[i].size(); j++){
            gift_idx[i] += give_take[i][j];
            gift_idx[j] -= give_take[i][j];
        }
    }
    int max = 0;
    for(int i = 0; i<give_take.size(); i++){
        int temp = 0;
        for(int j = 0; j<give_take[i].size(); j++){
            if(give_take[i][j] == give_take[j][i]){
                if(gift_idx[i] > gift_idx[j]){
                    temp ++;
                }
            }else{
                if(give_take[i][j] > give_take[j][i]){
                    temp ++;
                }
            }
        }
        if(temp > max) max =temp;
    }
    answer =max;
    return answer;
}