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
    int cnt=0;
    for(int i=1; i<=n; i++){
        string str=to_string(i);
        for(int j=0; j<str.length(); j++){
            if(str[j]=='3' || str[j]=='6' || str[j]=='9'){
                cnt++;
            }
        }
    }
    printf("%d", cnt);


    return 0;
}
