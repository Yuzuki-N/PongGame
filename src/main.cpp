#include <vulkan/vulkan.h>

#include <iostream>
int main()
{

    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "Pong";
    appInfo.pEngineName = "Ponggine";

    VkInstanceCreateInfo instanceInfo{};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    VkInstance instance;

    VkResult result = vkCreateInstance(&instanceInfo, nullptr, &instance);
    if (result == VK_SUCCESS)
    {
        std::cout << "success\n";
    }
    else
    {
        std::cout << "failed to create instance\n";
    }
}