set(LED_CPP_CLASS .)

add_library(PushButton
        PushButton.cpp
        )

target_include_directories(PushButton PUBLIC
        ${LED_CPP_CLASS}
        ${LED_CPP_CLASS}/include
        )

target_link_libraries(PushButton pico_stdlib)