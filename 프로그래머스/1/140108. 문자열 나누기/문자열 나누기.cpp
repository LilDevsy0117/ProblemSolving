#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int a = 0;
    int b = 0;
    string x = "";
    for(int i = 0; i<s.size(); i++){
        if(x.size()==0){
            x += s[i];
            a++;
        }else{
            if(s[i] == x[0]){
                a++;
            }else{
                b++;
            }
            if(a == b){
                answer++;
                x="";
                a=0,b=0;
            }
        }
    }
    if(x.size()>0){
        answer++;
    }
    return answer;
}