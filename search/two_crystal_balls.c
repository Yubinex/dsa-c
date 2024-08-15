#include <stdio.h>
#include <math.h>

int two_crystal_balls(int *breaks, int size){
	int jmp_amount = floor(sqrt(size));
	int i = jmp_amount;
	int j;

	while (i < size){
		if (breaks[i]) break;
		i += jmp_amount;
	}
	i -= jmp_amount;
	j = 0;
	while (j < jmp_amount && i < size){
		if (breaks[i]) return (i);
		j++;
		i++;
	}
	return (-1);
}

int main(void){
	int breaks[] = { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1 };
	int idx = two_crystal_balls(breaks, sizeof(breaks) / sizeof(breaks[0]));

	if (idx < 0) printf("The Crystal Ball never breaks!!!\n");
	else printf("The Crystal Ball breaks at index : %i\n", idx);

	return (0);
}
