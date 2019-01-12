/* 
 * The set of all  elements which are in S1, in S2, or in both S1 and S2.
 * S1 ꓴ S2 = { x : (x ∈ S1) ᴠ (x ∈ S2) }
 * Sets cannot have duplicate elements.
 * Multiple occurrences of identical elements have no effect on the cardinality of a set.
 * Properties:
 *   Associative property: S1 ꓴ ( S2 ꓴ S3 ) = ( S1 ꓴ S2 ) ꓴ S3
 *   Commutative property: S1 ꓴ S2 = S2 ꓴ S1
 *   Existence of an identity element (empty set): S1 ꓴ ϕ = S1 
 *   
 */
unsigned long long int unionOfTwoSets(unsigned long long int S1, unsigned long long int S2){
  return S1 | S2;
}
