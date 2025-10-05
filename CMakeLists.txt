cmake_minimum_required(VERSION 3.19)
project(Humidity LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Charts Gui SerialBus SerialPort Network Sql)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(Humidity
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    image.qrc
    deb.h deb.cpp deb.ui
    sql.h sql.cpp sql.ui
    mymodbus.h mymodbus.cpp mymodbus.ui
    networkwork.h networkwork.cpp
    sqlitework.h sqlitework.cpp
    myserials.h myserials.cpp myserials.ui
    myserialwork.h myserialwork.cpp
    mymodbuswork.h mymodbuswork.cpp
    ModbusSettings.h
    login.h login.cpp login.ui
    loginIDandPassword.h




)

target_link_libraries(Humidity
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::Charts
        Qt::Gui
        Qt::SerialBus
        Qt::SerialPort
        Qt::Network
        Qt::Sql
)
target_link_libraries(Humidity PRIVATE Qt6::Core)
target_link_libraries(Humidity PRIVATE Qt6::Core)
target_link_libraries(Humidity PRIVATE Qt6::Core)
target_link_libraries(Humidity PRIVATE Qt6::Core)
target_link_libraries(Humidity PRIVATE Qt6::Core)
target_link_libraries(Humidity PRIVATE Qt6::Core)

include(GNUInstallDirs)

install(TARGETS Humidity
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Humidity
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
