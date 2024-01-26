#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    int idx;
    map<string, int> m;
    for(int i = 0; i<players.size(); i++){
        m.insert({players[i], i});
    }
    for(int i = 0; i<callings.size(); i++){
        idx = m[callings[i]];
        iter_swap(players.begin() + idx -1 ,players.begin() + idx);
        m[callings[i]]--;
        m[players[idx]]++;
    }
    return players;
}