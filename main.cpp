#include <stdio.h>
#include <string.h>

using namespace std;

void do_interp();
void get_keyword(char *, int *);

int main(int argc, char **argv)
{

    printf("\nhi\n");
    if (argc >1 )
    {  if (argv[1][0] == '-' && argv[1][1] == 'v')
        printf ("Reprog version 1.01 @ 2015 \n");
        }
do_interp();
    return 0;
}

// Function: do_interp make main job of interpretor

void do_interp()
{
char input[255];
int count =15;
int hash_key,pointer;

do {
printf("\n>>> ");
    if(fgets(input,255,stdin) != NULL)
    { input[strlen(input)-1] = '\0';
//        printf (" Len:%d you typed: %s",(int)strlen(input),input);
  hash_key = get_keyword(input,& pointer);
    }
    count --;
}while (count !=0 && ( strcmp(input,"خروج") != 0));

}

// Function: get_keyword convert statement to hash
void get_keyword(char *line, int *poin)
{
   // TO do : make hash function and chunk line to pieces
}
