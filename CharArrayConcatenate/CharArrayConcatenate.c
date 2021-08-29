#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char arr1[] ="1. ";     //works fine with arr1[50]
    char arr2[] ="2. ";     //works fine with arr2[50]
    printf("\n%p",&arr1);
    printf("\n%p",&arr2);

    strcat(arr1," One. ");
    printf("\n%s",arr1);
    printf("\n%p",&arr1);
    printf("\n%p",&arr2);

    strcat(arr2," Two. ");
    printf("\n%s",arr2);
    printf("\n%s",arr1);    //why its getting updated.
    printf("\n%p",&arr1);
    printf("\n%p",&arr2);

    getch();
}
