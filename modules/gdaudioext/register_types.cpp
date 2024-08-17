#include "register_types.h"
#include "core/object/class_db.h"
#include "audio_stream_ext.hpp"

void initialize_gdaudioext_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_CLASS(AudioStreamExt);
	GDREGISTER_CLASS(AudioStreamPlaybackExt);
}

void uninitialize_gdaudioext_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}