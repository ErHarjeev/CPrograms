#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>      //isspace function

int main(void)
{
    DIR *d;
    struct dirent *dir;
   // FILE *fptr;
   // char ch;
    char new_file_name[260];

    d = opendir("./");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            strcpy(new_file_name,dir->d_name);
            int i =0;
            while (new_file_name[i])
            {
                if (isspace(new_file_name[i]))
                new_file_name[i]='_';
                i++;
            }
            if(strcmp(new_file_name,dir->d_name))
            {   printf("\n\rOld name: %s", dir->d_name);
                printf("\n\rNew name: %s", new_file_name);
                rename(dir->d_name, new_file_name);
                printf(" --> Renamed");
            }
        }
        closedir(d);
        printf("\n\r -- DONE -- ");
        //getch();
    }
    return(0);
}
