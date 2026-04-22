# Cold Source SDK

The foundational source code for the **Cold Source** development environment. This SDK is a modernized branch of the Source Engine, providing the framework for advanced community projects.

Currently contains updated game code for:
*   **Half-Life 2**
*   **Half-Life 2: Deathmatch**

---

## 🛠 Build Instructions

### Windows
**Requirements:**
*   Source SDK 2013 Multiplayer (installed via Steam)
*   **Visual Studio 2022** with "Desktop development with C++"
*   **Python 3.13** or later

**Setup:**
1.  Navigate to the `src` directory.
2.  Run `createallprojects.bat` to generate `everything.sln`.
3.  Open the solution in Visual Studio and use **Build > Build Solution**.

### Linux
**Requirements:**
*   Source SDK 2013 Multiplayer (installed via Steam)
*   **Podman** (for containerized builds)

**Setup:**
1.  Navigate to the `src` directory.
2.  Run `./buildallprojects` to compile against the Steam Runtime.

---

## 🗺 Roadmap & Future Plans

We are actively working on modernizing the engine core. Our current development focus includes:

### 🟢 Core Architecture
- [ ] **x64 Architecture:** Full migration to 64-bit for improved memory addressing and performance.
- [ ] **Jolt Physics Integration:** Replacing the legacy Havok physics engine with **Jolt Physics** for better multithreading and stability.

### 🟡 Graphics & UI
- [ ] **Panorama UI:** Implementing the Panorama framework to replace legacy VGUI for modern, web-based UI development.
- [ ] **Shader Overhaul:** Significant improvements to the rendering pipeline and shader system.

### 🔵 Scripting & Extensibility
- [ ] **Lua Integration:** Embedding Lua support for flexible, high-level game logic and modding.
- [ ] **Modern Tooling:** Ensuring full compatibility with Visual Studio 2022 and modern C++ standards.

---

## 📜 License & Distribution

This project is licensed under the same terms as the original Valve Source SDK. When distributing your mod:
*   Ensure compliance with the [Steam Distribution Guidelines](https://steamgames.com).
*   Mods distributed on Steam **must** be built against the Steam Runtime.

---
*Maintained by the Cold Source Team.*

