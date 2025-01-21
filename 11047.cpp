#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;  //입력
    int k; 
    int cnt=0;
    scanf("%d %d", &n, &k);
    int arr[n]; //동전의 가치를 저장할 배열
    for(int i=0; i<n; i++) // 배열 입력
    {
        scanf("%d", &arr[i]);
    }
    int i= n-1;
    while(k!=0) //k가 0이 될때까지 while문으로 동전가치를 빼주고, 빼줄때마다 cnt 1씩 증가
    {


        if(k-arr[i]>=0)
        {
            k=k-arr[i];
            cnt++;
        }
        else if(k-arr[i]<0)
        {
            i--;

        }

    }


    printf("%d", cnt); //출력


    return 0;
}
