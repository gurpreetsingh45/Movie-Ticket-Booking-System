#include <iostream>
#include "../include/Movie.h"
using namespace std;
using namespace superman;

int main() {
    
    Movie M;
    M.setDetails();
    M.display();
    M.bookTicket(4);
    M.display();

    return 0;
}