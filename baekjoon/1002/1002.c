// int main()
// {
// 	int a=0;
// 	scanf("%d,&a");
// 	printf("%d\n",a);
// 	int b=0;
// 	scanf("%d,&b");
// 	printf("%d\n",b);
// 	int c=0;
// 	scanf("%d,&c");
// 	printf("%d\n",c);
// }


// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5}; // 배열 선언 및 초기화

//     printf("%d\n", arr[0]); // 1 출력
//     printf("%d\n", arr[4]); // 5 출력

//     arr[2] = 10; // 3번째 요소 변경

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]); // 1 2 10 4 5 출력
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num;
    printf("숫자를 입력하시오:");
    scanf("%d", &num);
    if(num>0){
        printf("양수입니다.\n");
    }else if(num>0) {
        printf("음수입니다.\n");
    }else
    
        {
            printf("0입니다.\n");
        }



}
//gcc file 1001.c
//./a.out