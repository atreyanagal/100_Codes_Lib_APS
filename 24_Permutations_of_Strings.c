//https://www.hackerrank.com/challenges/permutations-of-strings/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char** a, char** b)
{
    char* temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char** s, int start, int end)
{
    while (start < end) {
        swap(s + start++, s + end--);
    }
}

int next_permutation(int n, char **s)
{
	for (int i = n - 2; i >= 0; --i) {
        if (strcmp(s[i], s[i + 1]) < 0) {
            for (int j = n - 1; j > i; --j) {
                if (strcmp(s[i], s[j]) < 0) {
                    swap(s + i, s + j);
                    reverse(s, i + 1, n - 1);
                    return 1;
                }
            }
        }
    }
    return 0;
}

