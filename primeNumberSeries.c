#include <stdio.h>

int main(){
	int i, j, num1, num2, first, check;
	printf("THIS PROGRAM PRINTS ALL PRIME NUMBERS IN THE GIVEN RANGE\n");
	printf("ENTER RANGE BELOW\n");
	printf("FROM:");
	scanf("%d", &num1);
	printf("TO:");
	scanf("%d", &num2);
	if(num1 == 1){
	for(i=num1+1;i<=num2;i++){
			check = 0;
		for(j=2;j<=i/2;j++){
			if(i%j == 0){
				check = 1;
				break;
			}
		}
		if(check == 0){
			printf("%d\t", i);
		}
	}	
	}else{
	for(i=num1;i<=num2;i++){
			check = 0;
		for(j=2;j<=i/2;j++){
			if(i%j == 0){
				check = 1;
				break;
			}
		}
		if(check == 0){
			printf("%d\t", i);
		}	
	}
	}
	return 0;
}
