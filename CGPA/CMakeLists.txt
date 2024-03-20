include_directories(include src)
set(SOURCE_DIR src)
set(SOURCE_FILE 
    ${SOURCE_DIR}/cgpaInfor.cpp
    ${SOURCE_DIR}/cgpaCalculator.cpp
    ${SOURCE_DIR}/FunctionalController.cpp
)

add_executable(cgpa main.cpp ${SOURCE_FILE})