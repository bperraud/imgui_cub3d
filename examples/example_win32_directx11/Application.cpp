#include "Application.h"
#include "imgui.h"

namespace MyApp {

    void RenderUI()
    {
        ImGui::Begin("Settings");
        ImGui::Button("Hello");
        ImGui::End();
    }
}

