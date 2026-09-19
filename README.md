# Learning C++ Repository 🚀

A comprehensive collection of C++ practice scripts, tutorials, and mini-projects ranging from fundamental syntax and object-oriented programming to advanced file manipulation and parallel computing (`mpi.h`)[cite: 2].

---

## 📂 Repository Structure

```text
Learning-C++/
│
├── Tutorial/                # Beginner tutorials (Hello World, constants, inputs, namespaces)
├── Practice/                # General practice files (classes, pointers, file reading/writing)
├── Learn/                   # File system operations & MPI basics (copying, moving, deleting, creating folders/files)
├── Heavy/                   # Advanced matrix and vector mathematical operations
├── Night/                   # Custom data structures and algorithmic implementations (e.g., stack)
├── OneDay/                  # Command line arguments and type conversion examples
├── Orange/                  # Data collection and list manipulation scripts
├── Test.cpp                 # Sandbox testing file
└── Practice.cpp             # General practice entry file
```

📚 Topics Covered
Basics & Tutorials: Namespaces, constant values, user inputs, and basic arithmetic functions (Tutorial/).
1. Object-Oriented Programming (OOP) & Pointers: Class definitions, object instantiation, and memory pointers (Practice/).
2. File System Operations: Programmatic file and folder management (copy, move, delete, rename, append) using standard C++ streams (Learn/).
3. Advanced Math & Vectors: Matrix and vector operations (Heavy/).
4. Data Structures: Stack implementation and custom logic (Night/).
5. Parallel Computing: Basic MPI implementation (Learn/basic_mpi_program.cpp).

⚙️ Compilation and Execution Guide
To compile and run any C++ file in this repository, ensure you have a C++ compiler installed (such as g++ via GCC/MinGW or Clang).

🖥️ Windows (Command Prompt / PowerShell)
Compile a file:

```DOS
g++ -o program_name folder_name/file_name.cpp
```
Example:

```DOS
g++ -o hello Tutorial/hello_world.cpp
```

Run the compiled executable:
```DOS
.\program_name.exe
```
Example:

```DOS
.\hello.exe
```

🐧 Linux / macOS (Terminal)
Compile a file:

```Bash
g++ -std=c++17 -o program_name folder_name/file_name.cpp
```
Example:

```Bash
g++ -std=c++17 -o hello Tutorial/hello_world.cpp
```
Run the compiled executable:

```Bash
./program_name
```
Example:

```Bash
./hello
```

🌐 Running the MPI Program (basic_mpi_program.cpp)
For the MPI parallel computing script located in the Learn/ directory, compile and run using an MPI wrapper like mpicxx and mpirun:

Bash
# Compile
```
mpicxx -o mpi_prog Learn/basic_mpi_program.cpp
```

# Run with multiple processes (e.g., 4 processes)
```
mpirun -np 4 ./mpi_prog
```
