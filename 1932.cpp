#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <array>
#include <list>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[501][501];
    int dp[501][501];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            scanf("%d", &arr[i][j]);
        }
    dp[0][0]=arr[0][0];

    }
    for(int i=0; i<n; i++){
        dp[i+1][0]=dp[i][0]+arr[i+1][0];
        for(int j=1; j<=i; j++){
            dp[i+1][j]=max(dp[i][j-1]+arr[i+1][j], dp[i][j]+arr[i+1][j]);
        }
        dp[i+1][i+1]=dp[i][i]+arr[i+1][i+1];
    }
    int ans=-1;
    for(int j=0; j<n; j++){
        ans=max(dp[n-1][j], ans);
    }
    printf("%d", ans);

    return 0;
}
