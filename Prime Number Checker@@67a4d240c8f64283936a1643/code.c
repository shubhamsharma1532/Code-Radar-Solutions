int isPrime(int n)
{
    if (n>2)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

