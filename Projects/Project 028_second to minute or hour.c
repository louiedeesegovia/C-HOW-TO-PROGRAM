#include <stdio.h>

int main(){
	int sec, hour1, hour2, hour3, hour4, minute, second, remainder;
	printf("Enter the seconds: ");
	scanf("%d", &sec);
	
	if(sec==60){
		printf("\n\t00:01:00");
	}
	
	if(sec==3600){
		printf("\n\t01:00:00");
	}
	
	if(sec==86400){
		printf("\n\t24:00:00");
	}
	
	if(sec>=86401){
		printf("Error!");
	}
	
	if(sec<60){
		if(sec<=9){
			printf("\n\t00:00:0%d", sec);
		}
		else{
			printf("\n\t00:00:%d", sec);
		}
		
	}
	
	if(sec<=3599){
		
		second = sec/60;
		remainder = sec%60;
		
		if(second<=9){
			if(remainder<=9){
				printf("\n\t00:0%d:0%d\n", second, remainder);
			}
			else{
				printf("\n\t00:0%d:%d\n", second, remainder);
			}
		}
		
		if(second>=10){
			if(remainder>=10){
				printf("\n\t00:%d:%d", second, remainder);
			}
			else{
				printf("\n\t00:%d:0%d", second, remainder);
			}
		}
	}
	
	if(sec>=3601){
		
		second = sec/60;
		hour1 = second/60;
		hour2 = hour1*3600;
		hour3 = sec-hour2;
		minute = hour3/60;
		
		remainder = hour3%60;
		
		
		if(hour1<=9){
			if(minute<=9){
				if(remainder<=9){
					printf("\n\t0%d:0%d:0%d", hour1, minute, remainder);
				}
				else{
					printf("\n\t0%d:0%d:%d", hour1, minute, remainder);
				}
			}
			if(minute>9){
				if(remainder>9){
					printf("\n\t0%d:%d:%d", hour1, minute, remainder);
				}
				else{
					printf("\n\t0%d:%d:%d", hour1, minute, remainder);
				}
			}
		}
		
		if(hour1>9){
			if(minute>9){
				if(remainder>9){
					printf("\n\t%d:%d:%d", hour1, minute, remainder);
				}
				else{
					printf("\n\t%d:%d:0%d", hour1, minute, remainder);
				}
			}
		}
		
	}
		
	
	return 0;
}
