#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int> q;
    int ans[n];  // 결과를 저장할 배열
    
    // 1부터 n까지 큐에 삽입
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    
    int index = 0;
    while (!q.empty()) {
        // k-1번 만큼 앞에서 제거하고 뒤로 넣기
        for (int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }
        // k번째 사람을 제거
        ans[index] = q.front();
        q.pop();
        index++;
    }

    // 결과 출력
    printf("<");
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", ans[i]);  // 마지막 값은 쉼표 없이 출력
        } else {
            printf("%d, ", ans[i]);  // 중간 값들은 쉼표와 함께 출력
        }
    }
    printf(">");

    return 0;
}
