/*You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for each year
of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones.
Your task is to find out how many candles she can successfully blow out.
For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 4,4,1,3,
she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.

Input:
4
3 2 1 3
Output:
2
*/
#include<stdio.h>
#include<stdlib.h>

int birthdayCakeCandles(int ar_count, int* ar) {
int count=0,large=*(ar + 0);
for(int i=0;i<ar_count;i++)
{
    if(large<(*(ar + i)))
    {
        large=*(ar+i);
    }
}
for(int i=0;i<ar_count;i++)
if(large==*(ar+i))
count++;

return count;

}
int main()
{
    int *ar,i,n;
    printf("Enter the number of candles present : ");
    scanf("%d",&n);
    ar=(int *)malloc(n*sizeof(int));
    printf("Enter the heights of the candles : ");
    for(i=0;i<n;i++)
        scanf("%d",(ar+i));
    printf("The number of candles that has to blow is %d.",birthdayCakeCandles(n,ar));
}
