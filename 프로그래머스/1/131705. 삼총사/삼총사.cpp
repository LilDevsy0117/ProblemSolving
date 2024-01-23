#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<int> v;
    for(int i = 0; i<number.size(); i++){
        v.push_back(i);
    }
    int len = v.size();
    vector<bool> v2(len-3, false);
    v2.insert(v2.end(), 3, true);
    do{
        vector<int> v3;
        for(int i = 0; i<len; i++){
            if(v2[i]) v3.push_back(v[i]);
        }
        int sum = 0;
        for(int i = 0; i<v3.size(); i++){
            sum += number[v3[i]];
        }
       
        if(sum == 0) answer++;
    }while(next_permutation(v2.begin(), v2.end()));
    
    return answer;
}