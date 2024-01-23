using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    int a = price;
    for(int i =0; i<count; i++){
        answer += price;
        price += a;
    }
    if(money - answer >0){
        answer = 0;
    }else{
        answer = answer - money;
    }

    return answer;
}