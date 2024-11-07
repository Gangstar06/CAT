#include <stdio.h>

int main() {
	int i,j;
    
    int scores[2][2] = {{62,92},{35,70}};
        
    printf("scores\n"); 
    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        	printf("%d ",scores[i][j]);
		}
	    printf("\n");	
	}
           

    return 0;
}