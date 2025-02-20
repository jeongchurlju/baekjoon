#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <array>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    deque<int> d;
    for(int i=1; i<=n; i++){
        int a;
        scanf("%d", &a);
        if(a==1){
            int x;
            scanf("%d", &x);
            d.push_front(x);
        }
        if(a==2){
            int x;
            scanf("%d", &x);
            d.push_back(x);
        }
        if(a==3){
            if(d.size()==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", d.front());
                d.pop_front();
            }
        }
        if(a==4){
            if(d.size()==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", d.back());
                d.pop_back();
            }
        }
        if(a==5){
            printf("%d\n", d.size());
        }
        if(a==6){
            if(d.size()==0){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        if(a==7){
            if(d.size()==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", d.front());

            }
        }
        if(a==8){
            if(d.size()==0){
                printf("-1\n");
            }
            else{
                printf("%d\n", d.back());

            }
        }
    }


    return 0;
}
