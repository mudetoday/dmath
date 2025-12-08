#include <stdio.h>
#include "dmath.h"
#include "dmathvec.h"

int a;
ivec_t v;

int main()
{
	a = 1;
	v = ivec_make(1, 2, 3);
	for (int i = 0; i < 10; i++) {
		a = a * 2;
		printf("Square root for a = %d is %d\n", a, i_sqrt(a));
	}

	a = ivec_len(v);
	printf("Length of vector V(1, 2, 3) is %d\n", a);

	return 0;
}
