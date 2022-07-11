#include<stdio.h>

void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void merge(int A[], int low,int mid,int high){
    int i,j,k;
    int B[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
            B[k]=A[i];
            i++;
            k++;
        }
    while(j<=high){
        B[k]=A[j];
        j++;k++;
    }
    for(int i=low;i<=high;i++){
        A[i]=B[i];
    }

}

void mergeSort(int A[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}


int main(){

    int A[]={3,5,13,2,2,44,12};
    int n=7;
    printArray(A,n);
    mergeSort(A,0,6);
    printArray(A,n);
    return 0;
}