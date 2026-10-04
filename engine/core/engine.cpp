#include <raylib.h>

// ================================================
// Include the necessary headers for custom features
// ================================================
#include "engine.h"
#include "../rendering/renderer.h"
#include "../input/input.h"
// =================================================
// End of includes 
// ================================================

void CTEEngine::mainEngineLoop() {
    while (0 == 0) {
        CTEInput inputCheckMainEngineLoop;
        inputCheckMainEngineLoop.checkKey(KEY_K);
    }
}

void CTEEngine::initialize() {
    CTERenderer RendererInit;
    RendererInit.UpdateFrame();
}
