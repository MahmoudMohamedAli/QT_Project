cmake_minimum_required(VERSION 3.16)

project(Songplayer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)
find_package(Qt6 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appSongplayer
    main.cpp
    PlayerController.cpp
    PlayerController.h
)

qt_add_qml_module(appSongplayer
    URI Songplayer
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES ImageButton.qml
        QML_FILES AudioInfoBox.qml

    RESOURCES
        assets/images/song1.jpg
        assets/images/song2.jpg
        assets/images/song3.jpg

        assets/icons/app_icon.ico
        assets/icons/next_icon.png
        assets/icons/previous_icon.png
        assets/icons/play_icon.png
        assets/icons/pause_icon.png

        assets/videos/video_1.avi
        SOURCES PlayerController.h PlayerController.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appSongplayer PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appSongplayer
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appSongplayer
    PRIVATE Qt6::Quick
)
target_link_libraries(appSongplayer PRIVATE Qt6::Core)

include(GNUInstallDirs)
install(TARGETS appSongplayer
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
