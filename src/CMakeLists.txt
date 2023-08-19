
add_executable(SystemcDmg
    main.cpp
)

target_link_libraries(SystemcDmg
    SystemcDmgLib
)


add_library(SystemcDmgLib
    ${CMAKE_CURRENT_SOURCE_DIR}/bus.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/bus.h
)

target_link_libraries(SystemcDmgLib
    PUBLIC SystemC::systemc
)

target_include_directories(SystemcDmgLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
