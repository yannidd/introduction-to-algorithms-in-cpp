add_executable(selection-sort-test
  selection_sort_test.cc
)
target_link_libraries(selection-sort-test
  helper
  gtest_main
  gtest
  selection-sort
)
# add_executable(example example.cpp)
# target_link_libraries(example gtest_main)
add_test(NAME example_test COMMAND selection-sort-test)