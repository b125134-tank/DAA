//Binary Search
#include<stdio.h>

int binarySearch(int arr[],int st,int end,int key){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            return binarySearch(arr,mid + 1,end,key);
        }else{
            return binarySearch(arr,st,mid-1,key);
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter key:");
    scanf("%d",&key);
    int index=binarySearch(arr,0,n-1,key);
    printf("Index of %d is %d",key,index);
    return 0;
}