#include "raylib.h"
#include <iostream>

int main(void){
    const int screenWidth = 600;
    const int screenHeight = 400;

    InitWindow(screenWidth, screenHeight, "My First Raylib Game");
    SetTargetFPS(60);

    while(!WindowShouldClose()){

        BeginDrawing();
            ClearBackground(WHITE);
            DrawText("OMG I DID IT", 100, 100, 50, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}