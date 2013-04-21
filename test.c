#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int age;
    char sex;
} THuman;

void strCopy(char target[], char source[]) {
    while((*target++ = *source++)!='\0');
    *target++ = '\0';
};

void makeHuman( THuman* baby, char name [], int age, char sex ){
    strCopy (baby->name , name);
    baby->age = age;
    baby->sex = sex;
};



void printTHuman( THuman *x) {
    printf("Name %s\n", x->name);
    printf("Age  %d\n", x->age);
    printf("Sex  %c\n", x->sex);
}

int main() {
    THuman * human = malloc(sizeof(THuman));
    makeHuman(human, "Vasya", 100, '*');
    printTHuman(human);

    return 0;
}

/*

THuman * human;
    makeHuman(human, "Vasya", 100, '*');
    printTHuman(human);

    */