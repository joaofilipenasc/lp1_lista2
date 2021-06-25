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
 * 
 */

template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p) {
    while (first != last) {
        while (p(*first)) {
            ++first;
            if (first == last) {
                return first;
            }
        }
    do {
      --last;
      if (first == last) {
        return first;
      }
    } while (!p(*last));
    swap (*first,*last);
    ++first;
    }
    return first;
}

}
#endif
