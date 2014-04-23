from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.cpp.data_type",
    language="cpp",
	executable=False,
    documentation="""
	C++ Plugin Template for a DataType, a pass by value structure without attached methods.

    """,
	depends=[],
    description=MdlFileLoader("plugin.mdl"),
)

