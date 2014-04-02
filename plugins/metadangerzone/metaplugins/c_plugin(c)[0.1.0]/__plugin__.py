from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.metaplugins.c_plugin",
    language="c",
	executable=True,
    documentation="""
	Provides functionality for the creation and management of plugins.

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),

    
)

