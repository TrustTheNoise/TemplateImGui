#define STB_IMAGE_IMPLEMENTATION
#include "../headers/App.h"
#include "../headers/glfw3.h"
#include "../headers/imgui.h"

namespace MyApp {
    void RenderUI()
    {
        ImGui::Begin("Settigns", nullptr,
                     ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove);

        ImGui::End();
    }
} // namespace MyApp
