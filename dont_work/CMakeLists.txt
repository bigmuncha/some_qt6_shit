cmake_minimum_required(VERSION 3.16)
project(analog LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
list(APPEND CMAKE_PREFIX_PATH "/home/omar/qt6-lib")

find_package(Qt6 PATHS /home/omar/qt6-lib REQUIRED COMPONENTS Widgets Core Gui)

qt_add_executable(${PROJECT_NAME}
    main.cpp 
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)

