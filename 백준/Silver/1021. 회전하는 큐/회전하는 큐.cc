#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    cin>>N>>M;
    int answer =0;
    deque<int> dq(N);
    for(int i = 0; i<N; i++)
    {
        dq[i] = i+1;
    }
    for(int i = 0; i<M; i++)
    {
        int n;
        cin>>n;
        int pos = find(dq.begin(), dq.end(), n) -dq.begin();

        if(pos <= dq.size()/2)
        {
            while(dq.front() != n)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                answer++;
            }
            dq.pop_front();
        }else{
            while(dq.front() != n)
            {
                dq.push_front(dq.back());
                dq.pop_back();
                answer++;
            }
            dq.pop_front();
        }
    }
    cout<<answer;
    

    return 0;
}