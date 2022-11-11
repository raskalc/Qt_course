cmake_minimum_required(VERSION 3.23)

project(Qt VERSION 0.1 LANGUAGES CXX)
include(ExternalProject)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


# standart cpp
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


########## Сурсы
set(PROJECT_SOURCES
        Qt.cpp
        app.cpp
        app.h
        app.ui
        widget.cpp
        widget.cpp
        )
### jsoncpp add from github
ExternalProject_Add(jsoncpp
        GIT_REPOSITORY    https://github.com/open-source-parsers/jsoncpp.git
        GIT_TAG           origin/master
        LOG_DOWNLOAD      true
        CMAKE_ARGS        "-DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF -G 'Unix Makefiles'"
        INSTALL_COMMAND   ""
        )



ExternalProject_Get_property(jsoncpp INSTALL_DIR)


######### Подключение Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

qt_add_executable(Qt
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES})

target_link_libraries(Qt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets )

set_target_properties(Qt PROPERTIES
        WIN32_EXECUTABLE TRUE
        )
install(TARGETS Qt
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

qt_finalize_executable(Qt)
target_link_libraries(Qt PUBLIC Qt${QT_VERSION_MAJOR}::Widgets -static)



target_include_directories(Qt PRIVATE ${INSTALL_DIR}/src/jsoncpp/include)

######### Тестовая конфигурация запуска
set(PROJECT_SOURCES_test
        test.cpp)

add_executable(Test
        ${PROJECT_SOURCES_test})
