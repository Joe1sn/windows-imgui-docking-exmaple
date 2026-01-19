#include "include/window/mainwnd.hpp"

namespace MainWnd
{

    bool show() {
        if (MainWnd::mainWndOpen) {
            ImGuiIO& io = ImGui::GetIO();
            ImGui::Begin("imgui-docking test", &MainWnd::mainWndOpen);

            ImGui::Text("This is some useful text.");          // Display some text (you can use a format strings too)
            ImGui::Text("你好，世界。");          // Display some text (you can use a format strings too)

            ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
            ImGui::End();
            return true;
        }
        else {
            return false;
        }
    }

} // namespace MainWnd
