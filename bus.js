// Function to display the current number of persons and amount collected
function showPerson(person) {
    const ticket = 12 * person;
    console.log("*********************");
    console.log(`Number of persons is ${person}`);
    console.log(`Amount collected is ${ticket} $`);
    console.log("*********************");
}

// Function to add persons
function addPerson() {
    while (true) {
        const input = prompt("Enter number of persons to be added:");
        const nPerson = parseInt(input, 10);
        if (!isNaN(nPerson) && nPerson >= 0) {
            return nPerson;
        } else {
            console.log("*********************");
            console.log("Enter a positive number");
            console.log("*********************");
        }
    }
}

// Function to remove persons
function removePerson(person) {
    while (true) {
        const input = prompt("Enter number of persons to be removed:");
        const nPerson = parseInt(input, 10);
        if (isNaN(nPerson)) {
            console.log("*********************");
            console.log("Invalid input. Please enter a number.");
            console.log("*********************");
        } else if (nPerson < 0) {
            console.log("*********************");
            console.log("Number of persons must be greater than or equal to 0");
            console.log("*********************");
        } else if (nPerson > person) {
            console.log("*********************");
            console.log("Number of persons to be removed should not be greater than current number of persons");
            console.log("*********************");
        } else {
            return nPerson;
        }
    }
}

// Main function to run the bus management system
function main() {
    let person = 0;
    let isRunning = true;

    while (isRunning) {
        console.log("*********************");
        console.log("   Bus Management    ");
        console.log("1. Show Person");
        console.log("2. Add Person");
        console.log("3. Remove Person");
        console.log("4. Exit");
        console.log("*********************");

        const choice = parseInt(prompt("Enter your choice (1-4):"), 10);
        switch (choice) {
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
                console.log("*********************");
                console.log("Enter a valid choice");
                console.log("*********************");
        }
    }

    console.log("*********************");
    console.log("Thank You! Have a nice day!");
    console.log("*********************");
}

// Run the main function
main();