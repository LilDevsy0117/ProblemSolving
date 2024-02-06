#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    sort(tangerine.begin(), tangerine.end());
    vector<int> v;
    v.push_back(count(tangerine.begin(), tangerine.end(), tangerine[0]));
    int prev = tangerine[0];
    for(int i = 1; i<tangerine.size(); i++){
        if(tangerine[i] != prev){
            prev = tangerine[i];
            v.push_back(count(tangerine.begin(), tangerine.end(), tangerine[i]));
        }
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for(int i = 0; i<v.size(); i++){
        if(sum>=k) break;
        
        sum += v[i];
        answer++;
        
    }
    return answer;
}