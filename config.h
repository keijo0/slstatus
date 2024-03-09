const unsigned int interval = 500;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048

static const struct arg args[] = {
//	{ run_command, "%s  ", "playerctl metadata --format '{{ artist }} - {{ album }} - {{ title }}'", },
	//{ netspeed_rx, " : %sB/s  ",  "wlp3s0" },
	//{ netspeed_tx, ": %sB/s  ",  "wlp3s0" },
	//{ wifi_perc, " %s  ", "wlp3s0" },
	{ run_command, "vol%4s ", "amixer sget Master | awk -F\"[][]\" '/%/ { print $2 }' | head -n1" },
	{ cpu_perc, " cpu %s%% ", NULL	},
	{ cpu_freq, " %sHz  ", NULL },
//	{ temp, "%s\u00b0C ", "/sys/class/thermal/thermal_zone0/temp" },
//	{ run_command, "(%s)  ", "threads" }, 
	{ ram_used, " ram %sB  ", NULL	},
//	{ disk_used, " root %sB  ", "/" },
//	{ run_command, " pkgs %s  ", "qlist -I | wc -l" },
	{ uptime,   " uptime %s  ", NULL },
	{ kernel_release, " %s  ", NULL },
	{ keymap, " %s  ", NULL },
	//{ backlight_perc, " %s, ", 	"intel_backlight" },
	//{ battery_perc, " %s%%, ", "BAT1"},
	//{ battery_perc, " %s%%, ", "BAT0"},
	//{ battery_remaining, "%s  ", "BAT0"},
	//{ load_avg,	"%s  ", "NULL", },
	{ io_perc,	"%s%%  ", "NULL", },
	{ datetime, 	"%s", "%b %d %a %T" },
};
