int* getPointerToArray(int n)
{
    int *Arr = new int [n];
    for(int i = 0; i <n; i++)
    {
        cin>> Arr[i];
    }
    return Arr;
}