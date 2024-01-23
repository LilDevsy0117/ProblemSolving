#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string a = "aeiou";
    for(int i = 0; i<my_string.size(); i++){
        if(a.find(my_string[i]) == string::npos){
            answer += my_string[i];
        }
    }
    return answer;
}