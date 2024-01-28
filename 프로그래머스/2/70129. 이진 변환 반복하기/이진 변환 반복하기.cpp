#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int len;
    int cnt = 0;
    int zcnt = 0;
    while(s.size() > 1){
        cnt ++;
        zcnt += count(s.begin(), s.end(), '0');
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        len = s.size();
        string temp = "";
        while(len > 1){
            temp = to_string(len%2)+temp;
            len /= 2;
        }
        temp = '1' + temp;
        s = temp;
    }
    answer.push_back(cnt);
    answer.push_back(zcnt);
    return answer;
}