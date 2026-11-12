#include "include/raylib.h"
#include <stdio.h>

int main(){

    InitWindow(800, 600, "Fighting Game"); 

    // load image files
    Image background_img = LoadImage("assets/images/images/background/background.jpg");


    // resize img files
    ImageResize(&background_img, (background_img.width / 2.4), (1080 / 1.8));


    //load textures
    Texture2D background_img_texture = LoadTextureFromImage(background_img);
    

    while (!WindowShouldClose()){


        BeginDrawing();
        // draw here
        ClearBackground(WHITE); 
        DrawTexture(background_img_texture, 0, 0, WHITE);



        EndDrawing();
    }
    UnloadTexture(background_img_texture);
    CloseWindow();
    printf("%d\n",background_img_texture.width);

    return 0;
}
