#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>
#include <vector>
#include <array>
#include <list>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        long long zero[50];
        long long one[50];
        zero[0]=1;
        zero[1]=0;
        one[0]=0;
        one[1]=1;
        for(int j=2; j<=n; j++){
            zero[j]=zero[j-1]+zero[j-2];
            one[j]=one[j-1]+one[j-2];
        }
        printf("%d %d\n", zero[n], one[n]);
    }
    return 0;
}

