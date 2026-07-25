#include <mpi.h>
#include <cstdio>

int main(int argc, char** argv) {
  // 1. Initialize the MPI environment
  MPI_Init(&argc, &argv);

  int size = 0;
  int rank = 0;

  // 2. Get the total number of processes and current process rank
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  // 3. Validation check
  if (size > 4 || size <= 0) {
    // Guard error message so only rank 0 prints it
    if (rank == 0) {
      std::printf("Error: Insufficient or invalid processes (size: %d). Required: 1-4.\n", size);
    }
    
    // All processes must call Finalize before returning
    MPI_Finalize();
    return 1;
  }

  // Guard output so only Process 0 prints the overall process count
  if (rank == 0) {
    std::printf("Number of processes: %d\n", size);
  }

  // Work done by all individual ranks can happen here...
  // std::printf("Process rank %d of %d is active.\n", rank, size);

  // 4. Clean up and finalize MPI runtime across all processes
  MPI_Finalize();
  return 0;
}