#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int pos =0 ;
    while(pos < my_str.size()){
        answer.push_back(my_str.substr(pos, n));
        pos += n;
    }
    return answer;
}