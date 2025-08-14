#include <stdio.h>
int f()
{
    printf("in f()\n");
    return 1;
}
int g()
{
    printf("in g()\n");
    return 2;
}
int h()
{
    printf("in h()\n");
    return 3;
}
int main()
{
    int result = f() + g() * h();
    return 0;
}