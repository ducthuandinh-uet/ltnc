bool isPrime (int number)
{
    bool checkPrime = true;
    if(number <2) checkPrime = false;
    double x = sqrt(number);
    for(int i =2; i<=x; i++)
    {
        if(number%i==0) checkPrime=false;
        break;
    }
    return checkPrime;
    
}