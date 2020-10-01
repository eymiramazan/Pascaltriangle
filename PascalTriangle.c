#include <stdio.h>                              /*The Pascal Value for the element k 
                                                in row n is calculated bu this combination: n!/(n-k)!*k!  */

int factoriel(int n){                      /*Factoriel n equals n!=n * (n-1)!*/    
    int fact=1;                                 
    for (int i = 1; i< n+1; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main(){
    int row,temp,i;
    printf("Input the row value of Pascal triangle: ");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (temp=0; temp <= (row-i); temp++)     /*Gaps between values are adjusted here for better printing */
        {
            printf(" ");
        }
        for (temp = 0; temp <= i; temp++)           /*Values are calculated here and printing*/
        {
            printf("%d ",factoriel(i)/(factoriel(temp)*factoriel(i-temp)));
        }
        printf("\n");                               
    }
    scanf("d");    
    return 0;
} 
