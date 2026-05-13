#include<stdio.h>

int main(void)
{
	int passes = 0;
	int failures = 0;
	int student = 1;
	int result;
	int value = 1;
	
	while (student <= 10){
		printf("Student %d [1 = pass, 2 = fail]: ", value++);
		scanf("%d", &result);
		
		if (result == 1){
			passes = passes + 1;
		}
		else if(result == 2){
			failures = failures + 1;
		}
		else{
			--student;
			--value;
		}
		student = student + 1;
	}
	printf("Passed %d\n", passes );
	printf("Failed %d\n", failures);
	
	if (passes > 8){
		printf("Bonus to instructor!\n");
	}
	return 0;
}
