#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, score;
    double grade, sum = 0, a = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> s >> grade >> score;
        if (score != "P")
        {
            a += grade;
        }

        if (score == "A+")
        {
            sum += grade * 4.5;
        }
        else if (score == "A0")
        {
            sum += grade * 4.0;
        }
        else if (score == "B+")
        {
            sum += grade * 3.5;
        }
        else if (score == "B0")
        {
            sum += grade * 3.0;
        }
        else if (score == "C+")
        {
            sum += grade * 2.5;
        }
        else if (score == "C0")
        {
            sum += grade * 2.0;
        }
        else if (score == "D+")
        {
            sum += grade * 1.5;
        }
        else if (score == "D0")
        {
            sum += grade * 1.0;
        }
    }
    cout.precision(6);
    cout << fixed;
    cout << sum / a;
    return 0;
}