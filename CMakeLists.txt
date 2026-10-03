cmake_minimum_required(VERSION 3.16)

project(Custos-Turris-Engine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(Custos-Turris-Engine
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

add_subdirectory(engine)

target_link_libraries(Custos-Turris-Engine
    PRIVATE
        Qt${QT_VERSION_MAJOR}::Widgets
        Custos-Turris-Engine-Raylib
)

set_target_properties(Custos-Turris-Engine PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Custos-Turris-Engine
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_subdirectory(tools/MapEditor/MapEditor)
add_subdirectory(tools/EnemyEditor/EnemyEditor)
add_subdirectory(tools/TowerEditor/TowerEditor)
add_subdirectory(tools/WaveEditor/WaveEditor)