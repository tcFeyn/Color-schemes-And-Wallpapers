static const char norm_fg[] = "#c8ccd4";
static const char norm_bg[] = "#282c34";
static const char norm_border[] = "#545862";

static const char sel_fg[] = "#c8ccd4";
static const char sel_bg[] = "#61afef";
static const char sel_border[] = "#c8ccd4";

static const char hid_bg[] = "#e5c07b";
static const char hid_sel[] = "#98c379";

static const char *colors[][3]      = {
    /*               fg           bg         border     */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_bg    }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeHid] =  { hid_bg,      norm_bg,   hid_sel    },
};
