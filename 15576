#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int cnt=1;
    int arrcnt=0;
    stack <int> s;
    char arr[2*n];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);
        while(cnt<=x){
            s.push(cnt);
            cnt++;
            arr[arrcnt]='+';
            arrcnt++;

        }
        if(s.top()==x){
            s.pop();
            arr[arrcnt]='-';
            arrcnt++;
        }
        else{
            printf("NO");
            return 0;
        }
    }
    for(int i=0; i<2*n; i++){
        printf("%c\n",arr[i]);
    }
    return 0;

}
