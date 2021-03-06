// See the file "COPYING" in the main distribution directory for copyright.

#ifndef BRO_PLUGIN_JOHANNA_ROCA
#define BRO_PLUGIN_JOHANNA_ROCA

#include <plugin/Plugin.h>

namespace plugin {
namespace Johanna_ROCA {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	plugin::Configuration Configure() override;
	void InitPreScript() override;
};

extern Plugin plugin;

}
}

#endif
