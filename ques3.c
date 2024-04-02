#include <stdio.h>
#include <string.h>
int main()
{
char input1[1000];
gets(input1);
char split1[100][100];
int max = 0;
int len1 = strlen(input1);
int totalwords = 0;
int wordindex = 0;
for (int i = 0; i < len1; i++)
{
if (input1[i] == ' ' || input1[i] == '\0')
{
split1[totalwords][wordindex] = '\0';
totalwords++;
wordindex = 0;
}
else
{
split1[totalwords][wordindex] = input1[i];
wordindex++;
}
}
char target[100];
printf("Give the word to be removed\n");
gets(target);
for (int i = 0; i <= totalwords; i++)
{

if (strcmp(split1[i], target) == 0)
{
continue;
}
else
{
printf("%s ", split1[i]);
}
}
}