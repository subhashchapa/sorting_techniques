/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void print(int a[],int n);
void insertion(int a[],int n);

int main()
{   int n;
    printf("enter no.of elements\n");
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++){
        printf("enter %d element :",i);
        scanf("%d",&a[i]);
    }
    
    printf("before sorting\n");
    print(a,n);
    
    printf("after sorting\n");
    insertion(a,n);
    
    return 0;
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
}

void insertion(int a[],int n){
    int key;
    for(int i=1;i<n;i++){
        key=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>key && j>=0 ){
                a[i]=a[j];
                i--;
            }
        a[i]=key;
        }

    }
        print(a,n);
}
