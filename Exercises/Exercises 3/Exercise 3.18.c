/*
	PSEUDOCODE
	START
		DECLARE account_number (integer)
		DECLARE beginning_balance, charges, credit, limit, total (float)

		LOOP WHILE account_number != -1
    		DISPLAY "Enter account number (-1 to end): "
    		INPUT account_number

    		IF account_number != -1 THEN
        		DISPLAY "Enter beginning balance: "
        		INPUT beginning_balance

        		DISPLAY "Enter total charges: "
        		INPUT charges

        		DISPLAY "Enter total credits: "
        		INPUT credit

        		DISPLAY "Enter credit limit: "
        		INPUT limit

        		CALCULATE total = beginning_balance + charges - credit

        			IF total > limit THEN
            			DISPLAY "Account: ", account_number
            			DISPLAY "Credit limit: ", limit
            			DISPLAY "Balance: ", total
            			DISPLAY "Credit Limit Exceeded."
        			END IF
    		END IF
		END WHILE
	END

*/
#include<stdio.h>

#include<stdio.h>

int main(){
    int account_number = 0;
    float beginning_balance, charges, credit, limit, total;
    
    while (account_number != -1){
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
        
        if(account_number != -1){
            printf("Enter beginning balance: ");
            scanf("%f", &beginning_balance);
            
            printf("Enter total charges: ");
            scanf("%f", &charges);
            
            printf("Enter total credits: ");
            scanf("%f", &credit);
            
            printf("Enter credit limit: ");
            scanf("%f", &limit);
            
            total = beginning_balance + charges - credit;
            
            if(total > limit){
                printf("Account: %d\n", account_number);
                printf("Credit limit: %.2f\n", limit);
                printf("Balance: %.2f\n", total);
                printf("Credit Limit Exceeded.\n");
            }
            
            printf("\n");
        }
    }
    
    return 0;
}

