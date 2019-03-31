/*
chp02. C data types
Âü°í: https://en.wikipedia.org/wiki/C_data_types
*/

#include <stdio.h>
#include <float.h>

int main(void) {
	char i[3] = "se";
	printf("%s\n", i);

	printf("%E - %E\n", FLT_MIN, FLT_MAX);
	printf("%E - %E\n", DBL_MIN, DBL_MAX);
	return 0;
}