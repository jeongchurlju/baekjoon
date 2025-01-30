#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>

//일반 알파벳도 크로아티아 알파벳으로 간주해야함

using namespace std;

int main()
{
    string str; //입력 
    int cnt=0;
    cin >> str;
    int i=0; //글자 수에 따라 i값 올려주기위해 while문 사용
    while(i<str.length()){ //모든 조건 검사
        if(str[i]=='c'){
            if(str[i+1]=='='){
                cnt++;
                i=i+2;
            }
            else if(str[i+1]=='-'){
                cnt++;
                i=i+2;
            }
            else{
                cnt++; //i 증가시키지 않으면 글자수와 문자열수가 불일치해 무한루프에 빠질수 있음
                i++;
            }
        }
        else if(str[i]=='d'){
            if(str[i+1]=='z' && str[i+2]=='='){
                cnt++;
                i=i+3;
            }
            else if(str[i+1]=='-'){
                cnt++;
                i=i+2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else if(str[i]=='l'){
            if(str[i+1]=='j'){
                cnt++;
                i=i+2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else if(str[i]=='n'){
            if(str[i+1]=='j'){
                cnt++;
                i=i+2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else if(str[i]=='s'){
            if(str[i+1]=='='){
                cnt++;
                i=i+2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else if(str[i]=='z'){
            if(str[i+1]=='='){
                cnt++;
                i=i+2;
            }
            else{
                cnt++;
                i++;
            }
        }
        else{
            cnt++;
            i++;
        }
    }
    printf("%d", cnt);
    return 0;
}
