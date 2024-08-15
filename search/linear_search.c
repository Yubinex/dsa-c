#include <stdio.h>

int linear_search(int *haystack, int size, int needle){
	int i = 0;
	while(i < size){
		if(haystack[i] == needle)
			return (i);
		i++;
	}
	return (-1);
}

int main(void){
	int haystack[] = { 6, 3, 7, 4, 2 };
	int needle = 4;
	size_t haystack_size = sizeof(haystack) / sizeof(haystack[0]);

	int idx = linear_search(haystack, haystack_size, needle);

	if (idx < 0) printf("Needle not found...\n");
	else printf("The needle found at index : %i\n", idx);

	return (0);
}
