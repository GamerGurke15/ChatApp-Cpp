link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp FrmMain.cpp FrmMain.h)
add_executable(ChatApp_Cpp ${SOURCE_FILES})
file(COPY glade DESTINATION .)

target_link_libraries(ChatApp_Cpp ${GTKMM_LIBRARIES})