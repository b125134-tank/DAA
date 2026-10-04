#include<stdio.h>

void merge(int arr[],int st,int mid,int end){
    int temp[end-st+1];
    int i=st,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[j]>arr[i]){
            temp[k]=arr[i];
            i++;
            k++;
        }else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }

    //Leftover elements
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=0;i<end-st+1;i++){
        arr[i+st]=temp[i];
    }
}

void mergeSort(int arr[],int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}