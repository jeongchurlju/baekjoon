// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
//hello 

using namespace std;

int main() {
    stack<char> a;
    int check=0;
    while(true){
            check=0;
        string str;
        getline(cin, str);
        if(str=="."){
            break;
        }
        else{
            for(int i=0; i<str.length(); i++){
                if(str[i]=='(' || str[i]=='['){
                    a.push(str[i]);
                }
                else if(str[i]==')'){
                    if(!a.empty()) && a.top()=='('){
                       a.pop();
//!a.em
                    }
                    else{
                        printf("no\n");
                        check=1;
                        break;


                    }
                }
                else if(str[i]==']'){
                    if(!a.empty()) && a.top()=='['){
                       a.pop();

                    }
                    else{
                        printf("no\n");
                        check=1;
                        break;
                    }
                }

        }
        if(check==0 && a.empty()){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        }
        check=0;


    while(!a.empty()){
        a.pop();
    }
    }

    return 0;
}
