

add_executable(SystemcDmbTest
  ${CMAKE_CURRENT_SOURCE_DIR}/dmg_bus.test.cpp
)


target_link_libraries(SystemcDmbTest
  gtest_main
  gtest
  SystemcDmgLib
)
