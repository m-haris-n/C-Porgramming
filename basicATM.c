#include <stdio.h>

int main(void){
	int balance, option = 0, dep, draw;
	printf("\t\tATM\n");
	printf("ENTER YOUR CURRENT BALANCE:");
	scanf("%d", &balance);
	while(option!=4){
		printf("1.CHECK BALANCE\n2.DEPOSIT\n3.WITHDRAW\n4.EXIT\nENTER NUMBER FOR OPTION:");
		scanf("%d", &option);
		if(option>4){
			printf("No Such Option.");
			return 0;
		}
		if(option == 1){
		printf("YOUR CURRENT BALACNE IS %d\n", balance);
		}
		else if(option == 2){
			printf("ENTER AMOUNT:");
			scanf("%d", &dep);
			balance = balance + dep;
		}
		else if(option == 3){
			printf("ENTER AMOUNT:");
			scanf("%d", &draw);
			balance = balance - draw;
		}
	}
	return 0;
}
