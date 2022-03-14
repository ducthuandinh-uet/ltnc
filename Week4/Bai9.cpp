void sort(float array[], int n, bool isAscending)
{
   if(isAscending == true)
   {
       for(int i=0; i<n-1; i++)
       for(int j=i; j<n; j++)
       {
           if(array[i]>array[j])
            {
                float a = array[i]; array[i]=array[j];array[j]=a;
            }
       }
   }
   else if( isAscending == false)
   {
       for(int i=0; i<n-1; i++)
       for(int j=i; j<n; j++)
       {
           if(array[i]<array[j])
            {
                float a = array[i]; array[i]=array[j];array[j]=a;
            }
       }
   }
}