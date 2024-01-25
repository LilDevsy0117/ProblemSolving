#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i = 0; i<new_id.size(); i++){
        if(isupper(new_id[i])){
            new_id[i] = tolower(new_id[i]);
        }
        if((new_id[i]>=97 && new_id[i]<=122) || isdigit(new_id[i]) || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'){
            if(answer.size()>0){
                if(!(answer[answer.size()-1] == '.' && new_id[i] == '.')){
                    answer += new_id[i];
                }
            }else{
                answer += new_id[i];
            }
        }
    }
    
    while(answer[0] == '.'){
        answer.erase(answer.begin());
    }
    
    while(answer[answer.size()-1] == '.'){
        answer.erase(answer.end()-1);
    }
    cout<<answer<<"\n";
    if(answer.size() == 0) answer+="a";
    if(answer.size() >=16){
        answer.erase(answer.begin()+15, answer.end());
    }
    while(answer[answer.size()-1] == '.'){
        answer.erase(answer.end()-1);
    }
    
    while(answer.size() < 3){
        answer += answer[answer.size()-1];
    }
    
    return answer;
}