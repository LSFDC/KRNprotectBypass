# KRNprotectBypass
# By Ayana

KRNprotectBypass is a DLL project designed to bypass the Nprotect anti-cheat system for the game **Lost Saga**. This tool utilizes function detouring and process manipulation techniques to circumvent anti-cheat mechanisms, enabling custom modifications or reverse engineering workflows for educational and research purposes.

> **Disclaimer**: This project is intended for educational and research purposes only. The use of this tool may violate the terms of service of Lost Saga or other software. Use at your own risk.

---

## Features

- **Bypass Nprotect**: Terminates the `GameGuard.des` process and bypasses key anti-cheat functions.
- **Function Detouring**: Redirects specific function calls within the game to custom implementations.
- **Modular Framework**: Built using `CTools` and `CFramework` for extensibility.

---

## How It Works

1. **Terminate GameGuard**: The tool monitors and terminates the `GameGuard.des` process to disable Nprotect.
2. **Hook Critical Functions**: Custom detour logic is applied to bypass anti-cheat verifications in the game.
3. **Run in a Background Thread**: The bypass logic runs in a separate thread, ensuring stability and minimal impact on the main game process.

---

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/KRNprotectBypass.git
   ```

2. Open the project in a C++ IDE (e.g., Visual Studio).

3. Build the project to generate the DLL.

4. Inject the DLL into the Lost Saga game process using your preferred DLL injector.

---

## Usage

1. Start the Lost Saga game client.
2. Use a DLL injector to inject `KRNprotectBypass.dll` into the game process.
3. The bypass will automatically:
   - Terminate the `GameGuard.des` process.
   - Hook and detour relevant anti-cheat functions.

---

## Prerequisites

- **Windows OS**: The project is compatible with Windows operating systems.
- **Development Tools**: Requires Visual Studio or a similar C++ IDE to build.
- **DLL Injector**: A DLL injector is required to load the DLL into the game process.

---

## Code Overview

- **`CFramework`**: Provides the functionality for detouring functions.
- **`CTools`**: Contains utility functions like terminating processes by name.
- **Offsets**: Defined in `Offset.h`, containing critical memory addresses for hooking.

---

## Disclaimer

This project is for **educational purposes only**. Using this tool to bypass anti-cheat mechanisms in online games may result in:

- Account suspension or banning.
- Legal consequences, depending on the jurisdiction.

By using this tool, you agree to take full responsibility for any consequences that arise.

---

## Contributing

Contributions are welcome! Feel free to submit issues or pull requests to improve the project.

---

## License

This project is licensed under the [MIT License](LICENSE).
