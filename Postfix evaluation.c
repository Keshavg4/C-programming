#include<stdio.h>
#define size 25
struct stack
{
    int data[size];
    int top;
}s;
int push(int n)
{
    if(s.top==size-1)
    {
        return 0;
    }
    else
    {
        s.data[++s.top]=n;
    }
}
int pop()
{
    if(s.top==-1)
    {
        return 0;

    }
    else
    {
        s.data[s.top--];
    }
}
int calc(int a,int b,char s)
{
    switch(s)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return a/b;
    case '%':
        return a%b;
    }
}
int main()
{
    s.top=-1;
    char post[25];
    printf("ENTER THE POSTFIX EXPRESSSION:\n");
    gets(post);
    //2 5 + 6 2 / 5 * - 7 +
    int i=0;
    while(post[i]!='\0')
    {
        if(post[i]!=' ')
        {
            char symbol=post[i];
            if (symbol>='0' && symbol<='9')
            {
                 push(symbol='0');
            }
            else
            {
                int b=pop();
                int a=pop();
                int num=calc(a,b,symbol);
                push(num);
            }

        }
        i++;
    }
    printf("ANS = %d ",pop());

}
