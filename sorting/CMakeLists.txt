################################################################################
# bubble sort
################################################################################
add_library(bubble_sort INTERFACE
)
target_link_libraries(bubble_sort INTERFACE
  helper
)

################################################################################
# insertion sort
################################################################################
add_library(insertion_sort
  insertion_sort.cc
)
target_link_libraries(insertion_sort
  helper
)

################################################################################
# selection sort
################################################################################
add_library(selection_sort INTERFACE
)
target_link_libraries(selection_sort INTERFACE
  helper
)

################################################################################
# merge sort
################################################################################
add_library(merge_sort
  merge_sort.cc
)
target_link_libraries(merge_sort
  helper
)