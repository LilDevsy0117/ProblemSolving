#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    vector<string> v;
    string word;
    while(getline(ss, word, ' ')){
        if(word != "+"){
            v.push_back(word);
        }
    }
    int a = 0;
    int b = 0;
    for(int i =0; i<v.size(); i++){
        if(v[i].find("x") != string::npos){
            if(v[i].size()>1){
                a += stoi(v[i]);
            }else{
                a += 1;
            }
        }else{
            b+= stoi(v[i]);
        }
    }
    if(a > 1){
        answer += to_string(a) +"x";
    }else if(a == 1){
        answer += "x";
    }
    if(b > 0){
        if(a>0){
            answer += " + "+to_string(b);
        }else{
             answer += to_string(b);
        }
        
    }
     
    return answer;
}