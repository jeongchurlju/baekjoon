#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int arr[27]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103};
    for(int i=0; i<26; i++){
        if(arr[i]*arr[i+1]>n){
            printf("%d", arr[i]*arr[i+1]);
            break;
        }
    }

    return 0;
}
