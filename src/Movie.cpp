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
    void Movie::setDetails(const char *title, const char *genre, float price, int seats)
    {
        delete[] m_title;
        delete[] m_genre;
        m_title = new char[strlen(title) + 1];
        strcpy(m_title, title);
        m_genre = new char[strlen(genre) + 1];
        strcpy(m_genre, genre);
        m_price = price;
        m_seatAvailable = seats;
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