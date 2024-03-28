#include <stdio.h>
#include <stdlib.h>
void print_vec(int [],int);
void invertir_array(int [],int);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int dim=7;
    print_vec(arr,dim);
    invertir_array(arr,dim);
    printf("\n");
    print_vec(arr,dim);
    return 0;
}
void invertir_array(int a[],int dim){
    int i;
    for(i=0;i<(dim/2);i++){
        a[i]^=a[dim-1-i];
        a[dim-1-i]^=a[i];
        a[i]^=a[dim-i-1];
    }
}

void print_vec(int a[],int dim){
    int i;
    for(i=0;i<dim;i++){
        printf("%d - %d\n",i,a[i]);
    }
}
