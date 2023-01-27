#include<stdio.h>
#include<math.h>

int main(){
	int N, i, j, rootN, prime;
	int tab[100];
	
printf("Enter the value of N: ");
scanf("%d", &N);
	for (i = 1; i<=N; i++){
		tab[i-1] = i;
	
		}
	tab[0] = 0;
	rootN = sqrt(N);
	
	for (i=1; i<N; i++){
		if (tab[i] == 0){		
			continue;
		}
			prime = tab[i];
			if (prime > rootN){
				break;
			}
		
		
		for (j = i + 1; j<N; j++){
			if (tab[j] % prime == 0){
				tab[j] = 0;
			}
		}
	}
	
	for (i=0; i<N; i++){
		if ((tab[i]) == 0){
			continue;
		}
		printf("[ %d ]", tab[i]);
	}
	return 0;
}
