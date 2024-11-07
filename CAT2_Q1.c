#include <stdio.h>

int main() {
	int i,j;
    
    int scores1[2][2] = {{62,92},
	{84,72}};
int scores2[2][2]={{35,70},
	{59,67}};
        
    printf("scores1\n"); 
    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
        	printf("%d ",scores1[i][j]);
		}
	    printf("\n");	
	}

	printf("scores2\n"),
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",scores2[i][j]);
		}
		printf("\n");
           

    return 0;
}
