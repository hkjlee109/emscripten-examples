#include <emscripten/bind.h>

float lerp(float a, float b, float t) 
{
    return (1 - t) * a + t * b;
}

EMSCRIPTEN_BINDINGS(basic) 
{
    emscripten::function("lerp", &lerp);
}
