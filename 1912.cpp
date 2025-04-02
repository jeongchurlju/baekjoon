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
//10 -4 3 1 5 6 -35 12 21 -1
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int m=-1001; //최댓값
    int sum=0; //합
    for(int i=0; i<n; i++){
        sum=max(arr[i], sum+arr[i]);
        m=max(m, sum);
    }
    printf("%d", m);
    return 0;
}
