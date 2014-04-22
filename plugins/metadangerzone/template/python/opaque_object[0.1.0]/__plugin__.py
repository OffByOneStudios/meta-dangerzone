from madz.plugin_stub import *

plugin = Plugin(
    name="metadangerzone.template.python.opaque_object",
    language="python",
	executable=False,
    documentation="""
	Opaque Object Python Plugin Template.
    This plugin provides an object talked about only by reference. Methods on opaque objects are enumerated procedurally
    """,
	depends=[
          "metadangerzone.metaplugins.mdl"
          ],
    description=MdlFileLoader("plugin.mdl"),
)

