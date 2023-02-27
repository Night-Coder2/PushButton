set(PUSHBUTTON .)

add_library(PushButton
        PushButton.cpp
        )

target_include_directories(PushButton PUBLIC
        ${PUSHBUTTON}
        ${PUSHBUTTON}/include
        )

target_link_libraries(PushButton pico_stdlib Millis)