from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.metaplugins.py_plugin",
    language="python",
	executable=True,
    documentation="""
	Provides functionality for the creation and management of plugins.

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),

    
)

