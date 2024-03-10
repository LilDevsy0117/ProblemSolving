#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

bool cmp(pair<string, int>a, pair<string,int>b){
    return stoi(a.first) < stoi(b.first);
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    vector<string> time;
    vector<string> num;
    vector<string> io;
    for(int i = 0; i<records.size(); i++){
        stringstream ss(records[i]);
        string a,b,c;
        ss>>a>>b>>c;
        time.push_back(a);
        num.push_back(b);
        io.push_back(c);
    }
    vector<pair<string, int>> pv;
    for(int i = 0; i<records.size(); i++){
        if(io[i] == "IN"){
            bool flag = false;
            for(int j = i+1; j<records.size(); j++){
                if(num[i] == num[j]){
                    int a = stoi(time[j].substr(3,2)) + 60*stoi(time[j].substr(0,2)) -stoi(time[i].substr(3,2)) - 60*stoi(time[i].substr(0,2));
                    string n = num[i];
                    auto it = find_if(pv.begin(), pv.end(), [&n](pair<string,int>& elem){return elem.first == n;});
                    if(pv.end() == it){
                        pv.push_back(make_pair(num[i], a));
                    }else{
                        it->second += a;
                    }
                    flag = true;
                    break;
                }
            }
            if(!flag){
                int a = 59 + 60*23 -stoi(time[i].substr(3,2)) - 60*stoi(time[i].substr(0,2));
                string n = num[i];
                auto it = find_if(pv.begin(), pv.end(), [&n](pair<string,int>& elem){return elem.first == n;});
                if(pv.end() == it){
                    pv.push_back(make_pair(num[i], a));
                }else{
                    it->second += a;
                }
            }
        }  
    }
    sort(pv.begin(), pv.end(), cmp);
    for(int i = 0; i<pv.size(); i++){
        if(pv[i].second > fees[0]){
            pv[i].second = fees[1] + ceil((double)(pv[i].second-fees[0])/fees[2])*fees[3];
        }else{
            pv[i].second = fees[1];
        }
        answer.push_back(pv[i].second);
    }
    
    return answer;
}