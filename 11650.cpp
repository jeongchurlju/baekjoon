#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>
#include <vector>
using namespace std;



int main()
{
	int n;
	scanf("%d", &n);
	vector<pair <int, int>> p;
    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        p.push_back(make_pair(a, b));
    }
    sort(p.begin(), p.end());
    for(int i=0; i<n; i++){
    printf("%d %d\n", p[i].first, p[i].second);
    }


	return 0;
}

