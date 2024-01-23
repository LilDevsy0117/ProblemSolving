#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string word = "";
    for(int i =0; i<myStr.size(); i++){
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c'){
            word += myStr[i];
        }else{
            if(word.size() > 0){
                answer.push_back(word);
                word = "";
            }
        }
    }
    
   if(word.size() > 0){
        answer.push_back(word);
    }
    if(answer.size() == 0){
        answer.push_back("EMPTY");
    }
    
    return answer;
}