/*****************************
 ** 볼링 점수 계산 프로그램 **
 ** 작성자 : 이송희         **
 ** 작성일 : 2017년 5월 17일**
 ****************************/

#include <stdio.h>

int main() {
    int grade[10];
    int i, j, sum, tmp;
    float avg;

    for(i = 0; i < 10; i++) {
        printf("%d 번째 성적을 입력하세요: ", i);
        scanf("%d", &grade[i]);
    }

    for(i = sum = 0; i < 10; i++) 
        sum += grade[i];
    avg = sum / 10.0;
    printf("성적 평균: %f\n", avg);

    for(i = 0; i < 9; i++)
        for(j = 9; j > i; j--)
            if(grade[j - 1] > grade[j]) {
                    tmp = grade[j - 1];
                    grade[j - 1] = grade[j];
                    grade[j] = tmp;
            }

    printf("성적순: ");
    for(i = 0; i < 10; i++)
        printf("%d ", grade[i]);
    printf("\n");

        return 0;
}
