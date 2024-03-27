/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int prec(char op);
char asso(char op);
void infixPostfix(char exp[], int n);

int main()
{
    char exp[100];

    // take user input expresson
    printf("\nEnter Expression:");
    scanf("%s",exp);

    infixPostfix(exp, strlen(exp));
    return 0;
}

int prec(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '^')
        return 3;

    else return -1;
}

char asso(char op)
{
    if (op == '^')
        return 'R';
    else
        return 'L';
}

void infixPostfix(char exp[], int n)
{
    int i;
    char resexp[50], j=0;
    char stack[20], top = -1;

    for (int i = 0; i < n; i++)
    {
        if (isalnum(exp[i]))
        {
            resexp[j++] = exp[i];
        }
        else if (exp[i] == '(')
        {
            stack[++top] = exp[i];
        }

        else if (exp[i] == ')')
        {
            while (stack[top] != '(')
            {
                resexp[j++] = stack[top--];
            }
        }
        else
        {
            while (top >= 0 && prec(exp[i] <= prec(stack[top]) && asso(exp[i] == 'L')))
            {
                resexp[j++] = stack[top--];
            }
            stack[++top] = exp[i];
        }
    }
    
    while(stack[top] >= 0){
        resexp[j++] = stack[top--];
    }

    resexp[j] = '\0'; 

    // for(int i = 0; i < strlen(resexp); i++){
        
    // }

    printf("%s", resexp);
    printf("\n\n");

} */

// /*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int prec(char op);
char asso(char op);
void infixPostfix(char exp[], int n);

int main()
{
    char exp[100];

    // take user input expression
    printf("\nEnter Expression: ");
    scanf("%s", exp);

    infixPostfix(exp, strlen(exp));
    return 0;
}

int prec(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '^')
        return 3;

    return -1;
}

char asso(char op)
{
    if (op == '^')
        return 'R';
    else
        return 'L';
}

void infixPostfix(char exp[], int n)
{
    int i;
    char resexp[50], j = 0;
    char stack[20];
    int top = -1;

    for (i = 0; i < n; i++)
    {
        if (isalnum(exp[i]))
        {
            resexp[j++] = exp[i];
        }
        else if (exp[i] == '(')
        {
            stack[++top] = exp[i];
        }

        else if (exp[i] == ')')
        {
            while (stack[top] != '(')
            {
                resexp[j++] = stack[top--];
            }
            top--; // Remove the '(' from the stack
        }
        else
        {
            while (top >= 0 && (prec(exp[i]) <= prec(stack[top])) && (asso(exp[i]) == 'L'))
            {
                resexp[j++] = stack[top--];
            }
            stack[++top] = exp[i];
        }
    }

    while (top >= 0)
    {
        resexp[j++] = stack[top--];
    }

    resexp[j] = '\0';

    printf("Postfix Expression: %s\n", resexp);
}