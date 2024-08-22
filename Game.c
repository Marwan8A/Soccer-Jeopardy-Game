#include <stdio.h>
#include <ctype.h>
#include <string.h>

int score = 0;


void worldCup()
{
    int level;
    char answer[100];
    
    printf("\n100 \n200\n300\n");
    printf("Pick a level: ");
    scanf(" %i", &level);
    if (level == 100)
    {
        printf("\nWho is the all-time top scorer of the world cup? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"klose") == 0 ||  strcmp(answer,"miroslav") == 0)
        {
            printf("Correct!\t %s is the world cup top scorer. \n",answer);
            score += 100;
        }
        else
        {
            printf("Incorrect\t %s is not the world cup top scorer. ", answer);
            score -= 100;
        }
    }
    else if (level == 200)
    {
        printf("\nWhich country has won the most world cups? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"brazil") == 0)
        {
            printf("Correct!\t %s has won the most world cups. \n",answer);
            score += 200;
        }
        else
        {
            printf("Incorrect\t %s has not won the most world cups. ", answer);
            score -= 200;
        }
    }
    else if (level == 300)
    {
        printf("\nWho has the most match appearances in the world cup? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"messi") == 0 ||  strcmp(answer,"lionel") == 0)
        {
            printf("Correct!\t %s has the most world cup match appearances. \n",answer);
            score += 300;
        }
        else
        {
            printf("Incorrect\t %s does not have the most world cup match appearances. ", answer);
            score -= 300;
        }
    }
    else
    {
        printf("%i is not a valid level\n", level);
        worldCup();
    }
     
    
}


void championsLeague()
{
    int level;
    char answer[100];
    
    printf("\n100 \n200\n300\n");
    printf("Pick a level: ");
    scanf(" %i", &level);
    if (level == 100)
    {
        printf("\nWho is the all-time top scorer of the UCL? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"cristiano") == 0 ||  strcmp(answer,"ronaldo") == 0)
        {
            printf("Correct!\t %s is the UCL top scorer. \n",answer);
            score += 100;
        }
        else
        {
            printf("Incorrect\t %s is not the UCL top scorer. ", answer);
            score -= 100;
        }
    }
    else if (level == 200)
    {
        printf("\nWhich team has won the most UCL? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"real") == 0 || strcmp(answer,"madrid") == 0 || strcmp(answer,"rma") == 0)
        {
            printf("Correct!\t %s has won the most UCL. \n",answer);
            score += 200;
        }
        else
        {
            printf("Incorrect\t %s has not won the most UCL. ", answer);
            score -= 200;
        }
    }
    else if (level == 300)
    {
        printf("\nWho has the most match appearances in the UCL? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"cristiano") == 0 || strcmp(answer,"ronaldo") == 0)
        {
            printf("Correct!\t %s has the most UCL match appearances. \n",answer);
            score += 300;
        }
        else
        {
            printf("Incorrect\t %s does not have the most UCL match appearances. ", answer);
            score -= 300;
        }
    }
    else
    {
        printf("%i is not a valid level\n", level);
        championsLeague();
    }
     
    
}

void barcelona()
{
    int level;
    char answer[100];
    
    printf("\n100 \n200\n300\n");
    printf("Pick a level: ");
    scanf(" %i", &level);
    if (level == 100)
    {
        printf("\nWho is the all-time top scorer for Barcelona? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"lionel") == 0 ||  strcmp(answer,"messi") == 0)
        {
            printf("Correct!\t %s is the all-time top scorer for Barcelona. \n",answer);
            score += 100;
        }
        else
        {
            printf("Incorrect\t %s is not the all-time top scorer for Barcelona. ", answer);
            score -= 100;
        }
    }
    else if (level == 200)
    {
        printf("\nWho is the youngest player to play for Barcelona \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"lamine") == 0 || strcmp(answer,"yamal") == 0)
        {
            printf("Correct!\t %s is the youngest player to play for Barcelona \n",answer);
            score += 200;
        }
        else
        {
            printf("Incorrect\t %s is not the youngest player to play for Barcelona ", answer);
            score -= 200;
        }
    }
    else if (level == 300)
    {
        printf("\nWhat is the name of the Barcelona home stadium? \n");
        scanf("%s",answer);
        answer[strcspn(answer,"\n")] = '\0';
        for (int i = 0; answer[i];i++)
        {
            answer[i] = tolower(answer[i]);
        }
        if (strcmp(answer,"camp") == 0 ||  strcmp(answer,"nou") == 0)
        {
            printf("Correct!\t %s is the home stadium for Barcelona. \n",answer);
            score += 300;
        }
        else
        {
            printf("Incorrect\t %s is not home stadium for Barcelona ", answer);
            score -= 300;
        }
    }
    else
    {
        printf("%i is not a valid level\n", level);
        barcelona();
    }
     
    
}

int main(){
    int choice;
    
    
    printf("~ Welcome to SOCCER JEOPARDY ~");
    printf("\n________________________________\n");

    while (score >= 0){
        printf("\n1- World Cup \n2- Champions League\n3- Barcelona\n");
        printf("Pick a category: ");
        scanf(" %i",&choice);
        
        
        if (choice == 1)
        {
            worldCup();
        }
        else if(choice == 2)
        {
            championsLeague();
        }
        else if (choice == 3)
        {
            barcelona();
        }
        else
        {
            printf("Invalid Category");
        }
    }

    return 0;
}