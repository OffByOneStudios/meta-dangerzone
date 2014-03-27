# This includes all configs and options relevent to the game engine.
from madz.system_config import *
import os

folder = os.path.dirname(__file__)

config = SystemConfig([
  #  LanguageConfig("c", [
 #       OptionHeaderSearchPaths([os.path.join(folder, "wrapper_includes", "c")]),
 #   ]),

    LanguageConfig("cpp", [
        OptionHeaderSearchPaths([os.path.join(folder, "wrapper_includes", "cpp")]),
    ]),

 #   LanguageConfig("python", [
 #       OptionHeaderSearchPaths([os.path.join(folder, "wrapper_includes", "python")]),
 #  ]),

    LibraryConfig("openal", [
        OptionImposter(lambda: {
            "windows": OptionLibraryStaticLinks(["OpenAL32"]),
            "unix": OptionLibraryStaticLinks([]),
            }[config_source.get(OptionPlatformOperatingSystem).replace("osx", "unix")]),
    ]),
    
    LibraryConfig("opengl-core", [
        OptionImposter(lambda: {
            "windows": OptionLibraryStaticLinks(["opengl32", "glu32"]),
            "unix": OptionLibraryStaticLinks(["GL", "GLU"]),
            }[config_source.get(OptionPlatformOperatingSystem).replace("osx", "unix")]),
    ]),
    
    LibraryConfig("libpng", [
        OptionImposter(lambda: {
            "windows": OptionLibraryStaticLinks(["libpng16"]),
            "unix": OptionLibraryStaticLinks(["png"]),
            }[config_source.get(OptionPlatformOperatingSystem).replace("osx", "unix")]),
    ]),
    
    LibraryConfig("windows", [
        OptionLibraryStaticLinks(["Kernel32", "user32", "gdi32"]),
    ]),

    LibraryConfig("x11", [
        OptionLibraryStaticLinks(["X11"]),
    ]),

    LibraryConfig("x11-input", [
        OptionLibraryStaticLinks(["Xi"]),
    ]),

    LibraryConfig("pthread", [
        OptionLibraryStaticLinks(["pthread"])
    ]),

    LibraryConfig("boost", [
        OptionImposter(lambda: {
            "windows": OptionLibraryStaticLinks([]),
            "unix": OptionLibraryStaticLinks(["boost_system", "boost_filesystem"]),
            }[config_source.get(OptionPlatformOperatingSystem).replace("osx", "unix")]),
        
    ]),

    LibraryConfig("opengl-glew", [
        OptionImposter(lambda: {
            "windows": OptionLibraryStaticLinks(["glew32"]),
            "unix": OptionLibraryStaticLinks(["GLEW"]),
            }[config_source.get(OptionPlatformOperatingSystem).replace("osx", "unix")]),
    ]),
])
