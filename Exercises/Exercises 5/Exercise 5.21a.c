#include<stdio.h>

int drawparallelograms(int width, int height){
	int i, j, k, n = height;
	
	for(k = 0; k < n; k++){
		for(i = 0; i < height - 1; i++){
		printf(" ");
	}
	for(j = 0; j < width; j++){
			printf("*");
		}
		printf("\n");
		height = height - 1;
	}
	
}

int drawsquare(int size){
	int i, j;
	
	for(i = 0; i < size; i++){
		for(j = 0; j<size; j++){
			printf("*");
		}
		printf("\n");
	}
	
}

int drawrectangle(int width, int height){
	int i, j;
	
	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			printf("*");
		}
		printf("\n");
	}
}

int drawrhombus(int size){
	int space1 = size / 2;
	int space2 = 1;
	int star1 = 1;
	int star2 = size - 2;
	int i, j, k, n, m;
	int count = 1;
	
	for(i = 0; i < size; i++){
		if(count <= (size/2)+1){
			for(j = 0; j < space1; j++){
			printf(" ");
		}
		for(k = 1; k <= star1; k++){
			printf("*");
			}
			space1 = space1 - 1;
			star1 = star1 + 2;
		}
		
		else{
			for(n = 1; n <= space2; n++){
				printf(" ");
			}
			for(m = 1; m <= star2; m++){
				printf("*");
			}
			space2 = space2 + 1;
			star2 = star2 - 2;
		}
		count++;
		printf("\n");
	}
	
}

int main(){
	int choice;
	int width, height;
	int size;
	
	printf("[ 1 ] Parallelograms\n");
	printf("[ 2 ] Square\n");
	printf("[ 3 ] Rectangle\n");
	printf("[ 4 ] Rhombus\n");
	printf("Enter a number: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:{
			printf("Enter width: ");
			scanf("%d", &width);
			printf("Enter height: ");
			scanf("%d", &height);
			drawparallelograms(width, height);
			break;
		}
		case 2:{
			printf("Enter side square: ");
			scanf("%d", &size);
			drawsquare(size);
		}
		case 3:{
			printf("Enter width: ");
			scanf("%d", &width);
			printf("Enter height: ");
			scanf("%d", &height);
			drawrectangle(width, height);
			break;
		}
		case 4:{
			printf("Enter size: ");
			scanf("%d", &size);
			if(size % 2 == 1){
				drawrhombus(size);
			}
			else{
				printf("Invalid Input!");
			}
			break;
		}
		default:
			printf("Invalid Input!");
			break;
	}
	
	
	return 0;
}
