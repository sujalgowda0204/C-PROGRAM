#include<stdio.h>
#include<string.h>
void findminmax(int arr[],int n,int *max_value,int *min_value){
*max_value=arr[0] ;
*min_value=arr[0] ;
for(int i=0 ;i<n;i++){
    if(arr[i]>*max_value){
        *max_value=arr[i];
    }
    if(arr[i]<*min_value){
        *min_value=arr[i];
    }
}

}
int main (){
int arr[]={10,34,56,1,23,56,78};
int n;
n= sizeof(arr)/sizeof(arr[0]) ;
int maximum,minimum;
findminmax(arr,n,&maximum,&minimum);
  printf("Maximum value in the array: %d\n", maximum);
    printf("Minimum value in the array: %d\n", minimum);

    return 0;

}
