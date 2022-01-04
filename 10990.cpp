#include <iostream>
#include <string>
#include <vector>

#define FASTio ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main()
{
    FASTio;
    int n;

    cin >> n;

    // 첫번째 줄
    for(int i = 0; i < n-1; i++)
    {
        cout << " ";
    }
    cout << "*" << endl;
    
    // 2 ~ n번째 줄
    for(int i = 1; i < n; i++)
    {
        // 외부 공백
        for(int j = 1; j < n-i; j++)
        {
            cout << " ";
        }
        cout << "*";
        // 내부 공백
        for(int k = 0; k < i*2 - 1; k++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}