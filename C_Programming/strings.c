#include<stdio.h>
#include<string.h>
int main(){
    char stringVar[40];
    printf("Enter a string: ");
    scanf("%s",&stringVar);
    
    printf("Vowels are : \n");
    int count = 0;
    for(int i = 0; i<strlen(stringVar);i++){
        if(stringVar[i] == 'a' || stringVar[i] == 'e' || stringVar[i] == 'i' || stringVar[i] == 'o' || stringVar[i] == 'u'){
            count++;
            printf("%c",stringVar[i]);
        }
    }
    printf("\nTotal vowels are: %d",count);
    return 0;
}