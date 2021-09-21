

target_sources(main
        PUBLIC
        gaz.cpp
        gaz.hpp)

target_include_directories(
        main
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)