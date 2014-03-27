#!/usr/bin/python3

#### A hack to bypass installing madz
import os, sys, imp
sys.path.append(os.path.abspath("../massive-dangerzone/"))


#### Import start_script symbols
from madz.start_script import *


#### Get the game directory:
game_directory = os.path.join(os.getcwd(), "plugins")


#### Config

# Setup logging first so we can catch config errors.
logging.bind_to_standard_out()
logging.bind_to_file(os.path.join(os.path.dirname(__file__), "./engine.log"))

# Load the user config.
config.bind_user_config("CRAFT_ENGINE_USER_CONFIG")

# Switch logging over to the config information it now has avalible from the
# user config.
logging.use_config()

# Load the system config.
engine_config_path = os.path.join(os.getcwd(), "..", "craft-engine", "system_config.py")
with open(engine_config_path) as module_file:
	engine_config = imp.load_module("engine_config", module_file, engine_config_path, ('.py', 'r', imp.PY_SOURCE))
our_system_config = engine_config.config

# Load the game's system config
game_config_path = os.path.join(os.getcwd(), "game_config.py")
with open(game_config_path) as module_file:
	game_config = imp.load_module("game_config", module_file, game_config_path, ('.py', 'r', imp.PY_SOURCE))
our_system_config = our_system_config.merge(game_config.config)

#### Now we intialize the plugin system.

# Make the system
system = core.make_system(our_system_config)

# Engine plugin directory. 
#system.add_directory(core.make_directory(os.path.join(os.getcwd(), "..", "craft-engine", "engine_plugins")))
# Game plugin directory.
system.add_directory(core.make_directory(game_directory))

system.index()

#  Run entire system
helper.execute_system(system, sys.argv)
