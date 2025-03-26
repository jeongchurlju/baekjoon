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
    int n;
    scanf("%d", &n);
    n=1000-n;

    int cnt=0;
    while(1){
        if(n>=500){
            n=n-500;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n<500 && n>=100){
            n=n-100;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n<100 && n>=50){
            n=n-50;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n<50 && n>=10){
            n=n-10;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n<10 && n>=5){
            n=n-5;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n<5 && n>=1){
            n=n-1;
            cnt++;
            if(n==0){
                break;
            }
        }
        if(n==0){
            break;
        }

    }
    printf("%d", cnt);
    return 0;
}
//500 100 100 100 100 50 10 10 10 10 5 1 1 1 1
