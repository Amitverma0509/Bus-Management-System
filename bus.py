def show_person(person):
    ticket = 12 * person
    print("*********************")
    print(f"Number of persons is {person}")
    print(f"Amount collected is {ticket} $")
    print("*********************")

def add_person():
    while True:
        try:
            n_person = int(input("Enter number of persons to be added: "))
            if n_person >= 0:
                return n_person
            else:
                print("*********************")
                print("Enter a positive number")
                print("*********************")
        except ValueError:
            print("*********************")
            print("Invalid input. Please enter a number.")
            print("*********************")

def remove_person(person):
    while True:
        try:
            n_person = int(input("Enter number of persons to be removed: "))
            if n_person < 0:
                print("*********************")
                print("Number of persons must be greater than or equal to 0")
                print("*********************")
            elif n_person > person:
                print("*********************")
                print("Number of persons to be removed should not be greater than current number of persons")
                print("*********************")
            else:
                return n_person
        except ValueError:
            print("*********************")
            print("Invalid input. Please enter a number.")
            print("*********************")

def main():
    person = 0
    is_running = True
    while is_running:
        print("*********************")
        print("   Bus Management    ")
        print("1. Show Person")
        print("2. Add Person")
        print("3. Remove Person")
        print("4. Exit")
        print("*********************")
        
        try:
            choice = int(input("Enter your choice (1-4): "))
            if choice == 1:
                show_person(person)
            elif choice == 2:
                person += add_person()
            elif choice == 3:
                person -= remove_person(person)
            elif choice == 4:
                is_running = False
            else:
                print("*********************")
                print("Enter a valid choice")
                print("*********************")
        except ValueError:
            print("*********************")
            print("Invalid input. Please enter a number.")
            print("*********************")
    
    print("*********************")
    print("Thank You! Have a nice day!")
    print("*********************")

if __name__ == "__main__":
    main()
