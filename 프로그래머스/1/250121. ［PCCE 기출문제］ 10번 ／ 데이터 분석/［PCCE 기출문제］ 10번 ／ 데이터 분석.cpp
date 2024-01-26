#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int k ;
bool cmp(vector<int> v1, vector<int> v2){
    return v1[k] <=v2[k];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int n;
    if(ext == "code"){
        n = 0;
    }else if(ext == "date"){
        n = 1;
    }else if(ext == "maximum"){
        n = 2;
    }else{
        n = 3;
    }
    for(int i = 0; i<data.size(); i++){
        if(data[i][n] < val_ext){
            answer.push_back(data[i]);
        }
    }
    if(sort_by == "code"){
        k = 0;
    }else if(sort_by == "date"){
        k = 1;
    }else if(sort_by == "maximum"){
        k = 2;
    }else{
        k = 3;
    }
    sort(answer.begin(), answer.end(), cmp);
    
    return answer;
}