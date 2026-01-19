#pragma once
#include "extern/ImGui/imgui.h"

namespace DataType
{
    struct Node {
        int id;
        ImVec2 pos;
        float radius = 20.0f;
    };

    struct Edge {
        int from;
        int to;
    };
    constexpr int MAX_NODES = 64;
} // namespace DataType
