#include<stdio.h>
#include<limits.h>


void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}

void countSort(int A[],int n){
    int max=maximum(A,n);
    int B[max+1];
    for(int i=0;i<max+1;i++){
        B[i]=0;
    }
    for(int i=0;i<n;i++){
        B[A[i]]=B[A[i]]+1;
    }
    int a=0,b=0;
    while(a<=max){
        if(B[a]>0){
            A[b]=a;
            B[a]=B[a]-1;
            b++;
        }
        else{
            a++;
        }
    }


}

int main(){

    int A[]={3,5,13,2,2,44,12};
    int n=7;
    printArray(A,n);
    countSort(A,n);
    printArray(A,n);
    return 0;
}