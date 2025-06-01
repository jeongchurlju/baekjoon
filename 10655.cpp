#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <array>
#include <list>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <climits>

using namespace std;


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i][0]);
        scanf("%d", &arr[i][1]);
    }

    int total = 0;
    for (int i = 0; i < n - 1; i++)
    {
        total += abs(arr[i][0] - arr[i + 1][0]) + abs(arr[i][1] - arr[i + 1][1]);
    }

    int m = INT_MAX;

    for (int i = 1; i < n - 1; i++)
    {
        int before = abs(arr[i - 1][0] - arr[i][0]) + abs(arr[i - 1][1] - arr[i][1]);
        int after = abs(arr[i][0] - arr[i + 1][0]) + abs(arr[i][1] - arr[i + 1][1]);
        int skip = abs(arr[i - 1][0] - arr[i + 1][0]) + abs(arr[i - 1][1] - arr[i + 1][1]);

        int new_dist = total - (before + after) + skip;
        m = min(m, new_dist);
    }

    printf("%d", m);

    return 0;
}
