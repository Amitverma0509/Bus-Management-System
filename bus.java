// per ticket price is 12$
import java.util.Scanner;
public class bus {
    public static void showPerson(int person){
        int ticket = 12 * person;
        System.out.println("*********************");
        System.out.println("Number of person is: " + person);
        System.out.println("Amount collected is " + ticket + "$");
        System.out.println("*********************");

    }

    public static int addPerson() {
        Scanner ob = new Scanner(System.in);
        System.out.println("*********************");
        System.out.println("Enter number of person to be added: ");
        int nPerson = ob.nextInt();
        System.out.println("*********************");

        if(nPerson < 0) {
            System.out.println("*********************");
            System.out.println("Enter valid number");
            System.out.println("*********************");
            return 0;
        } else {
            return nPerson;
        }
    }

    public static int removePerson(int person) {
        Scanner ob = new Scanner(System.in);
        System.out.println("*********************");
        System.out.println("Enter number of person to be remove: ");
        int nPerson = ob.nextInt();
        System.out.println("*********************");

        if(nPerson < 0) {
            System.out.println("*********************");
            System.out.println("Number of person must be greater than 0");
            System.out.println("*********************");
            return 0;
        } else if (nPerson > person) {
            System.out.println("*********************");
            System.out.println("Number of person to be remove should be greater than current person");
            System.out.println("*********************");
            return 0;
        } else {
            return nPerson;
        }
    }

    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        int person = 0;
        boolean isRunning = true;
        while(isRunning) {
            System.out.println("*********************");
            System.out.println("    Bus Management    ");
            System.out.println("1. Show Person");
            System.out.println("2. Add Person");
            System.out.println("3. Remove Person");
            System.out.println("4. Exit");
            System.out.println("*********************");
            System.out.println("Enter your choice (1-4): ");
            int n = ob.nextInt();

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
                System.out.println("*********************");
                System.out.println("Enter a valid choice");
                System.out.println("*********************");
                break;
            }
        }
        System.out.println("*********************");
        System.out.println("Thank You! Have a nice day!");
        System.out.println("*********************");
    }
}
