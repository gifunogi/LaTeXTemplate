#include <stdio.h>

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return fib(n-1) + fib(n-2);
}

int main() {
	int n;
	while(1) {
		printf("n -> ");
		scanf("%d", &n);
		printf("f(%d) = %d\n", n, fib(n));
	}

	return 0;
}
