#include<stdio.h>
#include<stdbool.h>

int showPerson(int person) {
    int ticket = 12 * person;
    printf("*********************\n");
    printf("Number of person is %d\n", person);
    printf("Amount collected is %d $\n",ticket);
    printf("*********************\n");
    return person;
}

int addPerson() {
    int nPerson;
    printf("*********************\n");
    printf("Enter number of person to be added: ");
    scanf("%d", &nPerson);
    printf("*********************\n");

    if(nPerson < 0) {
        printf("*********************\n");
        printf("Enter a positive number\n");
        printf("*********************\n");
        return 0;
    } else {
        return nPerson;
    }
}

int removePerson(int person) {
    int nPerson;
    printf("*********************\n");
    printf("Enter number of person to be removed: ");
    scanf("%d", &nPerson);
    printf("*********************\n");

    if(nPerson < 0) {
        printf("*********************\n");
        printf("Number of person must be greater than 0\n");
        printf("*********************\n");
        return 0;
    } else if (nPerson > person) {
        printf("*********************\n");
        printf("Number of person to be removed should be greater then current person\n");
        printf("*********************\n");
        return 0;
    } else {
        return nPerson;
    }
}

int main() {
    int person = 0;
    bool isRunning = true;
    while(isRunning) {
        printf("*********************\n");
        printf("   Bus Management    \n");
        printf("1. Show Person\n");
        printf("2. Add Person\n");
        printf("3. Remove Person\n");
        printf("4. Exit\n");
        printf("*********************\n");
        printf("Enter your choice (1-4): ");
        int n;
        scanf("%d", &n);
        switch(n) {
            case 1:
            showPerson(person);
            break;
            case 2:
            person += addPerson();
            break;
            case 3: 
            person -= removePerson(person);
            break;
            case 4: 
            isRunning = false;
            break;
            default: 
            printf("*********************\n");
            printf("Enter a valid choice\n");
            printf("*********************\n");
            break;
        }
    }
    printf("*********************\n");
    printf("Thank You! Have a nice day!\n");
    printf("*********************\n");
}