

#include "utils.h"
#include "common.h"


int main()
{
  std::vector<int> ord = random_permutation_generator_sorting(6);
  std::vector<int>::iterator it;
  for(it=ord.begin();it!=ord.end();it++)
  {
    PRINT("id=%d", *it);
  }
  return 0;
}
