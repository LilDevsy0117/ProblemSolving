#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(vector<double> v1, vector<double> v2){
    if(v1[0] == v2[0]) return v1[1] < v2[1];
    return v1[0] > v2[0];
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    double n = stages.size();
    vector<vector<double>> v;
    for(int i = 1; i<=N; i++){
        vector<double> temp;
        if(n == 0){
            temp.push_back(0);
        }else{
            temp.push_back(count(stages.begin(), stages.end(), i)/n);
        }
        temp.push_back(i);
        v.push_back(temp);
        n -= count(stages.begin(), stages.end(), i);
    }
    sort(v.begin(), v.end(), cmp);
    
    for(auto i : v){
        answer.push_back(i[1]);
    }
    return answer;
}