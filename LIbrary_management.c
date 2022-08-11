//start function prototype
#include<stdio.h>
void main_manu(void);
void Engineering(void);
void Bba(void);
void Arts(void);
void Pure_sub(void);
void show_eng_facl(void);
void cse(void);
void eee(void);
void civil(void);
void ict(void);
void ipe(void);
void ice(void);
void  manu_of_cse(void);
void  Add_books(void);
void Show_books(void);
void Update_books(void);
void Show_Total_cse_book(void);
//end function prototype




//start main menu
int main()
{
    int n,flag=1;
    while (flag !=0)
    {
        main_manu();
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Engineering();//function jabe
            break;
        case 2:
            Bba();//func jabe
            break;
        case 3:
            Arts();//func jabe
            break;
        case 4:
            Pure_sub();//func jabe
            break;

        case 5:
            flag=0;
            break;



        }
    }
    return 0;
}
//end main manu




//start view main_menu func start
void main_manu(void)
{
    printf("\t\t\t\t\t\tWELLCOME TO LIBRARY\n\n");
    printf("1.ENGINEERING\t");
    printf("2.BBA\n");
    printf("3.ARTS\t\t");
    printf("4.PURE SUBJECT\n");
    printf("5.EXIT\n");
}
//end view main manu



//start engineering main menu which include cse....ipe
void Engineering()
{
    show_eng_facl();
    int flag=1,n,i;
    scanf("%d",&n);
    //while(flag!=0)


    {
        switch(n)
        {
        case 1:
            cse();
            break;
        case 2:
            eee();
            break;
        case 3:
            civil();
            break;
        case 4:
            ict();
            break;
        case 5:
            ipe();
            break;
        case 6:
            ice();
            break;
        case 7:
            flag=0;
            break;
        }
    }
}
//end engineering main menu which include cse....ipe




//start cse facqualty
void cse()
{

    int flag=1,n;
    while(flag!=0)
    {
        manu_of_cse();
        scanf("%d",&n);
        switch(n)
        {

        case 1:
            Add_books();
            break;
        case 2:
            Show_books();
            break;
        case 3:
            Update_books();
        case 4:
            flag=0;
            break;
        }

    }
}
//end cse facqualty




//1.start work manu of cse sub
void Add_books(void)
{
    int n,i,sum=0;
    printf("Total books you want to Add:");
    scanf("%d",&n);
    struct books
    {
        char name[100];
        int no_of_books;
        char writer_nme[100];
    };

    struct books x[50];
    FILE *fp1,*fp2,*fp3,*fp4;
    fp1=fopen("1.cse_book_name.txt","w");
    fp2=fopen("2.cse_writer_name.txt","w");
    fp3=fopen("3.cse_number_of_book.txt","w");
    fp4=fopen("7.cse_totall_book.txt","w");

    for(i=0; i<n; i++)
    {
        printf("\tName of %d book:",i+1);
        scanf("%s",x[i].name);
        fprintf(fp1,"%s\n",x[i].name);
        printf("\tWritter name:");
        scanf("%s",x[i].writer_nme);
        fprintf(fp2,"%s\n",x[i].writer_nme);
        printf("\tHow many books you want to store:");
        scanf("%d",&x[i].no_of_books);
        fprintf(fp3,"%d\n",&x[i].no_of_books);
        sum=sum+x[i].no_of_books;
    }
    //scanf("%d",&sum);
    fprintf(fp4,"%d\n",sum);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    printf("\n\n\n\t\tTotal books:%d stored\n\n\t\tDETAILS:\n",sum);
    for(i=0;i<n;i++)
    {
    printf("\t\tBook name:%s\n\t\tWriter name :%s\n\t\tStored book:%d\n\n",x[i].name,x[i].writer_nme,x[i].no_of_books);
    }

}




//2.
void Show_books(void)
{
    int x;
    FILE *fp7;
    fp7=fopen("7.cse_totall_book.txt","r");
    fscanf(fp7,"%d",&x);
    printf("\n\nTotal CSE Book:%d\n\n",x);
    fclose(fp7);
}




//3.start update cse book
void Update_books(void)
{
    int n,i,sum=0;
    printf("Total books you want to Update:");
    scanf("%d",&n);
    struct books
    {
        char name[100];
        int no_of_books;
        char writer_nme[100];
    };

    struct books x[50];
    FILE *fp1,*fp2,*fp3,*fp4;
    fp1=fopen("1.cse_book_name.txt","a");
    fp2=fopen("2.cse_writer_name.txt","a");
    fp3=fopen("3.cse_number_of_book.txt","a");
    fp4=fopen("7.cse_totall_book.txt","a");

    for(i=0; i<n; i++)
    {
        printf("\n\tName of %d book:",i+1);
        scanf("%s",x[i].name);
        fprintf(fp1,"%s\n",x[i].name);
        printf("\tWritter name:");
        scanf("%s",x[i].writer_nme);
        fprintf(fp2,"%s\n",x[i].writer_nme);
        printf("\tHow many books you want to store:");
        scanf("%d",&x[i].no_of_books);
        fprintf(fp3,"%d\n",&x[i].no_of_books);
        sum=sum+x[i].no_of_books;
    }
    //scanf("%d",&sum);
    fprintf(fp4,"%d\n",sum);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    printf("\n\n\n\t\tTotal books:%d Updated\n\n\t\tDETAILS:\n",sum);
    for(i=0;i<n;i++)
    {
    printf("\t\tBook name:%s\n\t\tWriter name:%s\n\t\tUpdated book:%d\n\n",x[i].name,x[i].writer_nme,x[i].no_of_books);
    }
}
//end update book




//start work manu view of cse sub
void manu_of_cse()
{
    printf("\n\n1.Add New Books\n");
    printf("2.Show Total CSE books\n");
    printf("3.Update Books\n");
    printf("4.Exit\n\n");
}
//end work manu view of cse sub




void eee()
{
    printf("Books list of EEE \n\n");
}



void civil()
{
    printf("Books list of CIVIL\n\n");
}


void ict()
{
    printf("Books name of ICT\n\n");
}


void ipe()
{
    printf("Books name of IPE\n\n");
}


void ice()
{
    printf("books name of ICE\n\n");
}



//start manu view of engineering
void show_eng_facl()
{
    printf("\n\n\n1.CSE\t");
    printf("2.EEE\n");
    printf("3.CIVIL\t");
    printf("4.ICT\n");
    printf("5.IPE\t");
    printf("6.ICE\n");
    printf("7.EXIT\n");
}


//end manu view of engineering
void Bba()
{

}


void Arts()
{

}


void Pure_sub()
{

}
