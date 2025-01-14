#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    double m=0; //최댓값 저장해줄 변수
    scanf("%d",&n); //실수의 개수 n 입력받기
    double arr[n]; //실수들을 저장할 배열
    for(int i=0; i<n; i++){
        scanf("%lf",&arr[i]);
    } //실수들을 배열에 집어넣기
    double mul=1;
    for(int i=0; i<n; i++){
        mul=max(arr[i],mul*arr[i]);
        m=max(m,mul);

    }
    printf("%.3lf\n",m);

    return 0;
}
