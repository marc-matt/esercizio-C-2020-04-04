#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH_STRING 20

int average = 0;
int counter = 0;

int readFromeKey(int leng){
    int length = 0;
    char ch;
    while((ch = getchar()) != '\n' || length < MAX_LENGTH_STRING){
        length++;
    }
    return length;
}

int avrg(int * count, int * ave, int * length){
    int x = *count;
    int y = *ave;
    int z = *length;
    x = x - 1;
    int aver = x * y;
    aver = aver + z;
    aver = aver / (x + 1); 
    return aver;
}

int main(int argc, char * argv[]){
    char ch;
    int length;
    while((ch = getchar()) != EOF){
        counter++;
        length = readFromKey(MAX_LENGTH_STRING);
        average = avrg(&counter, &average, &length);
    }
}
