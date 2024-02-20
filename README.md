# password_cracker
A Password Cracker based on Cricket Coding Challenge #49


## Design
Moduels involved:
1. A main program: that will take a hashed password and outputs the password.
2. A Rainbow program: that will generate pre-computed hashs
3. A CommonPassword program: that will fetch and search in the most common used passwords.


## Pre-requisite
1. openssl:x64-windows


## How to build the project
1. Generate a build file and compile
In the terminal in the project director, create a build director
```
mkdir build && cd build
```
2. Run CMake to generate build file by specifying path to the toolchain file `vcpkg`

NOTE: `vcpkg` is a c++ external library manager like `pip` for python

```
cmake .. -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
```

3. Build the project with CMake
```
cmake --build .
```

4. Run the program

NOTE: The program is located in build/Debug/

```
.\Debug\password_cracker.exe
```