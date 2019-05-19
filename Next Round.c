#include <stdio.h>

int main(){
		int n, k, i, j, c=0,temp;
		scanf("%d %d", &n, &k);
		
		int bil[n];
		
		for(i=0; i<n; i++){
			scanf("%d", &bil[i]);
		}
		
		for(i=0; i<n; i++){
			for(j=i+1; j<n; j++){
				if(bil[i]<bil[j]){
					temp=bil[i];
					bil[i]=bil[j];
					bil[j]=temp;
				}
			}
		}
		
		i=0;
		
		while(i<k || bil[i]==bil[i-1]){
			if(bil[i]==0) break;
			c++;
			i++;
		}
		
		printf("%d", c);
		
		
}
