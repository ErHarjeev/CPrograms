#include<stdio.h>

int main(){
    printf("Assign Char Array to a Char Pointer \nDifferent Printf parameters");
    printf("\n-------------------------");
    char path[]="C:\\Program Files\\yWorks\\yEd\\yEd.exe";
    char *path2 = &path;
    printf("\n%c",path2);     // prints free space because no ASCII code for memory address
    printf("\n%d",path2);     // prints memory address of first location -- 6618656
    printf("\n%s",path2);     // prints the full char array -- C:\Program Files\yWorks\yEd\yEd.exe
    getch();
}
