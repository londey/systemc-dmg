
add_executable(SystemcDmg
    main.cpp
)

target_link_libraries(SystemcDmg
    SystemcDmgLib
)

file(GLOB_RECURSE DMG_SOURCES "dmg_*.cpp" "dmg_*.hpp")

add_library(SystemcDmgLib
    ${DMG_SOURCES}
)

target_link_libraries(SystemcDmgLib
    PUBLIC SystemC::systemc
)

target_include_directories(SystemcDmgLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
