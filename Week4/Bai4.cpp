long long int factorial(int n)
{
    long long int a=1;
    for(int i=1; i<=n; i++)
    a*=i;
    return a;
}