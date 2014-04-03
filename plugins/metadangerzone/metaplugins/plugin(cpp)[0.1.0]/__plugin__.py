from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.metaplugins.plugin_stub",
    language="cpp",
	executable=True,
    documentation="""
	Provides functionality for the creation and management of plugins.

    """,
	depends=[
          "metadangerzone.metaplugins.mdl"
          ],
    description=MdlFileLoader("plugin.mdl"),
)

