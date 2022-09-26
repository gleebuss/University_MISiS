add_library(queuep queuep.cpp)
add_executable(test queuep_test.cpp)

target_link_libraries(test queuep)