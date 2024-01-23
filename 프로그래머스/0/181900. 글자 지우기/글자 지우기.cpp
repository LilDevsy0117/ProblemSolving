#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(int i =0; i<my_string.size(); i++){
        if(!count(indices.begin(), indices.end(), i)){
            answer += my_string[i];
        }
    }
    return answer;
}