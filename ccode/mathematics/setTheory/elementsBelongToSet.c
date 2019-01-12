/* 
 * Elementhood of an element
 * Elements belong to S or not.
 * The basic concept relates to a binary relation (∈ or ∉) between 1 element and a set.
 * This function represents this concept,
 *   but addicionaly it refers to the membership of many elements in a set. ⊂ ⊃ ⊄ ⊅
 */
_Bool elementsBelongToSet(unsigned long long int SE, unsigned long long int S){
  return SE == (SE & S);
}
