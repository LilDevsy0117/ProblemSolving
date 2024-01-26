#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    map<string, int> m;
    map<string, int> idx;
    for(int i = 0; i<id_list.size(); i++){
        m.insert({id_list[i], 0});
        idx.insert({id_list[i], i});
    }
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    
    for(int i = 0; i<report.size(); i++){
        stringstream ss(report[i]);
        string first, second;
        ss >> first >>second;
        m[second]++;
    }
    for(int i = 0; i<report.size(); i++){
        stringstream ss(report[i]);
        string first, second;
        ss >> first >> second;
        if(m[second] >= k){
            answer[idx[first]]++;
        }
    }
    return answer;
}