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

template<class InputIt, class Equal>
InputIt unique(InputIt first, InputIt last, Equal eq) {
    //Ordenando os elementos
    sort(first, last);

    if (first == last) {
        return last;
    }
    InputIt resultado = first;
    while (++first != last) {
        if (!eq(*resultado,*first) && ++resultado != first) {
            *(++resultado) = *first;
        }
    }
    return ++resultado;
}

}
#endif
