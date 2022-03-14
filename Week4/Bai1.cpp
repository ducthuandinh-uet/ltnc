int maxThree(int a, int b, int c)
{
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    return a;
}