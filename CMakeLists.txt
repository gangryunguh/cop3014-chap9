cmake_minimum_required(VERSION 3.10)
project(chap9)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/Pr9-1.cpp app/Pr9-2.cpp app/Pr9-3.cpp
        app/Pr9-4.cpp app/Pr9-5.cpp app/Pr9-6.cpp
        app/Pr9-7.cpp app/Pr9-8.cpp app/Pr9-9.cpp
        app/Pr9-10.cpp app/Pr9-11.cpp app/Pr9-12.cpp
        app/Pr9-13.cpp app/Pr9-14.cpp app/Pr9-15.cpp
        app/Pr9-16.cpp app/Pr9-17.cpp app/Pr9-18.cpp
        app/Pr9-19.cpp)

add_executable(Pr9-1.exe app/Pr9-1.cpp )
add_executable(Pr9-2.exe app/Pr9-2.cpp)
add_executable(Pr9-3.exe app/Pr9-3.cpp)
add_executable(Pr9-4.exe app/Pr9-4.cpp)
add_executable(Pr9-5.exe app/Pr9-5.cpp)
add_executable(Pr9-6.exe app/Pr9-6.cpp)
add_executable(Pr9-7.exe app/Pr9-7.cpp)
add_executable(Pr9-8.exe app/Pr9-8.cpp)
add_executable(Pr9-9.exe app/Pr9-1.cpp )
add_executable(Pr9-10.exe app/Pr9-2.cpp)
add_executable(Pr9-11.exe app/Pr9-3.cpp)
add_executable(Pr9-12.exe app/Pr9-4.cpp)
add_executable(Pr9-13.exe app/Pr9-5.cpp)
add_executable(Pr9-14.exe app/Pr9-6.cpp)
add_executable(Pr9-15.exe app/Pr9-7.cpp)
add_executable(Pr9-16.exe app/Pr9-8.cpp)
add_executable(Pr9-17.exe app/Pr9-6.cpp)
add_executable(Pr9-18.exe app/Pr9-7.cpp)
add_executable(Pr9-19.exe app/Pr9-8.cpp)

if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    if (WIN32)
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#    else()
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
#    endif()
#endif()