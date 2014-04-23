from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.python.empty",
    implementation="interface",

    language="python",

    depends=[],
    imports=[],
    
    description=MdlFileLoader("plugin.mdl"),
)