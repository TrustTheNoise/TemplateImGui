#define STB_IMAGE_IMPLEMENTATION
#include "App.h"
#include "../../ImGui/glfw3.h"
#include "../../ImGui/imgui.h"

namespace MyApp {
    void RenderUI()
    {
        ImGui::Begin("Settigns", nullptr,
                     ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove);

        ImGui::End();
    }
} // namespace MyApp
