#include <stdio.h>

struct character
{
    char *name;
    int hp;
    int attack;
    int defense;
};

int main()
{
    struct character hero = {"トラ", 120, 40, 25};
    struct character wizard = {"ハメ", 80, 60, 10};
    struct character doremi = {"プー", 999, 250, 100};
    struct character suisui = {"シュウ", 200, 10, 30};
    struct character kim = {"ヒョギフ", 10000, 500, 5};

    printf("奇妙な仲間たち\n");

    printf("\n%s\n", hero.name);
    printf("HP: %d\n", hero.hp);
    printf("ｺｳｹﾞｷ: %d\n", hero.attack);
    printf("ｼｭﾋﾞ: %d\n", hero.defense);

    printf("\n%s\n", wizard.name);
    printf("HP: %d\n", wizard.hp);
    printf("ｺｳｹﾞｷ: %d\n", wizard.attack);
    printf("ｼｭﾋﾞ: %d\n", wizard.defense);

    printf("\n%s\n", doremi.name);
    printf("HP: %d\n", doremi.hp);
    printf("ｺｳｹﾞｷ: %d\n", doremi.attack);
    printf("ｼｭﾋﾞ: %d\n", doremi.defense);

    printf("\n%s\n", kim.name);
    printf("HP: %d\n", kim.hp);
    printf("ｺｳｹﾞｷ: %d\n", kim.attack);
    printf("ｼｭﾋﾞ: %d\n", kim.defense);

    return 0;
}