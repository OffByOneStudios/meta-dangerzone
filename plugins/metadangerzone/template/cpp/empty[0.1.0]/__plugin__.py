from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.empty",
    language="cpp",
	executable=False,
    documentation="""
	Empty C++ Plugin Template

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

