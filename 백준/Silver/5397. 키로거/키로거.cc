#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        string temp;
        cin>>temp;
        list<char> lt;
        auto iter = lt.begin();
        for(int j = 0; j<temp.size(); j++)
        {
            if(temp[j] == '<')
            {
                if(iter != lt.begin())
                {
                    iter--;
                }
            }else if(temp[j] == '>')
            {
                if(iter != lt.end())
                {
                    iter++;
                }
            }
            else if(temp[j] == '-')
            {
                if(iter != lt.begin())
                {
                    iter = lt.erase(--iter);

                }
                
            }
            else{
                lt.insert(iter, temp[j]);

            }
        }
        for(auto it = lt.begin(); it!= lt.end(); it++)
        {
            cout<<*it;
        }
        cout<<"\n";
    }
    

    return 0;
}