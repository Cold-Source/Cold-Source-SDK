# Cold Source SDK
The foundational source code for the **Cold Source** development environment. This SDK is a modernized branch of the Source Engine, providing the framework for advanced community projects.
### This branch of Cold Source has GamePadUI✅
### [Files GamepadUI](https://github.com/Cold-Source/Cold-Source-Game/tree/gamepadui)
Currently contains updated game code for:
*   **Source SP**

---

## 🛠 Build Instructions

### Windows
**Requirements:**
*   **Source Singlplayer Game** or **Source SDK 2013 Singlplayer**
*   **Visual Studio 2013** with "Desktop development with C++"
*   **Python 3.13** or later

**Setup:**
1.  Navigate to the `src` directory.
2.  Run `createallprojects.bat` to generate `everything.sln`.
3.  Open the solution in Visual Studio and use **Build > Build Solution**.

### Linux
**Requirements:**
*   **Source Singlplayer Game** or **Source SDK 2013 Singlplayer**
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
- [ ] **Panorama UI** — `IN PROGRESS (50%)`
  > Implementing the Panorama framework to replace legacy VGUI components.
- [ ] **Shader Overhaul:** Significant improvements to the rendering pipeline and shader system.

### 🔵 Scripting & Extensibility
- [x] **Lua Integration:** — [branches with Lua](https://github.com/Cold-Source/Cold-Source-SDK/tree/Lua)
  > Embedding Lua support for flexible, high-level game logic and modding.
- [ ] **Modern Tooling:** Ensuring full compatibility with Visual Studio 2022 and modern C++ standards.

---

## 📜 License & Distribution

This project is licensed under the same terms as the original Valve Source SDK. When distributing your mod:
*   Ensure compliance with the [Steam Distribution Guidelines](https://steamgames.com).
*   Mods distributed on Steam **must** be built against the Steam Runtime.

---
*Maintained by the Cold Source Team.*
