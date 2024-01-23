#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int i = 0; i<delete_list.size(); i++){
        arr.erase(remove(arr.begin(), arr.end(), delete_list[i]), arr.end());
    }
    return arr;
}