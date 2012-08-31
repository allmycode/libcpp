// Execution time measurer
#include <ctime>

class measurer {
  clock_t start;

public:
 measurer(): start(clock()) {}
  
  double seconds() {
    return (double)(clock() - start)/CLOCKS_PER_SEC;
  }
};
