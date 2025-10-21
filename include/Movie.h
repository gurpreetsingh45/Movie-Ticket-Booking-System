#ifndef SUPERMAN_MOVIE_H
#define SUPERMAN_MOVIE_H
namespace superman{
    class Movie{
        char *m_title;
        char *m_genre;
        float m_price;
        int m_seatAvailable;
    public:
        Movie();
        ~Movie();
        void setDetails();
        void bookTicket(int numTickets);
        void display();
    };
}

#endif // !SUPERMAN_MOVIE_H