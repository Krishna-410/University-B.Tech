#include <stdio.h>
#include <limits.h>

int partition (int arr[],int low,int high){
    int temp;
    int pivot=low;
    int P=low+1;
    int Q=high;
    while(P<=Q){
        while(arr[P]<=arr[pivot]){
            P++;
        }
        while(arr[Q]>arr[pivot]){
            Q--;
        }
        if(P<Q){
            temp=arr[P];
            arr[P]=arr[Q];
            arr[Q]=temp;
        }
    }
    temp=arr[pivot];
    arr[pivot]=arr[Q];
    arr[Q]=temp;
    return Q;
}
void Quicksort(int arr[],int low,int high){
    if(low<high){
    int pivotIndex=partition(arr,low,high);
        Quicksort(arr,low,pivotIndex-1);
        Quicksort(arr,pivotIndex+1,high);}
}

int main(){

int Unsorted_Array[16]={4,18,5,20,17,29,1,6,6,8,9,15,782,552,544,523,INT_MAX};

    Quicksort(Unsorted_Array,0,16);

    printf("{");
    for(int i=0;i<16;i++){
        printf("%d ,",Unsorted_Array[i]);
    }
    printf("}");
    return 0;
}