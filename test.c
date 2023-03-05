#include <stdio.h>
#include <string.h>
int main()
{
    char id[2][51] = {"joonas", "baekjoon"};
    char input_id[50];
    scanf("%s", input_id);
    for(int i = 0; i < 2; i++)
    {
        if(strcmp(id[i], input_id))
            printf("%s\?\?!", input_id);
            
    }
    return 0;
    
}