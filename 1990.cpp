#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

bool arr[10000000];

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b >= 10000000) {
		b = 10000000;
	}
	int cnt = 0;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= b; i++) {
		if (arr[i] == 0) {
			for (int j = 2 * i; j <= b; j += i) {
				arr[j] = 1;
			}
		}
	}
	for (int i = a; i <= b; i++) {
		if (arr[i] == 0) {
			string str = to_string(i);
			string str1=str;
			reverse(str.begin(), str.end());
			if(str==str1){
                printf("%d\n", i);
			}

		}
	}
	printf("-1");




	return 0;
}
