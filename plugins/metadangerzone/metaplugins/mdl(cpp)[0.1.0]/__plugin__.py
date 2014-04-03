from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.metaplugins.mdl",
    language="cpp",
	executable=False,
    documentation="""
	Provides functionality for the creation and management of plugins.

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

