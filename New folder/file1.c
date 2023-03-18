
#include <stdio.h>

__attribute__ ((section (".nagy")))
int testVar=0;

void main(void)
{
	testVar++;
	printf("%d", testVar);
}
	