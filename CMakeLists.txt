cmake_minimum_required(VERSION 3.10)
project(MultiExecutableProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR})

# Add source files for tshirt tests
set(tShirtTest_src
    #tests/tshirtsTests.cpp
    tshirts.cpp
)

# Add source files for color map misaligned tests
set(misalignedTest_src
    #tests/misalignedTests.cpp
    misaligned.cpp
)

# Add source files for weather report tests
set(weatherReportTests_src
    #tests/weatherReportTests.cpp
    tests/sensorStub.cpp
    weatherReport.cpp
)

# Create executable for tshirt tests
add_executable(tShirtTest ${tShirtTest_src})

# Create executable for color misaligned tests
add_executable(misalignedTest ${misalignedTest_src})

# Create executable for color weather tests
add_executable(weatherReportTests ${weatherReportTests_src})

# Optionally, if you want to link libraries or add additional settings for app1
# target_link_libraries(app1 some_library)
# target_include_directories(app1 PRIVATE include)

# Optionally, if you want to link libraries or add additional settings for app2
# target_link_libraries(app2 some_other_library)
# target_include_directories(app2 PRIVATE include)
