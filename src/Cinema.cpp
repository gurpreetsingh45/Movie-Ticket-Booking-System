#include <iostream>
#include "../include/Cinema.h"
#include "../include/Movie.h"
using namespace std;
namespace superman{
    Cinema::Cinema(int count){
        m_movies = new Movie[count];
        m_count = count;
    }
    Cinema::~Cinema(){
        delete[] m_movies;
    }
    void Cinema::addMovie(int index){
        cout << "Enter the details of the movie " << index + 1 << ":" << endl;
        m_movies[index].setDetails();
    }
    void Cinema::showAllMovies() const{
        for (int i{}; i < m_count; i++){
            m_movies[i].display();
        }
    }
    void Cinema::bookMovieTickets(int index, int n){
        m_movies[index].bookTicket(n);
    }
}
