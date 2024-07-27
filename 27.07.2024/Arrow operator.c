#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[80];
    int age;
    float percentage;
};
struct student*emp=NULL;
int main()
{
    emp = (struct student*)
        malloc(sizeof(struct student));
    emp->age=18;

    printf("%d",emp->age);
    return 0;
}  
