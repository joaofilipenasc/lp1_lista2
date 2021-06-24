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
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last) {
    if(first == n_first) {
        return last;
    }
    if(n_first == last) {
        return first;
    }
    ForwardIt read  = n_first;
    ForwardIt write = first;
    ForwardIt next_read = first; // ler a posição de quando read for last
 
   while(read != last) {
      if(write == next_read) {
          next_read = read; // descobrir onde está o first
      }
      std::inter_swap(write++, read++);
   }
 
   // rotacionar os demais elementos
   rotate(write, next_read, last);
   return write;
}

}
#endif
