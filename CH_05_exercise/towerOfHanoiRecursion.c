#include <stdio.h>
void towerofhanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("move disk 1 from rod %c to rod %c\n", from, to);
        return;
    }
    towerofhanoi(n - 1, from, aux, to);
    printf("move disk %d from rod %c to rod %c\n", n, from, to);
    towerofhanoi(n - 1, aux, to, from);
}
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    towerofhanoi(n, 'A', 'C', 'B');
    return 0;
}
