#include<stdio.h>

void useLocal(void);
void useStaticLocal (void);
void useGlobal(void);

int x = 1;

int main(void){
	int x = 5;
	
	printf("1. local x in outer scope of main is %d\n", x);
	{
		int x = 7;
		printf("2. local x in inner scope of main is %d\n", x);
	}
	
	printf("3. local x in outer scope of main is %d\n", x);
	
	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	
	printf("\n4. local x in main is %d\n", x);
	
	return 0;
}

void useLocal(void){
	int x = 25;
	
	printf("\n5. local x in useLocal is %d after entering\n", x);
	x++;
	printf("6. local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void){
	static int x = 50;
	
	printf("\n7. local static x is %d on entering useStaticLocal", x);
	x++;
	printf("\n8. local static x is %d on exiting useStaticLocal\n", x);
}

void useGlobal(void){
	printf("\n9. global x is %d on entering useGlobal\n", x);
	x *= 10;
	printf("\n10. global x is %d on exiting useGlobal\n", x);
}
