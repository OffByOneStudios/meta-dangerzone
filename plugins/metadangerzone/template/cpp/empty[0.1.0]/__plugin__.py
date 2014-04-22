from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.empty",
    language="cpp",
	executable=True,
    documentation="""
	Empty C++ Plugin Template

    """,
	depends=[
          "metadangerzone.metaplugins.mdl"
          ],
    description=MdlFileLoader("plugin.mdl"),
)

