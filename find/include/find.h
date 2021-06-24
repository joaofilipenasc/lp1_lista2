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

    template<class InputIt, class T, class Equal>
    InputIt find(InputIt first, InputIt last, const T& value, Equal eq) {
        while (first != last) {
            if (*first == value) {
                return first;
            }
            ++first;
        }
        return last;

        if eq(*first, *last) {
            return true;
        } else {
            return false;
        }
    }
}

#endif
