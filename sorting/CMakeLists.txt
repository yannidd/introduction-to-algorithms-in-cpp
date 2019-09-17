add_executable(insertion-sort-test 
  insertion_sort_test.cc 
  insertion_sort.cc
)
target_link_libraries(insertion-sort-test
  helper
)

add_library(selection-sort
  selection_sort.cc
)
target_link_libraries(selection-sort
  helper
)

add_executable(merge-sort-test
  merge_sort_test.cc
  merge_sort.cc
)
target_link_libraries(merge-sort-test
  helper
)