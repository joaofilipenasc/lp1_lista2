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
 *  @param first Ponteiro apontando para o inicio do range
 *  @param last Ponteiro apontando para o fim do range  
 *  @param p Função que retorna true quando uma determinada condição é satisfeita ou falso caso contrário.
 */

bool p(const string &b);

template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p) {
    while (first != last) {
        if (p(*first)) {
            return first;
        }
        ++first;
    }
    return first;
}

}
#endif
