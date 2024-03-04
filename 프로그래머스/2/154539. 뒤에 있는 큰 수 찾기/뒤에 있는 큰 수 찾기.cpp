#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size());
    vector<int> stack;
    stack.push_back(0);
    for(int i = 1; i<numbers.size(); i++){
        while(stack.size() > 0 && numbers[stack.back()] < numbers[i]){
            answer[stack.back()] = numbers[i];
            stack.pop_back();
        }
        stack.push_back(i);
    }
    
    
    for(int i = 0; i<stack.size(); i++){
        answer[stack[i]] = -1;
        
    }
    
    return answer;
}