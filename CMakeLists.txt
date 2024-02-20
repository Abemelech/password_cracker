set(CMAKE_TOOLCHAIN_FILE=C:/Users/abeme/OneDrive/Documents/Coding/Projects/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "")

# Minimum version may vary based on your project's requirements
cmake_minimum_required(VERSION 3.0)
project(PasswordCracker)

find_package(OpenSSL REQUIRED)

# Add your source files here
add_executable(password_cracker main.cpp rainbow.cpp)
target_link_libraries(password_cracker PRIVATE OpenSSL::SSL OpenSSL::Crypto)

