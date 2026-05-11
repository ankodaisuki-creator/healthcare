メイン コンテンツにスキップ
Google ClassroomClassroom
基礎プログラミングⅡ（2年生）2026年度/通年
ホーム
カレンダー
登録科目
ToDo
国
国語Ⅰ(2年生)
2026年度通年
歴
歴史
2026年度/ 通年
E
English II（2年生）
2026年度/通年
基
基礎数学Ⅱ（2年生）
2026年度/通年
代
代数幾何学【 Introduction to Linear Algebra 】
2026年度/通年
基
基礎プログラミングⅡ（2年生）
2026年度/通年
プ
プログラミング演習Ⅱ（2年生）
2026年度／通年
電
電気電子工学基礎（2年生）
2026年度 / 通年
起
起業家探究
保
保健体育Ⅱ（2年生）
2026年度/通年
エ
エディトリアルデザイン
2026年/前期
U
UI/UXデザイン
2026年/通年
W
Webデザイン
2026年/通年
倫
倫理（２・３年生）
2026年度/通年
ア
アントレプレナーシップ概論(2026年度)
アーカイブされたクラス
設定
#1 .cの提出場所 - Classroom
#1 .cの提出場所 - Classroom
assignment
#1 .cの提出場所
山本周
•
4月13日
100 点
期限: 4月13日
クラスのコメント
あなたの課題
提出済み
personality3.c
C
期限が過ぎた後に課題を提出することはできません
限定公開のコメント

#include <stdio.h>

char *moji[] = {
    "あ","い","う","え","お",
    "か","き","く","け","こ",
    "さ","し","す","せ","そ",
    "た","ち","つ","て","と",
    "な","に","ぬ","ね","の",
    "は","ひ","ふ","へ","ほ",
    "ま","み","む","め","も",
    "や","ゆ","よ",
    "ら","り","る","れ","ろ",
    "わ","を","ん"
};

int same(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

void print_name(int n) {
    if (n < 46) {
        printf("%s", moji[n]);
    } else {
        printf("%s", moji[n % 46]);
        print_name(n / 46 - 1);
    }
}

void save_name(int n, char name[]) {
    if (n < 46) {
        int i = 0;
        while (moji[n][i] != '\0') {
            name[i] = moji[n][i];
            i++;
        }
        name[i] = '\0';
    } else {
        char front[100];
        char back[100];
        int i = 0;
        int j = 0;

        save_name(n % 46, front);
        save_name(n / 46 - 1, back);

        while (front[i] != '\0') {
            name[i] = front[i];
            i++;
        }
        while (back[j] != '\0') {
            name[i] = back[j];
            i++;
            j++;
        }
        name[i] = '\0';
    }
}

int main(void) {
    char ans[20];
    char omoibito[100];
    char omouhito[100];
    int n = 0;
    int a = 0;

    printf("あなたが想い浮かべるのは");
    while (1) {
        print_name(n);
        printf("さんですか？ Y:はい N:いいえ\n");
        scanf("%19s", ans);

        if (same(ans, "Y")) {
            save_name(n, omoibito);
            break;
        } else if (same(ans, "N")) {
            n++;
            a++;
        }
    }

    n = 0;
    printf("あなたの名前を教えてください\n");

    while (1) {
        print_name(n);
        printf("さんですか？ Y:はい N:いいえ\n");
        scanf("%19s", ans);

        if (same(ans, "Y")) {
            save_name(n, omouhito);
            printf("%sは%sのことを Shift+N & Enter %d 回分想ってたんだね。\n",omouhito, omoibito, a);
            break;
        } else if (same(ans, "N")) {
            n++;
        }
    }

    return 0;
}

personality3.c
