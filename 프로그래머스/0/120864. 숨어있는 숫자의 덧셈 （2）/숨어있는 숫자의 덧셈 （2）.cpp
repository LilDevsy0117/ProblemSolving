#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string s = "";
    for(int i = 0; i<my_string.size(); i++){
        if(my_string[i] <= 57){
            s += my_string[i];
        }else if(s.size()>0){
            answer += stoi(s);
            s = "";
        }
    }
    if(s.size()>0){
        answer += stoi(s);
        s = "";
    }
    return answer;
}