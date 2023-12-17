// written as per given by GPT
#include <raylib.h>

int main() {
    // Initialize the game window
    InitWindow(800, 600, "Simple Game");

    // Set up box and rectangle positions
    Rectangle box = { 100, 300, 50, 50 };
    Rectangle rectangle = { 400, 0, 50, 100 };
    
    bool gameover = false;

    SetTargetFPS(60); // Set the frame rate

    while (!WindowShouldClose() && !gameover) {
        // Update
        if (IsKeyDown(KEY_D)) {
            box.x += 5; // Move box to the right
        }
        if (IsKeyDown(KEY_A)) {
            box.x -= 5; // Move box to the left
        }
        if (IsKeyDown(KEY_W)){
            box.y -= 5; // move box upwards
        }
        if (IsKeyDown(KEY_S)){
            box.y += 5; // move box upwards
        }

        // Move the rectangle up and down
        rectangle.y += 2;
        if (rectangle.y > GetScreenHeight()) {
            rectangle.y = -rectangle.height;
        }

        // Check for collision between box and rectangle
        if (CheckCollisionRecs(box, rectangle)) {
            gameover = true;
        }

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleRec(box, RED);
        DrawRectangleRec(rectangle, BLUE);
        if (gameover) {
            DrawText("Game Over", 320, 250, 36, DARKGRAY);
        }
        EndDrawing();

    }
   
    CloseWindow();
    return 0;
}

// // written as per main.cpp axegame file (matched format, no change in logic)
// #include <raylib.h>

// int main() {
//     // Initialize the game window
//     InitWindow(800, 600, "Simple Game");

//     // Set up box and rectangle positions
//     Rectangle box = { 100, 300, 50, 50 };
//     Rectangle rectangle = { 400, 0, 50, 100 };
    
//     bool gameover = false;

//     SetTargetFPS(60); // Set the frame rate

//     while (!WindowShouldClose() && !gameover) {

//         // Draw
//         BeginDrawing();
//         ClearBackground(RAYWHITE);

//         // Check for collision between box and rectangle
//         if (CheckCollisionRecs(box, rectangle)) {
//             gameover = true;
//         }

//         DrawRectangleRec(box, RED);
//         DrawRectangleRec(rectangle, BLUE);
//         if (gameover) {
//             DrawText("Game Over", 320, 250, 36, DARKGRAY);
//         }

//         // Move the rectangle up and down
//         rectangle.y += 2;
//         if (rectangle.y > GetScreenHeight()) {
//             rectangle.y = -rectangle.height;
//         }
//         // Update
//         if (IsKeyDown(KEY_D)) {
//             box.x += 5; // Move box to the right
//         }
//         if (IsKeyDown(KEY_A)) {
//             box.x -= 5; // Move box to the left
//         }
//         if (IsKeyDown(KEY_W)){
//             box.y -= 5; // move box upwards
//         }
//         if (IsKeyDown(KEY_S)){
//             box.y += 5; // move box upwards
//         }        

//         EndDrawing();
//     }
   
//     CloseWindow();
//     return 0;
// }

// // written as per main.cpp axegame file with adjustment in if-else loop
// #include <raylib.h>

// int main() {
//     // Initialize the game window
//     InitWindow(800, 600, "Simple Game");

//     // Set up box and rectangle positions
//     Rectangle box = { 100, 300, 50, 50 };
//     Rectangle rectangle = { 400, 0, 50, 100 };
    
//     bool gameover = false;

//     SetTargetFPS(60); // Set the frame rate

//     while (!WindowShouldClose() && !gameover) {

//         // Draw
//         BeginDrawing();
//         ClearBackground(RAYWHITE);

//         // Check for collision between box and rectangle
//         if (CheckCollisionRecs(box, rectangle)) {
//             gameover = true;
//             DrawRectangleRec(box, RED);
//             DrawRectangleRec(rectangle, BLUE);
//         if (gameover) {
//             DrawText("Game Over", 320, 250, 36, DARKGRAY);
//         }
//         }

//         else{
//              // Move the rectangle up and down
//         rectangle.y += 2;
//         if (rectangle.y > GetScreenHeight()) {
//             rectangle.y = -rectangle.height;
//         }
//         // Update
//         if (IsKeyDown(KEY_D)) {
//             box.x += 5; // Move box to the right
//         }
//         if (IsKeyDown(KEY_A)) {
//             box.x -= 5; // Move box to the left
//         }
//         if (IsKeyDown(KEY_W)){
//             box.y -= 5; // move box upwards
//         }
//         if (IsKeyDown(KEY_S)){
//             box.y += 5; // move box upwards
//         } 
//         }             

//         EndDrawing();
//     }
   
//     CloseWindow();
//     return 0;
// }