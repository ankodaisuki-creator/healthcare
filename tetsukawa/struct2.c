#include <stdio.h>
#include <string.h>

typedef struct
{
    int studentId; // 学籍番号
    int number;    // 出席番号
    char name[50]; // 氏名
    float grade;   // 成績
} Student;

int main()
{
    Student student1 = {2510, 210, "大下温人", 86.2};
    Student student2 = {2507, 207, "今泉心寧", 92.6};
    Student student3 = {2522, 221, "杉本直継", 67.3};
    Student student4 = {2516, 215, "城井総一郎", 72.5};

    printf("\n%s\n", student1.name);
    printf("学籍番号: %d\n", student1.studentId);
    printf("出席番号: %d\n", student1.number);
    printf("成績: %.1f\n", student1.grade);

    printf("\n%s\n", student2.name);
    printf("学籍番号: %d\n", student2.studentId);
    printf("出席番号: %d\n", student2.number);
    printf("成績: %.1f\n", student2.grade);

    printf("\n%s\n", student3.name);
    printf("学籍番号: %d\n", student3.studentId);
    printf("出席番号: %d\n", student3.number);
    printf("成績: %.1f\n", student3.grade);

    printf("\n%s\n", student4.name);
    printf("学籍番号: %d\n", student4.studentId);
    printf("出席番号: %d\n", student4.number);
    printf("成績: %.1f\n", student4.grade);

    return 0;
}