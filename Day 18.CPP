#include <iostream>

using namespace std;

class Solution {
    char stack[10];
    int len_s, len_f, len_r;
    char queue[10];
public:
    Solution()
    {
        len_s = 0;
        len_f = 0;
        len_r = 0;
    }

    void pushCharacter(char alp)
    {
        stack[len_s++] = alp;
    }
    void enqueueCharacter(char alp)
    {
        queue[len_r++] = alp;
    }
    char popCharacter()
    {
        char x = stack[--len_s];
        return x;
    }
    char dequeueCharacter()
    {
        char x = queue[len_f++];
        return x;
    }

};

