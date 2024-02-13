#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> v;
    vector<int> loc;
    for(int i = 0; i<priorities.size(); i++){
        v.push_back(priorities[i]);
        loc.push_back(i);
    }
    sort(v.begin(), v.end());
    int idx = v.size() -1 ;
    while(priorities.size() > 0){
        if(priorities[0] == v[idx]){
            priorities.erase(priorities.begin(), priorities.begin()+1);
            idx--;
            if(loc[0] == location){
                answer++;
                break;
            }else{
                loc.erase(loc.begin(), loc.begin()+1);
                answer++;
            }
        }else{
            int temp = priorities[0];
            priorities.erase(priorities.begin(), priorities.begin()+1);
            priorities.push_back(temp);
            temp = loc[0];
            loc.erase(loc.begin(), loc.begin()+1);
            loc.push_back(temp);
        }
    }
    return answer;
}