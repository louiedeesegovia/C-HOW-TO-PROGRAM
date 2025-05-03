	/*
	PSEUDOCODE 
	
	START
    DECLARE VARIABLE: gallons (float), miles (float), tank (float), overall (float), average (float)
    DECLARE VARIABLE: n (integer)

    SET overall to 0
    SET n to 0

    LOOP WHILE gallons is not -1
        DISPLAY "Enter the gallons used (-1 to end): "
        INPUT gallons

        IF gallons is not -1 then
            DISPLAY "Enter the miles driven: "
            INPUT miles

            CALCULATE tank as miles divided by gallons

            DISPLAY "The miles/gallon for this tank was" tank

            ADD tank to overall
            INCREMENT n by 1

            CALCULATE average as overall divided by n
        END IF
    END LOOP

    DISPLAY "The overall average miles/gallon was" average
	
	END	
	*/

#include<stdio.h>

int main(){
	float gallons, miles, tank=0, overall=0, average=0;
	int n=0;
		
	while(gallons != -1){
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
		
		if(gallons!=-1){
			printf("Enter the miles driven: ");
			scanf("%f", &miles);
	
			tank = miles/gallons;
	
			printf("The miles/gallon for this tank was %f\n\n", tank);
			
		}
		overall +=tank;
		n++;
		average = overall/n;
	}
	printf("\n\nThe overall average miles/gallon was %f", average);
	return 0;
}
