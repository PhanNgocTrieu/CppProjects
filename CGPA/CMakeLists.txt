include_directories(include src)
include_directories(data)
set(SOURCE_DIR src)
set(SOURCE_FILE 
    ${SOURCE_DIR}/cgpaInfor.cpp
    ${SOURCE_DIR}/cgpaCalculator.cpp
    ${SOURCE_DIR}/FunctionalController.cpp
)
set(DATA_FILE data/input.txt)
add_executable(cgpa main.cpp ${SOURCE_FILE} ${DATA_FILE})

add_custom_command(TARGET cgpa POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_CURRENT_LIST_DIR}/data  # CMAKE_CURRENT_LIST_DIR -> would be the reference to this current sub-folder
    ${PROJECT_BINARY_DIR}/data
    COMMENT "Copying data into binary directory"
)