#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int t = a%b;
        a = b;
        b =t ;
    }
    return a;
}

int solution(vector<int> arr) {
    int answer = 0;
    int temp = arr[0];
    for(int i = 1; i<arr.size(); i++){
        temp = temp*arr[i]/gcd(arr[i],temp);
    }
    answer = temp;
    return answer;
}