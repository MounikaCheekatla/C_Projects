#include <stdio.h>

int main()
{
    printf("---------Main Menu---------\n\n");

    printf("1. Add Books\n");
    printf("2. Display Book Information\n");
    printf("3. Search Books (Book Status)\n");
    printf("4. Exit\n\n");

    int a1;
    printf("Enter : ");
    scanf("%d", &a1);
    printf("\n\n");

    if(a1==1)
    {
        printf("You can add book information\n\n");

        printf("Choose the Category : \n\n");

        printf("1. Computer Science\n");
        printf("2. Electronics\n");
        printf("3. Civil\n\n");

        int a2;
        printf("Choose a Category : ");
        scanf("%d", &a2);
        printf("\n\n");

        if(a2==1)
        {
            printf("You have Chosen Computer Science\n\n");

            printf("1. Introduction to Computer Science and Programming\n");
            printf("2. Introduction to DSA\n");
            printf("3. Web Development\n\n");

            int a3;
            printf("Choose a book  : ");
            scanf("%d", &a3);
            printf("\n\n");

            if(a3==1)
            {
                printf("You have choosen Introduction to Computer Science and Programming book\n\n");

                char book_namea[50];
                char author_namea[50];
                int pagea;
                int pricea;

                printf("Book Name : ");
                scanf("%s", &book_namea);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_namea);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pagea);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &pricea);
                printf("\n\n");
            }
            else if(a3==2)
            {
                printf("You have choosen Introduction to DSA book\n\n");

                char book_nameb[50];
                char author_nameb[50];
                int pageb;
                int priceb;

                printf("Book Name : ");
                scanf("%s", &book_nameb);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_nameb);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pageb);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &priceb);
                printf("\n\n");
            }
            else if(a3==3)
            {
                printf("You have choosen Web Development book\n\n");

                char book_namec[50];
                char author_namec[50];
                int pagec;
                int pricec;

                printf("Book Name : ");
                scanf("%s", &book_namec);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_namec);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pagec);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &pricec);
                printf("\n\n");
            }
        }
        else if(a2==2)
        {
            printf("You have Chosen Electronics category\n\n");

            printf("1. Practical Electronics for Inventors\n");
            printf("2. The art of Electronics\n");
            printf("3. Fundamentals of Digital Circuits\n\n");

            int a4;
            printf("Choose a book  : ");
            scanf("%d", &a4);
            printf("\n\n");

            if(a4==1)
            {
                printf("You have choosen Practical Electronics for Investors book\n\n");

                char book_named[50];
                char author_named[50];
                int paged;
                int priced;

                printf("Book Name : ");
                scanf("%s", &book_named);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_named);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &paged);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &priced);
                printf("\n\n");
            }
            else if(a4==2)
            {
                printf("You have choosen The art of Electronics book\n\n");

                char book_namee[50];
                char author_namee[50];
                int pagee;
                int pricee;

                printf("Book Name : ");
                scanf("%s", &book_namee);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_namee);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pagee);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &pricee);
                printf("\n\n");
            }
            else if(a4==3)
            {
                printf("You have choosen Fundamentals of Digital Circuits book\n\n");

                char book_namef[50];
                char author_namef[50];
                int pagef;
                int pricef;

                printf("Book Name : ");
                scanf("%s", &book_namef);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_namef);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pagef);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &pricef);
                printf("\n\n");
            }

        }
        else if(a2==3)
        {
            printf("You have Chosen Civil category\n\n");

            printf("1. Introduction to Structural Engineering\n");
            printf("2. Highway and Traffic Engineering\n");
            printf("3. Geomatics Engineering\n\n");

            int a5;
            printf("Choose a book  : ");
            scanf("%d", &a5);
            printf("\n\n");

            if(a5==1)
            {
                printf("You have choosen Introduction to Structural Engineering book\n\n");

                char book_nameg[50];
                char author_nameg[50];
                int pageg;
                int priceg;

                printf("Book Name : ");
                scanf("%s", &book_nameg);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_nameg);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pageg);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &priceg);
                printf("\n\n");
            }
            else if(a5==2)
            {
                printf("You have choosen Highway and Traffic Engineering book\n\n");

                char book_nameh[50];
                char author_nameh[50];
                int pageh;
                int priceh;

                printf("Book Name : ");
                scanf("%s", &book_nameh);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_nameh);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pageh);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &priceh);
                printf("\n\n");
            }
            else if(a5==3)
            {
                printf("You have choosen Geomatics Engineering book\n\n");

                char book_namei[50];
                char author_namei[50];
                int pagei;
                int pricei;

                printf("Book Name : ");
                scanf("%s", &book_namei);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s", &author_namei);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d", &pagei);
                printf("\n\n");

                printf("Price : ");
                scanf("%d", &pricei);
                printf("\n\n");
            }
        }
    }
    else if(a1==3)
    {
        printf("You can search the book (Book Status)\n\n");

        printf("Press the Code:123 for Introduction to Computer Science and Programming\n");
        printf("Press the Code:456 for Introduction to DSA\n");
        printf("Press the Code:789 for Web Development\n");
        printf("Press the Code:523 for Practical Electronics for Inventors\n");
        printf("Press the Code:759 for The art of Electronics\n");
        printf("Press the Code:157 for Fundamentals of Digital Circuits\n");
        printf("Press the Code:359 for Introduction to Structural Engineering\n");
        printf("Press the Code:153 for Highway and Traffic Engineering\n");
        printf("Press the Code:104 for Geomatics Engineering\n");

        int a6;
        printf("Enter the book to search the (USE THE CODE) : ");
        scanf("%d", &a6);

        printf("\n");

        switch (a6)
        {
        case 123:
            printf("Book Name : Introduction to Computer Science and Programming");
            printf("Book Status: 8 copies left");
            break;

        case 456:
            printf("Book Name : Introduction to DSA");
            printf("Book Status: 2 copies left");
            break;

        case 789:
            printf("Book Name : Web Development");
            printf("Book Status: 4 copies left");
            break;

        case 523:
            printf("Book Name : Practical Electronics for Inventors");
            printf("Book Status: 5 copies left");
            break;

        case 759:
            printf("Book Name : The art of Electronics");
            printf("Book Status: 3 copies left");
            break;

        case 157:
            printf("Book Name : Fundamentals of Digital Circuits");
            printf("Book Status: 6 copies left");
            break;

        case 359:
            printf("Book Name : Introduction to Structural Engineering");
            printf("Book Status: 1 copies left");
            break;

        case 153:
            printf("Book Name : Highway and Traffic Engineering");
            printf("Book Status: 4 copies left");
            break;

        case 104:
            printf("Book Name : Geomatics Engineering");
            printf("Book Status: 7 copies left");
            break;
        }
    }
    else if (a1==4)
    {
        printf("The Library is closed\n\n");

        printf("Have a Nice Day!");
    }
    return 0;
}
