project(codeforces)
set(CMAKE_CXX_STANDARD 20)
cmake_minimum_required(VERSION 3.16)

SET(CONTEST_NO "693_3")
SET(PROBLEM_NO "F")
SET(CODE_NO "1")

file(GLOB files "${CONTEST_NO}/${PROBLEM_NO}/*_${CODE_NO}.cpp")
add_executable(codeforces ${files})