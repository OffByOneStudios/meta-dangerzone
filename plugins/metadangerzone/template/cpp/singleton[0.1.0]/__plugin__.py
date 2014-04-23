from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.singleton",
    language="cpp",
	executable=False,
    documentation="""
	Opaque Singleton Object C++ Plugin Template.
    This plugin provides an object of which at most one exists.
    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

