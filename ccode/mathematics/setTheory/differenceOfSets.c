/*
 * Difference between two sets.
 * Difference (S2 - S1)
 */
unsigned long long int set2MinusSet1(unsigned long long int S2, unsigned long long int S1){
  // ^ EXCLUSIVE OR operator
  // & AND operator
  // Computação correta.
  return S2 & (S2 ^ S1);
}
