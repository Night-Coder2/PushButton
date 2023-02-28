set(PUSHBUTTON_LIB .)

add_library(PushButton
        PushButton.cpp
        )

target_include_directories(PushButton PUBLIC
        ${PUSHBUTTON_LIB}
        ${PUSHBUTTON_LIB}/include
        )

target_link_libraries(PushButton pico_stdlib Millis)