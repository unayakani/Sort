#include <stdio.h>
#define larr 10

void bubble_sort(int* parr, int plarr) {
	for (int i = plarr; i > 0; i--) {
		int one = 0; int two = 1;
		for (int j = plarr - 1; j > 0; j--) {
			if (parr[one] > parr[two]) {
				int buff = parr[two];
				parr[two] = parr[one];
				parr[one] = buff;
				one++;
				two++;
			} else {
				one++;
				two++;
			}
		}
	}
}

int main() {
	int arr[larr] = {4, 2, 5, 8, 7, 1, 9, 10, 3, 6};
	bubble_sort(arr, larr);
	for (int i = 0; i < larr; i++) {
		printf("%d ", arr[i]);
	} printf("\n");
	return 0;
}
