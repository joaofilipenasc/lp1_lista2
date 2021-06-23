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
 *  @param first posição do primeiro elemento do range
 *  @param last posição logo após o último elemento do range
 *  @param d_first posição inicial da sequência final e não deve apontar para nenhum elemento entre o first e o last
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first) {
    while (first != last) {
        *d_first = *first;
        ++d_first; 
        ++first;
    }
    return d_first;
}

}
#endif
