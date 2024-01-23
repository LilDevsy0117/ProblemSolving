#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(int i = 0; i<rny_string.size(); i++){
        if(rny_string[i] == 'm'){
            rny_string.replace(i,1,"rn");
        }
    }
    return rny_string;
}