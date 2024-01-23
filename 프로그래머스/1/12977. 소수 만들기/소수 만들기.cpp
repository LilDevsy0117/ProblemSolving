#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            for(int k =j+1; k<nums.size(); k++){
                int n = nums[i] + nums[j] + nums[k];
                answer ++;
                for(int z = 2; z<=sqrt(n); z++){
                    if(n%z == 0){
                        answer--;
                        break;
                    }
                }
            }
        }
    }

    return answer;
}