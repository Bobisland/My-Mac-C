#include <stdio.h>
#include <string.h>

void shiftLetters(char *input) {
    int i = 0;
    while (input[i] != '\0') {
        if ((input[i] >= 'a' && input[i] < 'z') || (input[i] >= 'A' && input[i] < 'Z')) {
            input[i] = input[i] + 1;
        } else if (input[i] == 'z') {
            input[i] = 'a';
        } else if (input[i] == 'Z') {
            input[i] = 'A';
        }
        i++;
    }
}

int main() {
    char input[100];
    
    printf("请输入一个字符串: ");
    fgets(input, sizeof(input), stdin);
    
    // 去掉输入字符串中的换行符
    input[strcspn(input, "\n")] = '\0';
    
    shiftLetters(input);
    
    printf("结果: %s\n", input);
    
    return 0;
}

