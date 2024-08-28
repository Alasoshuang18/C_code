#include <bits/stdc++.h>
using namespace std;
const int N = 26;
int f[N];
int main()
{
    int n,res = 0,num = 0;//res表示剩余的人数，num表示有报数
    int flag[28] = {0};
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        if(flag[i] == 0)
        {
            num++;

            if(num == 3)
            {
                flag[i] = 1;
                num=0;
                res--;
            }
            if(res == 1)
            {
                break;
            }
        }
    }

    return 0;
}