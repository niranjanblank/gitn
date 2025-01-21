
# ngit

`ngit` is a simplified version of Git, built from scratch to understand and replicate basic Git functionalities. This project is designed as a learning tool to explore how Git works under the hood and implement core features incrementally.

---

## Features

- **Initialization**: Create a `.git` directory structure with essential subdirectories and files.
- **Modular Codebase**: Organized using Object-Oriented Programming principles, with each class in its own file for better readability and scalability.
- **C++23 Standards**: Modern C++ features for clean, efficient, and maintainable code.

---

## Directory Structure

```
ngit/
├── CMakeLists.txt          # CMake configuration file
├── src/                    # Source files
│   ├── main.cpp            # Entry point
│   ├── GitRepository.cpp   # Implementation for repository logic
│   └── GitCommandHandler.cpp # Command handling logic
├── include/                # Header files
│   ├── GitRepository.h     # Declaration for GitRepository class
│   └── GitCommandHandler.h # Declaration for GitCommandHandler class
├── build/                  # Build directory (generated files)
```

---

## Getting Started

### Prerequisites

- **Compiler**: Ensure you have a modern C++23-compatible compiler:
  - GCC 11+
  - Clang 13+
  - MSVC with appropriate flags
- **CMake**: Version 3.10 or higher.

### Building the Project

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ngit.git
   cd ngit
   ```

2. Create a build directory and navigate to it:
   ```bash
   mkdir build
   cd build
   ```

3. Generate the build files with CMake:
   ```bash
   cmake ..
   ```

4. Build the project:
   ```bash
   cmake --build .
   ```

### Running the Application

1. Navigate to the `build\Debug` directory:
   ```bash
   cd build\Debug
   ```

2. Run the executable:
   ```bash
   ./gitn init
   ```

---

## Roadmap

Planned features for future development:

- `init`: Initialize a new repository.
- `add`: Stage files for commit.
- `commit`: Record changes to the repository.
- `log`: View commit history.
- `branch`: Manage branches.
- `merge`: Merge branches.
- `status`: Display the state of the working directory and staging area.


