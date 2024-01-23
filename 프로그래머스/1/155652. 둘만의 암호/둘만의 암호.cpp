#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int a;
    for(int i = 0; i<s.size(); i++){
        a = index;
        char c = s[i];
        while(a>0){
            c = c+1;
            if(c=='{') c = 'a';
            if(find(skip.begin(), skip.end(), c) == skip.end()){
                a--;
            }
        }
        answer += c;
    }
    return answer;
}