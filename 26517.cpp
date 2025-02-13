#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    long long k;
    scanf("%lld", &k);
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(a*k+b==c*k+d){
        printf("Yes %lld\n", a*k+b);
    }
    else{
        printf("No\n");
    }
}
