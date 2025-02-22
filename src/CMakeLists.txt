# Modify the location of the executable output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})


# Target: terraneko
add_executable(terraneko
    main.cc

    field/field.cc

    meta/assert.cc
    meta/boot.cc
    meta/modal.cc
    meta/winfunc.cc

    models/config.cc
)
target_compile_features(terraneko PUBLIC cxx_std_23)
target_include_directories(terraneko
    PUBLIC
        ${PATH_TO_SDL2}/include
        ${PROJECT_SOURCE_DIR}/src
)
target_link_directories(terraneko PUBLIC ${PATH_TO_SDL2}/lib)
target_link_libraries(terraneko PUBLIC ${SDL2_LIBS})
