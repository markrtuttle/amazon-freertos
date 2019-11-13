project(HTTPS-Backend)
cmake_minimum_required(VERSION 3.11)

set(test_labels cbmc)

enable_testing()
add_subdirectory(tools/cbmc/proofs/HTTP/Backend)
