#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int max_count_num(int * arr, int len);


int main()
{
	int arr[5] = {1, 1, 1, 3, 1 };
	max_count_num(arr, 5);
	return 0;
}


int max_count_num(int * arr, int len)
{
	int i, j;
	int m;
	int count;
	int * max = (int *)malloc(sizeof(int) * len);
	if (max == NULL) {
		printf("malloc failed\n");
		exit(-1);
	}
	for (i = 0; i < len; i++) {
		max[i] = 0;
	}
	for (i = 0; i < len; i++) {
		count = 0;
		for (j = i; j < len; j++) {
			if (arr[i] == arr[j]) {
				max[i]++;
			}
		}
	}
	m = 0;
	for (i = 0; i < len; i++) {
		if (max[m] < max[i]) {
			m = i;
		}
	}
	printf("出現次數最多的元素為：%d， 出現次數為：%d\n", arr[m],max[m]);
	return 0;
}
