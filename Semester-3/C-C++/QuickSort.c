#include <stdio.h>
#include <limits.h>


int partition(int arr[],int low,int high);
void QuickSort(int arr[], int low,int high);

int main(){
    int array[]={4,18,2,5,10,17,29,INT_MAX};
    QuickSort(array,0,6);
    for(int i=0;i<7;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
   return 0;}

int partition(int arr[],int low,int high){

    int pivot=low;
    int P=low+1;
    int Q=high;
    int temp;

    while(P<=Q){
        while(arr[P]<=arr[pivot]){
            P++;}
        while(arr[Q]>arr[pivot]){
            Q--;}
    
        if(P<Q){
            temp=arr[P];
            arr[P]=arr[Q];
            arr[Q]=temp;}}
    
        temp=arr[pivot];
        arr[pivot]=arr[Q];
        arr[Q]=temp;
        return Q;
    }

void QuickSort(int arr[],int low, int high){
    if(low<high){
    int PivotIndex=partition(arr,low,high);
    QuickSort(arr,low,PivotIndex-1);
    QuickSort(arr,PivotIndex+1,high);}
}