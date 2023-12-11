
set(DRAWMKI_HEADERS
    drawmki/drawmki.h
    drawmki/window.h
    glad/gl.h
    KHR/khrplatform.h
)

list(TRANSFORM DRAWMKI_HEADERS PREPEND ../include/)

add_library(drawmki 
    gl.c
    window.cpp
    ${DRAWMKI_HEADERS}
)
target_include_directories(drawmki PUBLIC
    ../include
)
target_link_libraries(drawmki PUBLIC glfw3)
