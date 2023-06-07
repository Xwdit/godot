#include "register_types.h"

#include "spout_gd.h"

void initialize_spout_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SERVERS) {
		GDREGISTER_CLASS(Spout);
	}
}

void uninitialize_spout_module(ModuleInitializationLevel p_level) {
}
