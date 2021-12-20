#include <iostream>
#include "Kindergarten.h"

int main() {
    Kindergarten kindergarten;


    Admin admin("Pegah", "AbbasZade", "pegah@email.com", 1000);
    Board board1("Red", 10.1, 4, 1000);
    Board board2("Green", 10, 5, 2000);
    Desk desk1("Brown", 10, 20, 100);
    Desk desk2("Black", 10, 20, 100);

    Child child1("Ali", "Ahmadi", 20, 2000);

    kindergarten.setAddress("Hamedan");
    kindergarten.setRoomNumber(3);
    kindergarten.setAdmin(admin);
    kindergarten.addBoard(board1);
    kindergarten.addBoard(board2);
    kindergarten.addDesk(desk1);
    kindergarten.addDesk(desk2);
    kindergarten.addChild(child1);

    cout << "Admin : " << kindergarten.getAdmin().getFirstName() << "\t"
         << kindergarten.getAdmin().getLastName() << endl;
    for (int i = 0; i < kindergarten.getChildren().size(); ++i) {
        cout << "Child " << i + 1 << " : "
             << kindergarten.getChildren()[i].getFirstName() << "\t"
             << kindergarten.getChildren()[i].getLastName() << endl;
    }

}
