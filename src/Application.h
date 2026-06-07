#pragma once
#include <raylib.h>

class Application
{
    public:
        void Run();

    private:
        void Init();
        void Update();
        void Render();
        void Shutdown();

        Camera3D camera{};
};