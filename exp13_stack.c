#include <conio.h>
#include<stdio.h>
int i, stk[100], top = -1, n;
void show()
{
    for (i = 0; i <= top; i++)
        printf("%d\t", stk[i]);
}
void push()
{
    int item;
    if (top == n - 1)
        printf("\nStack is full.");
    else
    {
        printf("\nEnter the item: ");
        scanf("%d", &item);
        stk[++top] = item;
    }
}
void pop()
{
    if (top == -1)
        printf("Stack is empty.");
    else
    {
        printf("%d is popped.", stk[top]);
        top--;
    }
}
int main()
{
    int i, op;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    do
    {
        printf("\n1 : Push");
        printf("\n2 : Pop");
        printf("\n3 : Display");
        printf("\n4 : Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        }
    } while (op != 4);
    getch();
}