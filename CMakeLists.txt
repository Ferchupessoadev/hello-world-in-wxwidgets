cmake_minimum_required(VERSION 3.25.1)
project(HolaMundoWxWidgets)

# Encuentra wxWidgets
find_package(wxWidgets REQUIRED COMPONENTS core base)

# Incluye las cabeceras de wxWidgets
include(${wxWidgets_USE_FILE})

# Agrega tu archivo fuente
add_executable(hola_mundo_wxwidgets src/main.cpp)

# Enlaza la aplicación con wxWidgets
target_link_libraries(hola_mundo_wxwidgets ${wxWidgets_LIBRARIES})
