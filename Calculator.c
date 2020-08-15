void add(int n1, int n2)
{
    printf("Addition is %d\n", n1+n2);
}
void subtract(int n1, int n2)
{
    printf("Subtraction is %d\n", n1-n2);
}


int main()
{
    void (*func[])(int, int) = {add, subtract};    // func is an array of function pointers
    unsigned int ch, a=100, b=23;

    printf("Enter Choice: 0 for add, 1 for subtract \n");
    scanf("%d", &ch);

    printf("Enter values for two integers \n");
    scanf("%d\t%d", &a,&b);

    if (ch > 2){
        printf("NOT VALID");
        return 0;
    }

    (*func[ch])(a, b);

    return 0;
}