#include "gemm.h"
#include <cstdio>
#include <cstdlib>
#include <random>
#include <chrono>
#include <cmath>
#include <vector>

// Host matrix for reference/correctness (row-major)

struct HMatrix {
  std::vector<f32> data;
  int rows,cols;
  HMatrix(int r = 0;int c = 0):data(r*c),rows(r),cols(c){}
  f32* ptr(){return data.data();}
  int ld() const {return cols; }
};

static 
