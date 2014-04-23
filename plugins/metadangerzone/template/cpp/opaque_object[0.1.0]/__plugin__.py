from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.opaque_object",
    language="cpp",
	executable=False,
    documentation="""
	Opaque Object C++ Plugin Template.
    This plugin provides an object talked about only by reference. Methods on opaque objects are enumerated procedurally
    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

