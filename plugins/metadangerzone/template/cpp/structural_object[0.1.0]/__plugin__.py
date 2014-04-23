from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.structural_object",
    language="cpp",
	executable=False,
    documentation="""
	Structural Object C++ Plugin Template.
    This plugin provides an object talked about by reference or by value. Methods on structural objects are enumerated on the structure.
    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

