#include <raylib.h>

int main()
{
    InitWindow(1280, 720, "DSEngine");

    Camera3D camera = { 0 };
    camera.position = { 5.0f, 5.0f, 5.0f };
    camera.target = { 0.0f, 0.0f, 0.0f };
    camera.up = { 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        UpdateCamera(&camera, CAMERA_FREE);

        BeginDrawing();

        ClearBackground(RAYWHITE);

        BeginMode3D(camera);

        DrawGrid(20, 1.0f);
        DrawCube({0, 0.5f, 0}, 1, 1, 1, RED);

        EndMode3D();

        DrawText("DSEngine", 20, 20, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}