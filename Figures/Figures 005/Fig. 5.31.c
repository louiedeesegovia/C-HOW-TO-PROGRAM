#include<stdio.h>
#include<float.h>

int main(){
	printf("Float Properties:\n");
	printf("FLT_MIN	= %e\n", FLT_MIN);
	printf("FLT_MAX = %e\n", FLT_MAX);
	printf("FLT_DIG = %d\n", FLT_DIG);
	printf("FLT_EPSILON = %e\n", FLT_EPSILON);
	
	printf("\nDouble Properties:\n");
	printf("DBL_MIN = %e\n", DBL_MIN);
	printf("DBL_MAX = %e\n", DBL_MAX);
	printf("DBL_DIG = %d\n", DBL_DIG);
	printf("DBL_EPSILON = %e\n", DBL_EPSILON);
	
	printf("\nLong Double Properties:\n");
	printf("LDBL_MIN = %Le\n", LDBL_MIN);
	printf("LDBL_MAX = %Le\n", LDBL_MAX);
	printf("LDBL_DIG = %d\n", LDBL_DIG);
	printf("LDBL_EPSILON = %Le\n", LDBL_EPSILON);
	
	return 0;
}
