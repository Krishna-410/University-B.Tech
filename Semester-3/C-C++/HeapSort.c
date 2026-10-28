#include <stdio.h>
#include <limits.h>


void heapify(int arr[],int n,int i);
void heap(int arr[],int high);

int main(){

 int array[]={40, 10, 70, 30, 80, 15, 50 ,12,INT_MAX};
printf("Before Sorting: ");
 printf("{");
 for(int i=0;i<10;i++){
    printf("%d ,",array[i]);
 }
 printf("} \n \n");

heap(array,10);

printf("After Sorting: ");
 printf("{");
 for(int i=0;i<10;i++){
    printf("%d ,",array[i]);
 }
 printf("} \n");
    return 0;
}

void heapify(int arr[],int n,int i){
int largest =i;
int left=(2*i)+1;
int right=(2*i)+2;

if(left<n && arr[left]>arr[largest]){
    largest=left;
}
if(right<n && arr[right]>arr[largest]){
    largest=right;
}
if(largest!=i){
    int temp=arr[largest];
    arr[largest]=arr[i];
    arr[i]=temp;
    heapify(arr,n,largest);
}

}
void heap(int arr[],int n){
for(int i=(n/2)-1;i>=0;i--){
    heapify(arr,n,i);
}

for(int i=n-1;i>0;i--){
    int temp=arr[0];
    arr[0]=arr[i];
    arr[i]=temp;

    heapify(arr,i,0);
}
}
