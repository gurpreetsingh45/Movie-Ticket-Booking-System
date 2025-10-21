#include <iostream>
#include <cstring>
#include "../include/Movie.h"
using namespace std;
namespace superman
{
    Movie::Movie()
    {
        m_title = nullptr;
        m_genre = nullptr;
        m_price = 0.0;
        m_seatAvailable = 0;
    }
    Movie::~Movie()
    {
        delete[] m_title;
        delete[] m_genre;
    }
    void Movie::setDetails()
    {
        delete[] m_title;
        delete[] m_genre;
        char temp[20];
        cout << "Title: ";
        cin.getline(temp, 20);
        m_title = new char[strlen(temp) + 1];
        strcpy(m_title, temp);
        cout << "Genre: ";
        cin.getline(temp, 20);
        m_genre = new char[strlen(temp) + 1];
        strcpy(m_genre, temp);
        cout << "Ticket Price: ";
        cin >> m_price;
        cin.ignore();
        cout << "Total Seats: ";
        cin >> m_seatAvailable;
        cin.ignore();
    }
    void Movie::bookTicket(int numTickets)
    {
        if (m_seatAvailable >= numTickets)
        {
            m_seatAvailable -= numTickets;
        }
        else
        {
            cout << "Not Enough seats available" << endl;
        }
    }
    void Movie::display()
    {
        cout << m_title << " (" << m_genre << ") - $" << m_price << " - " << m_seatAvailable << " seats" << endl;
    }
}