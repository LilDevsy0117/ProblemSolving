#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    vector<string> v1;
    vector<string> v2;
    for(int i = 0; i<str1.size()-1; i++){
        string s = "";
        if(str1[i] >=65 && str1[i] <= 90 && str1[i+1] >=65 && str1[i+1] <= 90){
            s += str1[i];
            s += str1[i+1];
        }
        if(s.size() == 2) v1.push_back(s);
    }
    for(int i = 0; i<str2.size()-1; i++){
        string s = "";
        if(str2[i] >=65 && str2[i] <= 90 && str2[i+1] >=65 && str2[i+1] <= 90){
            s += str2[i];
            s += str2[i+1];
        }
        if(s.size() == 2) v2.push_back(s);
    }
    vector<string> iv;
    vector<string> uv;
    for(int i = 0; i<v1.size(); i++){
        if(find(iv.begin(), iv.end(), v1[i]) == iv.end()){
            int m = min(count(v1.begin(), v1.end(), v1[i]), count(v2.begin(), v2.end(), v1[i]));
            for(int j = 0; j<m; j++){
                iv.push_back(v1[i]);
            }
            if(find(uv.begin(), uv.end(), v1[i]) == uv.end()){
                m = max(count(v1.begin(), v1.end(), v1[i]), count(v2.begin(), v2.end(), v1[i]));
                for(int j = 0; j<m; j++){
                    uv.push_back(v1[i]);
                }
            }
            
        }
    }
    for(int i = 0; i<v2.size(); i++){
        if(find(uv.begin(), uv.end(), v2[i]) == uv.end()){
            int m = max(count(v1.begin(), v1.end(), v2[i]), count(v2.begin(), v2.end(), v2[i]));
            for(int j = 0; j<m; j++){
                uv.push_back(v2[i]);
            }
        }
    }
    
    cout<<uv.size()<<" "<<iv.size();
    if(uv.size() == 0) answer = 65536;
    else{
        answer = 65536*iv.size()/uv.size();
    }
    return answer;
}