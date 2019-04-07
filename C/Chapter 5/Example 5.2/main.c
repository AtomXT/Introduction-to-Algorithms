#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void myInput(float *input , int num);
double sum(float x , float *a , int n);
int main()
{
    float x;
    float *a = NULL;
    int n;
    double result;
    printf("������5.2����ʽ��ֵ����ÿ�ε�����ʱ����q�����˳�����\n��������x��ֵ��");
    myInput(&x , 0);
    printf("������Ҫ����a0��an.\n��������a���±�n:");
    if(!(scanf("%d" , &n))){
        printf("�����ѽ����������˳�,bye~\n");
        exit(EXIT_SUCCESS);
    }
    a = (float *)malloc((n + 1) * sizeof(float));
    printf("����������a0��an.\n");
    for(int i = 0 ; i <= n ; ++i){
        printf("a%d:" , i);
        myInput(a + i , 0);
    }
    result = sum(x , a , n);
    printf("�������ǣ�%f" , result);
    free(a);
}
void myInput(float *input , int num)
{
    for(int i = 0 ; i <= num ; ++i)
        if(!(scanf("%f" , input + num))){
            printf("�����ѽ����������˳�,bye~\n");
            exit(EXIT_SUCCESS);
        }
}
double sum(float x , float *a ,int n)
{
    long double result = 0;
    for(; n >= 0 ; --n){
        result = result * x + *(a + n);
    }
    return result;
}
