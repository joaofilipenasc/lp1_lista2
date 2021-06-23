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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp ) {
std::pair<Itr, Itr> result(first, first);
 
    if (first == last) return result;
    if (++first == last) return result;
 
    if (comp(*first, *result.first)) {
        result.second = result.first;
        result.first = first;
    } else {
        result.second = first;
    }
    while (++first != last) {
        Itr i = first;
        if (++first == last) {
            if (comp(*i, *result.first)) {
                result.first = i;
            }
            else if (!(comp(*i, *result.second))) {
                result.second = i;
                break;
            }
        } else {
            if (comp(*first, *i)) {
                if (comp(*first, *result.first)) {
                    result.first = first;
                }
                if (!(comp(*i, *result.second))) {
                    result.second = i;
                }
            } else {
                if (comp(*i, *result.first)) result.first = i;
                if (!(comp(*first, *result.second))) result.second = first;
            }
        }
    }
    return result;
}

}
#endif
