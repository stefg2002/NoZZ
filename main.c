#include <stdio.h>
#include <string.h>
void main(){

    char word[100];

    int i,a;


    scanf("%s",&word);
    int length=strlen(word);


    for(i=0;i<length-1;i++){

        if(word[i]=='Z' && word[i+1]=='Z'){

            printf("%i\n",i);
            a=1;
        }

    }

    if(a!=1){

        printf("NO ZZ\n");

    }

}