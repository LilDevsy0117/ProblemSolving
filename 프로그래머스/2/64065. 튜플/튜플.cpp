#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

bool comp(vector<int> a, vector<int> b){
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> vv;
    vector<int> v;
    string temp = "";
    for(int i = 1; i<s.size()-1; i++){
        if(s[i-1] == '}') continue;
        if(isdigit(s[i])){
            temp += s[i];
        }else if(s[i] == ','){
            v.push_back(stoi(temp));
            temp = "";
        }else if(s[i] == '}'){
            v.push_back(stoi(temp));
            temp = "";
            vv.push_back(v);
            v.clear();
        }
    }
    sort(vv.begin(), vv.end(), comp);
    for(int i = 0; i<vv.size(); i++){
        for(int j = 0; j<vv[i].size(); j++){
            if(find(answer.begin(),answer.end(), vv[i][j]) == answer.end()){
                answer.push_back(vv[i][j]);
            }
        }
    }
    return answer;
}