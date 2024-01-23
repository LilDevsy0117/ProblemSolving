#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s;
    for(auto i:nums){
        s.insert(i);
    }
    int n = nums.size();
    if(s.size() < n/2){
        answer =s.size();
    }else{
        answer = n/2;
    }
    return answer;
}