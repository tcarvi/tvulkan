#include "sets.h"
#include "common.h"
#include "unionOfTwoSets.c"
#include "intersectionOfTwoSets.c"
#include "intersectionDistributionOverUnion.c"
#include "unionDistributionOverIntersection.c"
#include "differenceOfSets.c"
#include "elementsBelongToSet.c"
#include "equalityOfSets.c"

/*
 * Presents Basic Set Theory
 * Symbols
   ℕℝℚ℞ℏℎℂ⅀←→↔↦↤⇍⇏⇎⇒⇔⇐∅∄∃∀≠∑∗∞∫∬∭∮∯∰∴≅≝
   = ≠
   ≤ ≥
   ꓴ ꓵ
   ᴠ ᴧ
   𝈶 𝈷
   ᴇ 𝈨
   ᴈ
   ∈ ∉ ∌
   ⊂ ⊃ ⊄ ⊅
   𐅼
   ϕ
   Σ
   Δ
 */
int main(void) {

  A = 1ULL;
  B = 2ULL;
  C = 4ULL;
  D = 8ULL;
  E = 16ULL;
  F = 32ULL;
  G = 64ULL;
  H = 128ULL;
  I = 256ULL;
  J = 512ULL;
  K = 1024ULL;
  L = 2048ULL;
  M = 4096ULL;

  printf("\n");
  printf("SET OPERATION: EQUALITY\n");
  printf("OPERATION: Two sets are equal if and only if they have exactly the same elements.\n");
  printf("S1 = A U B =  %llu \n", unionOfTwoSets(A, B));
  printf("S2 = {1, 2} =  %llu \n", unionOfTwoSets(A, B));
  printf("( S1 == S2 ) is %d\n", setIsEqualToSet(unionOfTwoSets(A, B), A+B)); 
  printf("-- * --\n");

  printf("\n");
  printf("SET OPERATION: ELEMENTHOOD\n");
  printf("Operation: Elements belong to a set if they are elements of this set\n");
  printf("E =  %llu \n", A+C);
  printf("S =  %llu \n", A+B+C);
  printf("E belongs to S ? Answer is %d \n", elementsBelongToSet(A+C, A+B+C));
  printf("-- * --\n");

  printf("-- * --\n");
  printf("SET OPERATION: UNION\n");
  printf("Property: Existence of identity element for Union Operation (the empty set)\n");
  printf("ø =  %llu \n", emptySet);
  printf("A =  %llu \n", A);
  printf("ø U A =  %llu \n", unionOfTwoSets(emptySet, A));
  printf("-- * --\n");
  
  printf("-- * --\n");
  printf("SET OPERATION: UNION\n");
  printf("Property: ASSOCIATIVE PROPERTY\n");
  printf("A =  %llu \n", A);
  printf("B =  %llu \n", B);
  printf("C =  %llu \n", C);
  printf("(A U B ) U C =  %llu \n", unionOfTwoSets( unionOfTwoSets(A, B), C) );
  printf("A U ( B U C ) =  %llu \n", unionOfTwoSets( A, unionOfTwoSets(B, C)) );
  printf("-- * --\n");
  
  printf("-- * --\n");
  printf("SET OPERATION: UNION\n");
  printf("Property: COMMUTATIVE PROPERTY\n");
  printf("B =  %llu \n", B);
  printf("C =  %llu \n", C);
  printf("B U C =  %llu \n", unionOfTwoSets(B, C));
  printf("C U B =  %llu \n", unionOfTwoSets(C, B));
  printf("-- * --\n");

  printf("-- * --\n");
  printf("SET OPERATION: INTERSECTION DISTRIBUTION OVER UNIO\n");
  printf("Property: Intersection Distribution over Union\n");
  printf("D =  %llu \n", D);
  printf("E =  %llu \n", E);
  printf("F =  %llu \n", F);
  printf("D intersection ( E U F) =  %llu \n", intersectionDistributionOverUnion(D, E, F));
  printf("-- * --\n");

  printf("-- * --\n");
  printf("SET OPERATION: UNION DISTRIBUTION OVER INTERSECTION\n");
  printf("Property: Union Distribution over Intersection\n");
  printf("D =  %llu \n", D);
  printf("E =  %llu \n", E);
  printf("F =  %llu \n", F);
  printf("D U ( E intersection F) =  %llu \n", unionDistributionOverIntersection(D, E, F));
  printf("-- * --\n");

  printf("-- * --\n");
  printf("SET OPERATION: DIFFERENCE OR COMPLEMENT\n");
  printf("Operation: Difference of sets\n");
  printf("S2 =  %llu \n", A+C+D);
  printf("S1 =  %llu \n", A+B+C);
  printf("Difference between S1 and S2 = S2 - S1 =  %llu \n", set2MinusSet1(A+C+D, A+B+C));
  printf("-- * --\n");

  return 0;
  
}

// to compile
// gcc -o unionScript fileName.c 
