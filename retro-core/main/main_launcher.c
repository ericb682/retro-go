#include "shared.h"

void launcher_main(void)
{
    // app->configNs = "launcher";
    // app->isLauncher = true;
    // Currently a separate app, see launcher in project's root
    rg_system_switch_app(RG_APP_LAUNCHER, RG_APP_LAUNCHER, 0, 0);
}
