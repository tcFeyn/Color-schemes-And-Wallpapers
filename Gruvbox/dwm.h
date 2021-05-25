static const char norm_fg[] = "#ebdbb2";
static const char norm_bg[] = "#282828";
static const char norm_border[] = "#665c54";

static const char sel_fg[] = "#ebdbb2";
static const char sel_bg[] = "#98971a";
static const char sel_border[] = "#ebdbb2";

static const char hid_bg[] = "#fabd2f";
static const char hid_sel[] = "#8ec07c";

static const char *colors[][3]      = {
    /*               fg           bg         border     */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_bg    }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeHid] =  { hid_bg,      norm_bg,   hid_sel    },
};
