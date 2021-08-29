#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// https://stackoverflow.com/questions/9964865/c-system-not-working-when-there-are-spaces-in-two-different-parameters
// https://stackoverflow.com/questions/9866962/what-is-cmd-s-for

int main(){
printf("Open Exe file from C File");
printf("\n-------------------------\n");
printf("Program\" \"folder");
printf("\"\"C:\\\"\"Program Files\"\"\\yWorks\\yEd\\yEd.exe\"\"");

printf("\n");
//printf("\"\"C:\\Users\\VehlaEngineer\\hello2.exe""");
printf("\n");
printf("\"this is an argument\"" "bb");
//printf("\n\n");
printf("\n");
printf("\"\"D:\\test\" nospaces \"text with spaces\"\"");
printf("\n");
//system("\"\"C:\\test\" \"text with spaces\"\"");
//system("yED.exe");                                                          // working because of environment path
//system( "\"\"C:\\\"\"Program Files\"\"\\yWorks\\yEd\\yEd.exe\"\"");       // working
system( "C:\\Program\" \"Files\\yWorks\\yEd\\yEd.exe");       //            // working


getch();
}
