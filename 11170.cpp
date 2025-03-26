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
        int cnt=0;
        int n, m;
        scanf("%d", &n);
        scanf("%d", &m);
        for(int j=n; j<=m; j++){
            string str;
            str=to_string(j);
            for(int k=0; k<str.length(); k++){
                if(str[k]=='0'){
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
