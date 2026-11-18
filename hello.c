#include<stdio.h>
void greet(char name[50],int age){
    printf("Hello %s, you are %d years old!\n", name, age);
}
int main() {
    greet("Alice", 30);
    return 0;
}