/* 
 * Intersection distributes over union
 * S1 ꓵ ( S2 ꓴ S3 ) = ( S1 ꓵ S2 ) ꓴ ( S1 ꓵ S3)
 */
unsigned long long int intersectionDistributionOverUnion(unsigned long long int S1, unsigned long long int S2, unsigned long long S3){
  return unionOfTwoSets(intersectionOfTwoSets(S1, S2), intersectionOfTwoSets(S1, S3)); 
}
