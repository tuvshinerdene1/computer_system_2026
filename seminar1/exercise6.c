#include <stdio.h>
#include <stdlib.h>

struct EngiinButarhai
{
    int d, n; // d - hurtwer, n- huwiar
};

typedef struct EngiinButarhai EngiinButarhai;

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

EngiinButarhai simplify(EngiinButarhai a)
{
    if (a.n == 0)
        return a;
    int g = gcd(a.d, a.n);
    a.d /= g;
    a.n /= g;

    if (a.n < 0)
    {
        a.d = -a.d;
        a.n = -a.n;
    }

    return a;
}

EngiinButarhai add(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai res;
    res.d = a.d * b.n + b.d * a.n;
    res.n = a.n * b.n;
    return simplify(res);
}

EngiinButarhai sub(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai res;
    res.d = a.d * b.n - b.d * a.n;
    res.n = a.n * b.n;
    return simplify(res);
}

EngiinButarhai mult(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai res;
    res.d = a.d * b.d;
    res.n = a.n * b.n;
    return simplify(res);
}

EngiinButarhai div_(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai res;
    res.d = a.d * b.n;
    res.n = a.n * b.d;
    return simplify(res);
}

void print(EngiinButarhai a)
{
    a = simplify(a);
    if (a.n == 1)
    {
        printf("%d\n", a.d);
    }
    else
    {
        printf("%d/%d\n", a.d, a.n);
    }
}

int main()
{
    EngiinButarhai a = {1, 2};
    EngiinButarhai b = {1, 3};

    printf("a = ");
    print(a);
    printf("b = ");
    print(b);

    printf("a + b = "); print(add(a, b)); 
    printf("a - b = "); print(sub(a, b));  
    printf("a * b = "); print(mult(a, b));
    printf("a / b = "); print(div_(a, b)); 
    return 0;
}