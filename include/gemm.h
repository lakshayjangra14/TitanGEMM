#pragma once
#include <cuda_runtime.h>
#include <cstdint>

// just to save time
usingf32 = float;
using u32 = unsigned int;

//CUDA error check
#define CUDA_CHECK(call) do {
cudaError_t err = (call);
if(err != cudaSuccess){
  fprintf(stderr, "CUDA ERROR %s:%d: %s\n",
      __FILE__, __LINE__, cudaGetErrorString(err));
  exit(EXIT_FAILURE);
}
} while(0)

// Matrix descriptor

struct Matrix {
  f32 *ptr;   // device pointer
  int rows;
  int cols;
  int ld;     // leading dimension (cols)

};
