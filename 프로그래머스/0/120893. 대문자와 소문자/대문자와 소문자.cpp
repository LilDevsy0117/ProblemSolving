#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    answer = my_string;
    for(int i =0; i<answer.size(); i++){
        if(answer[i]<=90){
            answer[i] = tolower(answer[i]);
        }else{
            answer[i] = toupper(answer[i]);
        }
    }
    return answer;
}