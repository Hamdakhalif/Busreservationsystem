#include <cstdio>
#include <cstring>

#define MAX_SEATS 50

// Structure to represent a bus reservation
struct Reservation {
    int seatNumber;
    char passengerName[50];
};

// Function prototypes
void displayMenu();
void showBusSchedule();
void bookTicket(struct Reservation reservations[], int* numReservations);
void cancelReservation(struct Reservation reservations[], const int* numReservations);
void showBusStatusBoard(struct Reservation reservations, int numReservations);

int main() {
    struct Reservation reservations{};
    int numReservations = 0;
    int choice;

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showBusSchedule();
                break;
            case 2:
                bookTicket(&reservations, &numReservations);
                break;
            case 3:
                cancelReservation(&reservations, &numReservations);
                break;
            case 4:
                showBusStatusBoard(reservations, numReservations);
                break;
            case 5:
                printf("Exiting the Bus Reservation System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void displayMenu();

void showBusSchedule() {
    printf("Bus Schedule:\n");
    // Display the schedule details
}

void bookTicket(struct Reservation reservations[], int* numReservations) {
    if (*numReservations < MAX_SEATS) {
        printf("Enter bus number: ");
        // Read bus number
        // Display available seats and passengers' names
        printf("Enter number of tickets: ");
        // Read number of tickets
        // Loop to input seat number and passenger names
        for (int i = 0; i < *numReservations; ++i) {
            printf("Enter seat number for passenger %d: ", i + 1);
            // Read seat number
            printf("Enter passenger name for seat %d: ", i + 1);
            // Read passenger name
            // Save reservation details in the array
        }
        printf("Ticket(s) booked successfully!\n");
    } else {
        printf("Sorry, the bus is fully booked. No more reservations can be made.\n");
    }
}

void cancelReservation(struct Reservation reservations[], const int* numReservations) {
    if (*numReservations > 0) {
        printf("Enter seat number to cancel reservation: ");
        // Read seat number
        // Loop to find the reservation and remove it from the array
        // Decrement the number of reservations
        printf("Reservation canceled successfully!\n");
    } else {
        printf("No reservations to cancel.\n");
    }
}



void displayMenu() {
    printf("\nBus Reservation System Menu:\n");
    printf("1. Show Bus Schedule\n");
    printf("2. Book Ticket\n");
    printf("3. Cancel Reservation\n");
    printf("4. Show Bus Status Board\n");
    printf("5. Exit\n");
}

void showBusStatusBoard(struct Reservation reservations[], int numReservations) {
    printf("Bus Status Board:\n");
    // Display the status board with reserved seats and passenger names
}
