#include <stdio.h>

int bs_list(int *haystack, int size, int needle){
	int lo = 0;
	int hi = size - 1;
	int m;
	while (lo < hi){
		m = lo + (hi - lo) / 2;
		if (haystack[m] == needle) return (m);
		else if (haystack[m] > needle) hi = m;
		else lo = m + 1;
	}
	return (-1);
}

int main(void){
	int haystack[] = { 5, 2, 7, 9, 4 };
	int needle = 9;
	size_t haystack_size = sizeof(haystack) / sizeof(haystack[0]);

	int idx = bs_list(haystack, haystack_size, needle);

	if (idx < 0) printf("Needle not found...\n");
	else printf("The needle found at index : %i\n", idx);

	return (0);
}
