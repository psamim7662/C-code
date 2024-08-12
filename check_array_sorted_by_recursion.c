#include<stdio.h>
#include<stdbool.h>
bool isSorted(int A[], int n){
    // n:=len(a)
    if(n<=1){
        return true;
    }
    if (A[n-1]<A[n-2]){
        return false;
    }
    return isSorted(A,n-1);
}
int  main(){
    int A1[]={10, 20, 30, 40, 50, 78, 88};
    int n1=sizeof(A1)/sizeof(A1[0]);
    printf("%s\n",isSorted(A1,n1)?"true":"false");
    
    int A2[]={10, 20, 3, 23, 45, 78, 88};
    int n2=sizeof(A2)/sizeof(A2[0]);
    printf("%s\n",isSorted(A2,n2)?"true":"false");

    return 0;
    
}