#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <cstdlib>

using namespace std;


int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        string str;
        cin >> str;
        int acnt=0;
        int bcnt=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]=='a'){
                acnt++;
            }
            else if(str[i]=='b'){
                bcnt++;
            }
        }
        if(acnt>=bcnt){
            printf("%d\n",bcnt);
        }
        else{
            printf("%d\n",acnt);
        }

    }



    return 0;
}
