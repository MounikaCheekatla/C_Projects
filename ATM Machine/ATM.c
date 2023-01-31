#include <stdio.h>

int main()
{
    char card;
    int n;
    int p;
    int a;
    int b;
    int diff;
    int i;
    char cad;

    printf("Welcome to the SBI ATM!\n\n");

    printf("Please insert your card\n\n");
    scanf("%d", &card);

    if(card=='k')
    {
        printf("Hello CH RATNA MOUNIKA\n\n");

        printf("> Press 1 to Withdrawal the money from your account\n\n");
        printf("> Press 2 to Check the balance\n\n");

        b = 50000;

        scanf("%d", &n);

        if(n==1)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p==1234)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if(a>b)
                {
                    printf("Insufficient Balance!");
                }
                else
                {
                    printf("Collect the amount\n\n");

                    diff = b - a;

                    printf("Your remaining bank balance is %d", &diff);

                }
            }
            else
            {
                printf("Incorrect Pin!\n\n");

                printf("Please try again\n\n");
                scanf("%d", &p);

                if(p==1234)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                        printf("Insufficient Balance!");
                    }
                    else
                    {
                        printf("Collect the amount\n\n");

                        diff = b - a;

                        printf("Your remaining bank balance is %d", &diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
            }
        }
        else if(n==2)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p!=1234)
            {
                printf("Please try again\n\n");
                scanf("%d", &p);

                if(p!=1234)
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if(card=='s')
    {
        printf("Hello BHANU K\n\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 100000;

        scanf("%d", &n);

        if(n==1)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p==5678)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if(a>b)
                {
                    printf("Insufficient Balance!");
                }
                else
                {
                    printf("Collect the amount\n\n");

                    diff = b - a;

                    printf("Your remaining bank balance is %d", &diff);
                }
            }
            else
            {
                printf("Incorrect PIN!\n\n");

                printf("Please try again\n\n");

                scanf("%d", &p);

                if(p==5678)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                        printf("Insufficient Balance!");
                    }
                    else
                    {
                        printf("Collect the amount\n\n");

                        diff = b - a;

                        printf("Your remaining bank balance is %d", &diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
            }
        }
        else if(n==2)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p!=5678)
            {
                printf("Please try again\n\n");
                scanf("%d", &p);

                if(p!=5678)
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if(card=='i')
    {
        printf("Hello P PRATYUSHA\n\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 60000;

        scanf("%d", &n);

        if(n==1)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p==9123)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if(a>b)
                {
                    printf("Insufficient Balance!");
                }
                else
                {
                    printf("Collect the amount\n\n");

                    diff = b - a;

                    printf("Your remaining bank balance is %d", &diff);
                }
            }
            else
            {
                printf("Incorrect PIN!\n\n");

                printf("Please try again\n\n");

                scanf("%d", &p);

                if(p==9123)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                        printf("Insufficient Balance!");
                    }
                    else
                    {
                        printf("Collect the amount\n\n");

                        diff = b - a;

                        printf("Your remaining bank balance is %d", &diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
            }
        }
        else if(n==2)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p!=9123)
            {
                printf("Please try again\n\n");
                scanf("%d", &p);

                if(p!=9123)
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    else if(card=='l')
    {
        printf("Hello HARSHA N\n\n");

        printf("> Press 1 to withdrawal the money from your account\n\n");
        printf("> Press 2 to check the balance\n\n");

        b = 80000;

        scanf("%d", &n);

        if(n==1)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p==4674)
            {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if(a>b)
                {
                    printf("Insufficient Balance!");
                }
                else
                {
                    printf("Collect the amount\n\n");

                    diff = b - a;

                    printf("Your remaining bank balance is %d", &diff);
                }
            }
            else
            {
                printf("Incorrect PIN!\n\n");

                printf("Please try again\n\n");

                scanf("%d", &p);

                if(p==4674)
                {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if(a>b)
                    {
                        printf("Insufficient Balance!");
                    }
                    else
                    {
                        printf("Collect the amount\n\n");

                        diff = b - a;

                        printf("Your remaining bank balance is %d", &diff);
                    }
                }
                else
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
            }
        }
        else if(n==2)
        {
            printf("Please enter your 4-digit PIN : \n");
            scanf("%d", &p);

            if(p!=4674)
            {
                printf("Please try again\n\n");
                scanf("%d", &p);

                if(p!=4674)
                {
                    printf("Your request has been blocked\n");
                    printf("Please try again");
                }
                else
                {
                    printf("Your bank balance is %d", b);
                }
            }
            else
            {
                printf("Your bank balance is %d", b);
            }
        }
    }
    return 0;
}

