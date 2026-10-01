#include<stdio.h>
int main (){
int a=10,b=20;
printf("value of a before swapping is: %d\n",a);
printf("value of b before swapping is: %d\n",b);


a=a^b;
b=a^b;
a=a^b;
printf("value of a after swapping is: %d\n",a);
printf("value of b after swapping is: %d\n",b);


    return 0;
}
