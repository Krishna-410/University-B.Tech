#include <stdio.h>

void LinearSearch (int arr[],int length);

int main(){
int array[]={4,80,18,7,2,15,17,29};
LinearSearch(array,8);
return 0;
}

void LinearSearch(int arr[],int length){
    int item;
    printf("Enter Element to find: ");
    scanf("%d",&item);
    for(int i=0;i<length;i++){
        if(item==arr[i]){
            printf("Element Found\n");
            return ;
        }
    }
    printf("Element Not Found\n");
}