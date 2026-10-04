#include <raylib.h>
#include <string>

// ================================================
// Include the necessary headers for custom features
// ================================================
#include "input.h"
#include "../rendering/renderer.h"
// =================================================
// End of includes
// ================================================

void CTEInput::checkKey(const int checkKey) {
    CTERenderer inputRender;
    switch (checkKey) {
        case KEY_K:
            if (IsKeyPressed(KEY_K)){
                CTERenderer abortKey;
                abortKey.abort();
            }
        default:
            break;
    }
}

// void CTEInput::renderKey(const std::string& renderKey) {
//     DrawText("Yui ", 0, 0, 20, BLACK);
// }

// ================================================
// This is proof of my stupidity:
// ===============================================
// std::string CTEInput::setKeys(std::string inKey, std::string outKey) {
//     switch (inKey[0]) {
//         case 'Q':
//             outKey = "KEY_Q";
//             break;
//         case 'W':
//             outKey = "KEY_W";
//             break;
//         case 'E':
//             outKey = "KEY_E";
//             break;
//         case 'R':
//             outKey = "KEY_R";
//             break;
//         case 'T':
//             outKey = "KEY_T";
//             break;
//         case 'Y':
//             outKey = "KEY_Y";
//             break;
//         case 'U':
//             outKey = "KEY_U";
//             break;
//         case 'I':
//             outKey = "KEY_I";
//             break;
//         case 'O':
//             outKey = "KEY_O";
//             break;
//         case 'P':
//             outKey = "KEY_P";
//             break;
//         default:
//             // Handle other keys or do nothing
//             break;
//     }
// return outKey;
// }
// ================================================

// void CTEInput::unloadKey(const int unloadKey) {
//     Renderer inputUnload;
//     if(IsKeyPressed(unloadKey)) {
//         inputUnload.UnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/.png");
//     }
// }