#include <stdio.h>                    

// shortest logic of pascal triangle with less time complexity.
int main(){
    int row, rowNum, col, space, n, i;
    printf("Pascal ucegeninin istenen row sayisini giriniz: ");
    scanf("%d",&row); 
		for(row = 0; row < rowNum; row++) {
			for(space = 0; space < (rowNum - row); space++) {
				printf("  ");
			}
			n = 1;
			for(col = 0; col <= row; col++) {
				printf("%d ",n);
				n = n * (row - col) / (col + 1);
			}
			printf("\n");                          
    }
    return 0;

}
