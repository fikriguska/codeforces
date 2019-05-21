#include <stdio.h>
#include <string.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	
	char in[n][1000];
	
	for(i=0; i<n; i++){
		scanf("%s", in[i]);
	}
	
	for(i=0; i<n; i++){
		if(strlen(in[i])>10){
			printf("%c", in[i][0]);
			printf("%d", strlen(in[i])-2);
			printf("%c", in[i][strlen(in[i])-1]);
		}
		else
			printf("%s", in[i]);
		printf("\n");
	}
}
