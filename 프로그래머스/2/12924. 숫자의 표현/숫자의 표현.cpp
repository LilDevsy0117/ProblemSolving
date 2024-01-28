#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 1;
    int gap_sum;
    while(1){
        gap_sum = 0;
        for(int i = 1; i<a; i++){
            gap_sum+=i;
        }
        if((n-gap_sum)%a == 0 && (n-gap_sum)/a >=1){
            answer++;
        }else if((n-gap_sum)/a < 1){
            break;
        }
        a++;
        
    }
    return answer;
}