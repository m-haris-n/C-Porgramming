#include <stdio.h>

int main(){
	int num, check, i;
	scanf("%d", &num);
	for(i = 2; i < num; i++){
		check = num%i;
	if(check == 0){
		printf("not prime.", num);
		break;
	}
	else{
		printf("%d", num);
		break;
	}
	}
	return 0;
}
