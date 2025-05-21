#include <stdio.h>

// Define a struct to hold portfolio information
struct Portfolio {
    char name[100];
    char email[100];
    char skills[5][50];
    char projects[3][100];
};

void displayPortfolio(struct Portfolio p) {
    printf("\n===== Portfolio =====\n");
    printf("Name   : %s\n", p.name);
    printf("Email  : %s\n", p.email);

    printf("\nSkills:\n");
    for (int i = 0; i < 5; i++) {
        printf("- %s\n", p.skills[i]);
    }

    printf("\nProjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("- %s\n", p.projects[i]);
    }

    printf("=====================\n");
}

int main() {
    struct Portfolio myPortfolio = {
        "John Doe",
        "john.doe@example.com",
        {
            "C Programming",
            "Data Structures",
            "Algorithms",
            "Git & GitHub",
            "Linux"
        },
        {
            "Student Management System",
            "Tic Tac Toe in C",
            "Simple Shell in Linux"
        }
    };

    displayPortfolio(myPortfolio);
    return 0;
}