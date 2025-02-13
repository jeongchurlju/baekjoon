
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[str.length()];
    for(int i=0; i<str.length(); i++){
        arr[i]=str[i]-48;
    }
    sort(arr, arr+str.length());
    for(int i=str.length()-1; i>=0; i--){
        printf("%d",arr[i]);
    }
}
