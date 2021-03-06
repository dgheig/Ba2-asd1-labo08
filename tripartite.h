//
// Created by Olivier Cuisenaire on 04.05.20.
//

#ifndef ASD1_LABS_2020_TRIPARTITE_H
#define ASD1_LABS_2020_TRIPARTITE_H

#include <list>
#define CONTAINER std::list

template <typename T>
std::list<T> tripartite( std::list<T>& L )

template <typename T>
std::vector<T> tripartite( std::vector<T>& v )
{
    std::list<T> tmp;
    auto it = L.begin();
    auto cursor = it;
    while(it != L.end()) {
       auto previous = it++;
       switch(*previous % 3) {
          case 0:
             std::move(previous, it, std::back_inserter(tmp));
             break;
          case 1:
            L.splice()
            ++cursor;
       }
    }
    L.erase(cursor, L.end());

    return tmp;

}

#endif //ASD1_LABS_2020_TRIPARTITE_H
