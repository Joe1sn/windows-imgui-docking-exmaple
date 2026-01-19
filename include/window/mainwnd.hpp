#pragma once
#include <iostream>
#include <vector>

#include "extern/ImGui/imgui.h"
#include "include/datatype/node.hpp"
using namespace DataType;

namespace MainWnd
{
    inline bool init;
    inline bool mainWndOpen = true;
    bool show();
}
