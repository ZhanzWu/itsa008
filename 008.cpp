// 008.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    int num,i;
    int ans = 0;
    cin >> num;
    for (i = 2; i < num; i++)
    {
       int fnum = num % i;
        if (num % i == 0) { ans = 1; break; }
        if (i*i>num) { ans = 0; break; }
    }
    if (ans == 0) { cout << "YES\n"; }
    else
    {
        { cout << "NO\n"; }
    }
}
