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
 *  @param first Ponteiro apontando para o início do range a ser considerado
 *  @param last Ponteiro apontando para o fim do range a ser considerado
 */

template <class ForwardIterator1, class ForwardIterator2>
void iter_swap (ForwardIterator1 a, ForwardIterator2 b) {
  swap(*a, *b);
}

template<class BidirIt>
void reverse(BidirIt first, BidirIt last) {
    while ((first!=last) && (first!=--last)) {
    std::iter_swap(first,last);
    ++first;
  }
}

}
#endif
