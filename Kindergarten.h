#include <vector>
#include "Admin.h"
#include "Child.h"
#include "Desk.h"
#include "Board.h"

class Kindergarten {
private:
    Admin admin;
    vector<Child> children;
    vector<Desk> desks;
    vector<Board> boards;

    string address;
    int roomNumber;

public:
    Kindergarten();

    Kindergarten(Admin admin, vector<Child> children, vector<Desk> desks,
                 vector<Board> boards, string address, int roomNumber);

    Admin getAdmin();

    void setAdmin(Admin admin);

    vector<Child> getChildren();

    void addChild(Child child);

    vector<Desk> getDesks();

    void addDesk(Desk desk);

    vector<Board> getBoards();

    void addBoard(Board board);

    string getAddress();

    void setAddress(string address);

    int getRoomNumber();

    void setRoomNumber(int roomNumber);
};

