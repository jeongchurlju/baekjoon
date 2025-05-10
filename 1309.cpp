#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <array>
#include <list>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long dp[n+1];
    dp[1]=3;
    dp[2]=7;
    for(int i=3; i<=n; i++){
        dp[i]=(2*dp[i-1]+dp[i-2])%9901;
    }
    printf("%lld", dp[n]%9901);

    return 0;
}
