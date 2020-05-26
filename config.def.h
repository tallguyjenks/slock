/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1d2021",     /* after initialization */
	[INPUT] =  "#458588",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
	[CAPS] = "#fb4934",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "For in much wisdom is much grief: and he that increaseth knowledge increaseth sorrow.\n\n\t- Solomon";


/* text color */
static const char * text_color = "#ebdbb2";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
