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
    int dp[1000001]={0,};
    dp[1]=0;
    for(int i=2; i<=n; i++){

        if(i%3==0 && i%2==0){
            dp[i]=min(dp[i/3]+1, dp[i/2]+1);
        }
        else if(i%3==0){
            dp[i]=min(dp[i/3]+1, dp[i-1]+1);
        }
        else if(i%2==0){
            dp[i]=min(dp[i/2]+1, dp[i-1]+1);
        }
        else{
            dp[i]=dp[i-1]+1;
        }
        //cout<<i<<" "<<dp[i]<<endl;

    }
    printf("%d", dp[n]);
    return 0;
}
