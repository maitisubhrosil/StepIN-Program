int prime(int num);         

int main() 
{
    int a;
    int n;
    printf("Enter a positive integer: \n");     //Enter number to check for prime
    scanf("%d", &n);
    a = prime(n);

    //printf("%d",x);
    
    if (a == 1) 
    {
        printf("FALSE");
    }
    else 
    {
        printf("TRUE");
    }

    return 0;
}




int prime(int num){             //function for checking for prime numbers
    int i, flag = 0;
    for (i = 2; i <= num / 2; ++i) 
    {
        // condition for non-prime
        if (num % i == 0) 
        {
            flag = 1;
            break;
        }
    }
   // printf("%d",flag);
    return flag;
}