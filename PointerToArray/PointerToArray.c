#include<stdio.h>

int main()
{
int arr[5] = {1,2,3,4,5,6};
int (*ptr)[5];

ptr = arr;

printf("\n%d", *ptr);
printf("\n%d", *ptr[0]);
printf("\n%d", *ptr[1]);
printf("\n%d", *ptr[2]);


return 0;

}

