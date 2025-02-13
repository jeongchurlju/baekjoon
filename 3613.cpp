#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
#include <queue>

using namespace std;
//예외 처리를 잘해야 하는 문제
//if문과 조건연산자 활용을 잘해야합니다...
int main()
{
    string str;
    cin >> str;
    int ccnt=0;
    int javacnt=0;
    for(int i=0; i<str.length(); i++){
        if(i==0 && 65<=str[i] && str[i]<=90){ //5. 첫번째 글자가 대문자인 경우
            printf("Error!");
            return 0;
        }
        if(str[i]=='_' && str[i+1]=='_'){
            printf("Error!");
            return 0;
        }


        if(str[i]=='_'){
        if(i==str.length()-1 || i==0){ //1. 첫번째 글자가 _ 인 경우 / 5. 첫번째 글자가 대문자
                printf("Error!");
                return 0;
            }

            ccnt++;
        }
        else if(65<=str[i] && str[i]<=90 && str[i]!='_'){
            javacnt++;
        }
    }
    if((ccnt!=0 && javacnt==0) || (ccnt==0 && javacnt==0)){ //c++
        for(int i=0; i<str.length(); i++){
            if(65<=str[i] && str[i]<=90){
                printf("Error!");
                return 0;

            }
        }
        for(int i=0; i<str.length(); i++){
            if(str[i]=='_'){
                str[i+1]=str[i+1]-32;
                str.erase(i,1);
            }
        }
        cout << str << endl;
    }
    else if(ccnt==0 && javacnt!=0){ //java
        for(int i=0; i<str.length(); i++){
            if(65<=str[i] && str[i]<=90){
                 str.replace(i, 1, "_" + string(1, char(str[i] + 32)));
            }
        }
        cout << str << endl;
    }
    else{
        printf("Error!");
    }
    return 0;
}
