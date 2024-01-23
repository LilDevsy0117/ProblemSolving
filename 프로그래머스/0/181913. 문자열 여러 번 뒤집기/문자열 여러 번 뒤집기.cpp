#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    answer = my_string;
    for(vector<int> v : queries){
        reverse(answer.begin()+v[0], answer.begin()+v[1]+1);
    }
    return answer;
}