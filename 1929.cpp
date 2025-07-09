#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[1000001];
int main() {
	arr[0] = 1;
	arr[1] = 1;
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			for (int j = 2 * i; j <= n; j += i) {
				arr[j] = 1;
			}
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0) {
			printf("%d\n", i);
		}
	}
	

}
