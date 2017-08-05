//占用空间和时间都比较少的一种算法。
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long num[50];
 
int main()
{
    long long k;
    cin >> k;
    long long t = k / 50;
    for(int i = 0;i < 50;i ++) num[i] = k / 50;
    k %= 50;
    for(int i = 0;i < 50;i ++)
    {
        if(i != (50 - k)) num[i] += i;
        else num[i] += 50;
    }
       printf("50\n");
    for(int i = 0;i < 49;i ++) printf("%lld ",num[i]);
    printf("%lld\n",num[49]);
    return 0;
}