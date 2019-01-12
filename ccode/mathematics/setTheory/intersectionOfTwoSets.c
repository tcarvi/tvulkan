/* 
 * The set that contains all elements of S1 that also belong to S2, or equivalently, 
 * all elements of S2 that also belong to S1. But no other elements.
 * S1 ꓵ S2 = { x : (x ϵ S1) ᴧ (x ϵ S2) }
 * Sets cannot have duplicate elements.
 * Multiple occurrences of identical elements have no effect on the cardinality of a set.
 * Properties:
 *   Associative property: S1 ꓵ ( S2 ꓵ S3 ) = ( S1 ꓵ S2 ) ꓵ S3
 *   Commutative property: S1 ꓵ S2 = S2 ꓵ S1
 *   Null element (empty set): S1 ꓵ ɸ = ɸ
 *   
 */
unsigned long long int intersectionOfTwoSets(unsigned long long int S1, unsigned long long int S2){
  return S1 & S2;
}
