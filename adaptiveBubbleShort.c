#include<stdio.h>
    void printArray(int*A, int n){
        for(int i=0;i<n; i++){
            printf("%d  ",A[i]);
        }
        printf("\n");
    }
    void bubbleSort(int  *A, int n){
        int temp;
        int isSorted= 0;
        for(int i=0; i<n-1; i++) // for number passes
        {
            printf("working on pass number %d\n", i+1);
            isSorted=1;
        for(int j=0; j<n-1-i; j++) // for comparision in each passes
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]= A[j+1];
                A[j+1]= temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }

        }
    }
 
int main(){
    // int A[ ]= {12,35,65,23,2,8};
    // int A[ ]= {1,2,3,4,5,6};
    int A[]= {23,45,56,34,21,11,21,88,990};
    int n=9;
    printArray(A,n);  // printing the array before shorting
    bubbleSort(A,n); // function to sort array
    printArray(A,n);  //printing the array before sorting
     return 0 ;
 }