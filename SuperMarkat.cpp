#include <bits/stdc++.h>
#define N 5010
using namespace std;
int n, m, a[N], b[N];
int main(){
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++){
		scanf("%d%d", &a[i], &b[i]);
	}

	int minA = a[1], minB = b[1];
	for (int i = 2; i <= n; i++){
		if (minA * b[i] > minB * a[i]){
			minA = a[i];
			minB = b[i];
		}
	}

	printf("%.8lf\n", (double) minA * m / (double) minB);
}
