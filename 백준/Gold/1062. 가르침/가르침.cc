#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <deque>
using namespace std;


vector<int> alpha(26);
vector<int> alpha2(26);
vector<string> word;
int N,K;
int max_value = 0;
void dfs(int z, int k)
{
    if(z == K)
    {
        int cnt = N;
        for(int i = 0; i<N; i++)
        {
            for(int j = 0; j<word[i].size(); j++)
            {
                if(alpha[word[i][j] - 'a'] == 0)
                {
                    cnt--;
                    break;
                }
            }
        }
        if(max_value < cnt) max_value = cnt;
        return;
    }

    for(int i = k; i<26; i++)
    {
        if(alpha2[i] >0)
        {
            alpha[i] = 1;
            dfs(z+1, i+1);
            alpha[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    cin>>N>>K;
    alpha['a' - 'a'] = 1;
    alpha['n' - 'a'] = 1;
    alpha['t' - 'a'] = 1;
    alpha['i' - 'a'] = 1;
    alpha['c' - 'a'] = 1;

    K = K -5;
    

    for(int i = 0; i<N; i++)
    {
        string s;
        cin>>s;
        word.push_back(s);
        for(int j =4; j<s.length()-4; j++)
        {
            if(alpha[s[j] - 'a'] != 1 && alpha2[s[j] - 'a'] == 0)
            {
                alpha2[s[j] - 'a'] = 1;
            }
        }

    }

    if(K <0)
    {
        cout<<0;
        return 0;
    }

    int temp = 0;
    for(int i = 0; i<26; i++)
    {
        if(alpha2[i] >0) temp++;
    }
    if(temp <= K)
    {
        cout<<N;
        return 0;
    }

    dfs(0,0);
    cout<<max_value;
   

    return 0;
}