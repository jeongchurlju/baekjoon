#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <array>

using namespace std;
//덱 찾는 것의 위치를 먼저 파악한 다음에 탐색을 하자
//덱은 인덱스번호에 직접 접근이 가능하므로 그걸 잘 이용
//비용 (cost)가 작은 쪽으로 하여 최솟값 구하기
int main()
{
    deque<int> d;
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];

    for(int i=0; i<m; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n; i++){
        d.push_back(i);
    }
    int total=0;

    for(int i=0; i<m; i++){
       int target=arr[i];
       int idx=0;
       for(int j=0; j<d.size(); j++){ //찾는 숫자의 위치를 먼저 파악
        if(d[j]==target){
            idx=j;
            break;
        }
       }
       int left_cost=idx;
       int right_cost=d.size()-idx;
       if(left_cost<=right_cost){ //더 쉽게 찾을 수 있는 방법 탐색
            total=total+left_cost;
            for(int j=0; j<left_cost; j++){
                int temp=d.front();
                d.pop_front();
                d.push_back(temp);
            }

       }
       else{
            total=total+right_cost;
            for(int j=0; j<right_cost; j++){
                int temp=d.back();
                d.pop_back();
                d.push_front(temp);
            }
       }
       d.pop_front();
    }

    printf("%d", total);



    return 0;
}
