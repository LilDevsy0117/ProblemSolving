#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<string, int> m;
    stringstream ss(today);
    string word;
    int day = 0;
    vector<int> v {28*12, 28, 1};
    int i = 0;
    while(getline(ss, word, '.')){
        day += (stoi(word)-1) * v[i];
        i++;
    }
    for(int i = 0; i<terms.size(); i++){
        stringstream ss(terms[i]);
        string first, second;
        ss >> first >>second;
        m.insert({first, stoi(second)});
    }
    for(int i = 0; i<privacies.size(); i++){
        stringstream ss(privacies[i]);
        string first, second;
        ss >> first >>second;
        int period = m.find(second)->second;
        int j = 0;
        int pri = period*28-1;
        stringstream ss2(first);
        while(getline(ss2, word, '.')){
            pri += (stoi(word)-1) * v[j];
            j++;
        }
        cout<<pri<<" "<<day<<"\n";
        if(pri < day){
            answer.push_back(i+1);
        }
    }
    return answer;
}