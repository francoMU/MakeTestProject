

target_sources(
        main
        PUBLIC
        baz.cpp
        baz.hpp
        boo.cpp
        boo.hpp
        foo.cpp
        foo.hpp
        head.hpp
        main.cpp
)

target_include_directories(
        main
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_subdirectory(gaz)