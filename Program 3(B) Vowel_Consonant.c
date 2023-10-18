#include<stdio.h>
int main(){
    char x;
    printf("Enter the character : ");
    scanf("%c",&x);

    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        printf("It is a vowel !");


    }
    else{
        printf("It is a consonent !!");

    }
    return 0;

}