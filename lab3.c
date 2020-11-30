#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main(){
    int len=0,i=0,k=0,s=0;    
    char *word; 

    word = (char*) malloc (sizeof(char)*len);
    scanf("%s", word); 

    len=strlen(word);

    for(i=0; i<len; i+=1){
        for(k=0; k<len; k+=1){   
            if (word[i]==word[k]){
                s+=1;
            } 
        }   
    }
    if (s>len){
        printf("Not isogram");
    }
    else{
        printf("Isogram");
    }
    return 0;
}

//comment