#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i =0; i<myString.size(); i++){
        if(myString[i] == 'B'){
            myString[i] = 'A';
        }else{
            myString[i] = 'B';
        }
    }
    
    if(myString.find(pat) != string::npos){
        answer = 1;
    }
    
    return answer;
}