#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    vector<string> v;
    string s ;
    while(getline(ss, s, ' ')){
        v.push_back(s);
    }
    answer = stoi(v[0]);
    for(int i =1 ; i<v.size(); i+=2){
        if(v[i] == "+"){
            answer += stoi(v[i+1]);
        }else{
            answer -= stoi(v[i+1]);
        }
    }
    
    return answer;
}