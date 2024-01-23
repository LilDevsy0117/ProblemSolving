#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    
    int a1 = intervals[0][0];
    int b1 = intervals[0][1];
    int a2 = intervals[1][0];
    int b2 = intervals[1][1];
    vector<int> v1(arr.begin()+a1, arr.begin()+b1+1);
    vector<int> v2(arr.begin()+a2, arr.begin()+b2+1);\
    v1.insert(v1.end(), v2.begin(), v2.end());
    return v1;
}