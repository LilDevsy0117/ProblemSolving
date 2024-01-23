#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    if(abs(a) == abs(b)){
        return a > b;
    }
    return abs(a) < abs(b);
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<int> v;
    for(int i =0; i<numlist.size(); i++){
        v.emplace_back(numlist[i] - n);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i<v.size(); i++){
        answer.emplace_back(v[i] +n);
    }
    return answer;
}