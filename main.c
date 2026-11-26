#include "raylib.h"

int main(void)
{
    // Window settings
    const int Window_width = 600;
    const int Window_height = 800;

    InitWindow(Window_width, Window_height, "Modified Tetris");
    SetTargetFPS(60);

    // Grid settings
    const int Rows = 20;
    const int Columns = 10;
    const int Cell_size = 30;

    // Grid position
    const int Grid_x = 150;
    const int Grid_y = 100;

    // Game grid
    int Grid[20][10] = {0};

    // Main game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        // Draw grid
        for (int Row = 0; Row < Rows; Row++)
        {
            for (int Column = 0; Column < Columns; Column++)
            {
                DrawRectangle(
                    Grid_x + (Column * Cell_size),
                    Grid_y + (Row * Cell_size),
                    Cell_size,
                    Cell_size,
                    DARKGRAY
                );

                DrawRectangleLines(
                    Grid_x + (Column * Cell_size),
                    Grid_y + (Row * Cell_size),
                    Cell_size,
                    Cell_size,
                    GRAY
                );
            }
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

