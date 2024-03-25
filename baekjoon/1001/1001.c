#include <stdio.h>


int main(void){
    // int a =1;
    // float b=2.4;
    // char c = 'b';
    // printf("%d, %f, %c \n",a,b,c);
    printf("int 자료형의 크기:%d바이트\n",sizeof(int));
    printf("long long int 자료형의 크기:%d바이트\n",sizeof(long long int));
    printf("char 자료형의 크기:%d바이트\n",sizeof(char));
    printf("double 자료형의 크기:%d바이트\n",sizeof(double));
    printf("long 자료형의 크기:%d바이트\n",sizeof(long));
    printf("float 자료형의 크기:%d바이트\n",sizeof(float));
    printf("unsigned int 자료형의 크기:%d바이트\n",sizeof(unsigned int));



}

//gcc file 1001.c
//./a.out