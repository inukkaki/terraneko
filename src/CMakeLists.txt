# Modify the location of the executable output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

# Target: terraneko
add_executable(terraneko
    main.cc
)
target_compile_features(terraneko PUBLIC cxx_std_23)
