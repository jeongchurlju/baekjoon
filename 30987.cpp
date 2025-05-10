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
    int x1, x2;
    scanf("%d %d", &x1, &x2);
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    long long lazor=0;
    lazor=(((a)*(x2)*(x2)*(x2))/3+((b-d)*(x2)*(x2))/2+(c-e)*(x2))-(((a)*(x1)*(x1)*(x1))/3+((b-d)*(x1)*(x1))/2+(c-e)*(x1));
    printf("%lld", lazor);

    return 0;
}
