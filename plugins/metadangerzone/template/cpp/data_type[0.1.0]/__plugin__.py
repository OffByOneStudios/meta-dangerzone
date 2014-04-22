from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.data_type",
    language="cpp",
	executable=False,
    documentation="""
	Empty C++ Plugin Template

    """,
	depends=[
          "metadangerzone.metaplugins.mdl"
          ],
    description=MdlFileLoader("plugin.mdl"),
)

