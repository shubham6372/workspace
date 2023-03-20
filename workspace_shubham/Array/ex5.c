#include<stdio.h>
int main(){
    
    int arr[1]={10};
    printf("%d\n",0[arr]);  

     int arr[10] = {1,2,3,4,5};
    printf("%d\n",arr[5]); 

    int arr[10];
    printf("%d %d\n",arr[-1],arr[15]); 

    int arr[] = {12,14,15,23,45};
    printf("%u, %u\n",arr,&arr);

     float arr[] = {12.4, 2.3, 4.5, 6.7};
    printf("%d\n", sizeof(arr)/sizeof(arr[0])); 

    static int a[] = {7,8,9};
    printf("%d",2[a]+a[2]);  

    int a[] = {10,11,12,15,23}; 
    printf("%u, %u\n",a,&a[3]); 

      int a[] = {10,11,12,15,23}; 
    printf("%u, %u\n",a,a[3]); 
    
   
    return 0;

}