int** transpose(int** matrix, int nRows, int nCols)
{
    int** a = new int* [nCols];
    for(int i = 0; i< nCols; i++)
    a[i]= new int [nRows];
    
    for(int i=0; i<nRows; i++)
   { for(int j=0; j<nCols;j++)
    {
        a[j][i]=matrix[i][j];
    }}
    return a;
}