# 你所使用的cmake的版本，这里写的不能大于已经安装的版本
cmake_minimum_required(VERSION 3.5.0)

# project只是代表这个项目的名字，可以随便取
project(helloworldp VERSION 0.1.0 LANGUAGES C CXX)

# 指定生成可执行程序的名字
add_executable(1-1 1-1.cpp)

include(CTest)
enable_testing()

