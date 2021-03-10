/* user and group to drop privileges to */
static const char *user  = "iota";
static const char *group = "iota";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1f1f2f", // after initialization
	[INPUT] =  "#9f7f4f", // during input
	[FAILED] = "#9f4f5f", // wrong password
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
