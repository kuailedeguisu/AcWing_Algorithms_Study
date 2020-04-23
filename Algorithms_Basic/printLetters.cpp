#include <iostream>
#include <string.h>
using namespace std;
/*
输入一个字符串，字符串首尾没有空格，并且单词间只有一个空格
比如，abc def ghi
输出每一个单词，并一行一个单词
*/

int main()
{
    char str[1000];
    cin >> str;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && str[j] != ' ') j++; // 循环结束跳到空格
        for (int k = j; k < j; k++) cout << str[k];
        cout << endl;
        i = j;
    }
    return 0;
}
