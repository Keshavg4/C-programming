#include<stdio.h>
#define size 50
struct stack
{
    int data[size];
    int top;
}s;
int isempty()
{
    return (s.top==-1);
}
int full()
{
    return (s.top==size-1);
}
int peep()
{
    return s.data[s.top];
}
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
        return s.data[s.top--];
    }
}
int prcd(char op1,char op2)
{
    if(op1=='$'||op1=='*'||op1=='/'||op1=='%')
    {
        return(op2!='$');
    }
    else
    {
        if(op2=='+'||op2=='-')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    s.top=-1;
    char inf[50],post[50];
    int i=0,p=0;
    char x;
    printf("ENTER THE INFIX EXPRESSSION:\n");
    gets(inf);
    while(inf[i]!='\0')
    {
        char symbol=inf[i];
        if(symbol>='a' && symbol<='z' || symbol>='A' && symbol<='Z' || symbol>='0' && symbol<='9')
        {
            post[p]=symbol;
            p++;
        }
        else if(isempty())
        {
            push(symbol);
        }
        else if(symbol=="(")
        {
            push(symbol);
        }
        else if(symbol==")")
        {
            while( !isempty()&&(peep()!='('))
            {
                x=pop();
                post[p++]=x;
            }
            x=pop();
        }
        else
        {
            while(!isempty()&&(peep()!='(')&&prcd(peep(),symbol))
            {
                x=pop();
                post[p++]=x;
            }
            push(symbol);
        }
        //printf("%c\n",inf[i]);
        i++;
    }
    while(!isempty())
    {
        x=pop();
        post[p++]=x;

    }
    post[p]='\0';
    printf("postfix = %s",post);

}

