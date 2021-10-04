#include <stdio.h>

int main(void){
	int i, j, k, l = 0, m, n = 0;
	char word[51];
	scanf("%s",word);
	while(word[i] != '\0') i++;
	int swap = 0;
	
	for(j = 0; j < i - 1; j++){
		for(k = 0; k < i-1; k++){
			if(word[k] > word[k+1]){
				swap = word[k];
				word[k] = word[k+1];
				word[k+1] = swap;
			}
		}
	}
	for(m = 0; m <i; m++){
		while(word[n] == word[l+1]){
		l++;
		}
		n = l;
		printf("%d\n", n);
	}	
	return 0;
}
