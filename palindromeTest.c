#include <stdio.h>

int main(void){
	int i = 0, k = 0;
	char word[1000];
	scanf("%s", word);
	while(word[i] != '\0') {
	i++;
	}
	if(i%2){
	int j = ((i+2)/2) - 1;
	while((word[j+k] == word[j-k]) &&(k!=j)){
		k++;
	}
	if(j==k){
		printf("yes");
	}else{
		printf("no");
	}
	}
	else{
	int j = (i/2) - 1;
	while((word[j+k] == word[j-k+1]) && (k!=j) ){
		k++;
		printf("%c %c \n%d %d\n", word[j+k], word[j-k], j, k);
	}
	if(j==k){
		printf("yes");
	}else{
		printf("no");
	}
	}
	return 0;
}
