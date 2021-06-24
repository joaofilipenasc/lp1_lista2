#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 *  @param first Ponteiro apontando para o início do range
 *  @param last Ponteiro apontando para o fim do range
 *  @param p Função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário
 */

template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p) {
    while (first != last) {
        if (!p(*first)) {
            return false;
        }
        ++first;
    }
    return true;
}

template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p) {
    while (first != last) {
        if (p(*first)) {
            return true;
        }
        ++first;
    }
    return false;
}

template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p) {
    while (first != last) {
        if (p(*first)) {
            return false;
        }
        ++first;
    }
    return true;
}

}
#endif
