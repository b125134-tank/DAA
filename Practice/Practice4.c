#include<stdio.h>

int partition(int arr[],int st,int end){
    int pivot=arr[end];
    int i=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=temp;
    return i;
}

void quickSort(int arr[],int st,int end){
  if(st<end){
    int pivIdx=partition(arr,st,end);
    quickSort(arr,st,pivIdx-1);  //Left subarray
    quickSort(arr,pivIdx+1,end);  //Right subarray

  }
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    printf("Sorted array:");    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


}