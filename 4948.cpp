#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    while(1)
    {
        int arr[246913]={0,};
        int cnt=0;
        arr[0]=1;
        arr[1]=1;
        int n;
        scanf("%d", &n);
        if(n==0){
            break;
        }
        //m=n //n=2n
        for(int i=2; i<2*n; i++)
        {
            if(arr[i]==0)
            {
                for(int j=2*i; j<=2*n; j+=i)
                {
                    arr[j]=1;
                }
            }
        }
        for(int i=n+1; i<=2*n; i++){
            if(arr[i]==0){
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
