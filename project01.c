#include <stdio.h>
#include <string.h>

// Define structure for Player
struct Player {
    char name[50];
    int runs;
    int wickets;
    int matches;
};

// Function to add player details
void addPlayer(struct Player *p) {
    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Runs: ");
    scanf("%d", &p->runs);

    printf("Enter Wickets: ");
    scanf("%d", &p->wickets);

    printf("Enter Matches: ");
    scanf("%d", &p->matches);
}

// Function to display player details
void displayPlayer(struct Player p) {
    printf("\nName: %s | Runs: %d | Wickets: %d | Matches: %d\n", 
           p.name, p.runs, p.wickets, p.matches);
}

// Main function
int main() {
    struct Player pl;
    addPlayer(&pl);     // Pass by reference
    displayPlayer(pl);  // Display the player details
    return 0;
}
