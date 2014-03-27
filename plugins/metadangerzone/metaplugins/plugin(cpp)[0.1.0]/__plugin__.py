from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.metaplugins.plugin",

    language="cpp",
	
    documentation="""
	Provides functionality for the creation and management of plugins.

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

