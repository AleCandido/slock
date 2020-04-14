/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2e3440",     /* after initialization */
	[INPUT] =  "#5e81ac",   /* during input */
	[FAILED] = "#81a1c1",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#e5e9f0";

/* text size (must be a valid size) */
static const char * font_name = 
"-misc-fira mono medium-medium-r-normal--0-0-0-0-m-0-koi8-uni"
;
