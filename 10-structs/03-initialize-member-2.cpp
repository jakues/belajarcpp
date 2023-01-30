// Copyright © 2022 Rill
// Progress learning on c++
// License : https://creativecommons.org/licenses/by-nc-sa/4.0/

#include <iostream>

using namespace std;

struct Person {
    string Name;
    string Lastname;
    int Age;
};

void displayPerson(string Name, string Lastname, int Age) {
    printf("Name : %s\n", data(Name));
    printf("Lastname : %s\n", data(Lastname));
    printf("Age : %d\n", Age);
}

int main() {
    Person person1;

    // Normal initialize
    person1.Name = "Hakim";
    person1.Lastname = "Ziyech";
    person1.Age = 2022-1993;

    printf("Person 1\n");
    displayPerson(person1.Name, person1.Lastname, person1.Age);

    // Better initialize using bracket
    Person person2 = {
        "Achraf",
        "Hakimi",
        2022-1998
    };

    printf("\nPerson 2\n");
    displayPerson(person2.Name, person2.Lastname, person2.Age);
}