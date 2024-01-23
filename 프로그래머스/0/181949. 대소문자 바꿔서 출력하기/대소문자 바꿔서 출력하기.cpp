#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i =0; i<str.size(); i++){
        if ('A'<=str[i] && 'Z'>=str[i]){
            str[i] += 32;
        }else{
            str[i] -= 32;
        }
    }
    cout<<str;
    return 0;
}

