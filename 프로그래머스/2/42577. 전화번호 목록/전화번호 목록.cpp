#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i = 0; i<phone_book.size()-1; i++){  
        for(int j = i+1; j<phone_book.size(); j++){
            if(phone_book[i].size() < phone_book[j].size()){
                if(phone_book[i] == phone_book[j].substr(0,phone_book[i].size())){
                    return false;
                }
            }else if(phone_book[j].size() < phone_book[i].size()){
                if(phone_book[j] == phone_book[i].substr(0,phone_book[j].size())){
                    return false;
                }
            }else{
                break;
            }
        }
    }
    
    return answer;
}