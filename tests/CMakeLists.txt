add_executable(sorting_test
  sorting_test.cc
)
target_link_libraries(sorting_test
  insertion_sort
  merge_sort
  selection_sort
  gtest_main
  gtest
)
add_test(NAME _sorting_test COMMAND sorting_test)