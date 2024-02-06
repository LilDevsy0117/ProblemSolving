#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <iostream>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    vector<int> v;
    set<int> s;
    for(int j = 0; j<2; j++){
        for(int i = 0 ; i<elements.size(); i++){
            v.push_back(elements[i]);
        }   
    }
    
    int sum;
    for(int i =1;i<=elements.size(); i++){
        for(int j = 0; j<elements.size(); j++){
            sum = accumulate(v.begin()+j, v.begin()+j+i, 0);
            // cout<<sum<<"\n";
            s.insert(sum);
        } 
    }
    answer = s.size();
    
    return answer;
}