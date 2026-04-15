#include <stdio.h>

int main() {
    int size,i,N,larg,sec_larg;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index:");
    scanf("%d", &N);
    if(N>size-1)
    {
        printf("Enter a valid index");
    }
    else{
      larg=0;
      sec_larg=-1;
    for(i=0;i<=N;i++)
    {
        if(arr[i]>larg)
        {
            sec_larg=larg;
            larg=arr[i];
            
        }
        else if(arr[i]>=sec_larg&&arr[i]!=larg)
        {
            sec_larg=arr[i];
        }

    }
    if(larg==sec_larg||sec_larg==0)
    {
        printf("-1");
    }
    else{
    printf("%d", sec_larg);
    }
    }
    return 0;
   
}
