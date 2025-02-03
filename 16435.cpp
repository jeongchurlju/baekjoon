#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
//정렬 알고리즘에 대한 이해와 조건에 따라 값을 다르게 출력할수 있어야 하는 문제
using namespace std;

int main()
{
    int n; //입력
    int l;
    scanf("%d %d", &n, &l);
    int arr[n];
    for(int i=0; i<n; i++){ //열매의 높이를 배열에 저장
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+n); //높이가 가장 작은 열매부터 먹게 sort함수로 정렬 (algorithm 헤더파일 사용)
    int cnt=0; 
    int check=0; //중복 출력 방지를 위한 변수
    for(int i=0; i<n; i++){
        if(l>=arr[i]){ //높이에 따른 구분
            cnt++;
            l++;
        }
        else{

            printf("%d", l);
            check=1; //1로 바꿔줘서 이미 출력을 했다고 표시
            break;
        }
    }
    if(check==0){ //반복문을 나오고도 모든 열매를 다 먹었을 경우 출력
        printf("%d", l);
    }
    }
