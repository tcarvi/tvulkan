/* 
 * Union distributes over intersection
 * S1 ꓴ ( S2 ꓵ S3 ) = ( S1 ꓴ S2 ) ꓵ ( S1 ꓴ S3)
 */
unsigned long long int unionDistributionOverIntersection(unsigned long long int S1, unsigned long long int S2, unsigned long long S3){
  return intersectionOfTwoSets(unionOfTwoSets(S1, S2), unionOfTwoSets(S1, S3)); 
}
