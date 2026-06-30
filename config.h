const unsigned int interval = 500;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048

static const struct arg args[] = {
//	{ run_command, "%s  | ", "playerctl metadata --format '{{ artist }} - {{ title }}'", },
//	{ run_command, "U: %s  | ", "who | wc -l ", },
//	{ run_command, "Idler %s  | ", "cat /m/.cache/steamidler_status", },
	{ run_command, "Srv %s  | ", "cat /m/.cache/jellyfin_status", },
//	{ run_command, "Vpn %s  | ", "cat /m/.cache/mullvad_status", },
	{ run_command, "vol%4s ", "pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}' | head -n1" },
	{ run_command, "mic%4s ", "pactl get-source-volume @DEFAULT_SOURCE@ | awk '{print $5}' | head -n1" },
	{ cpu_perc, " cpu %s%%", NULL	},
	{ cpu_freq, " @%sHz ", NULL },
	{ run_command, "(%s) ", "threads" }, 
//	{ temp, "%s\u00b0C ", "/sys/class/thermal/thermal_zone0/temp" },
//	{ temp, " gpu %s\u00b0C ", "/sys/class/hwmon/hwmon3/temp1_input" },
	{ ram_used, " ram %sB  ", NULL	},
//	{ disk_used, " root %sB  ", "/" },
	{ uptime,   " %s  ", NULL },
	{ kernel_release, " %s  ", NULL },
//	{ run_command, " pkgs %s  ", "qlist -I | wc -l" },
	{ keymap, " %s  ", NULL },
//	{ backlight_perc, " %s, ", 	"intel_backlight" },
//	{ battery_perc, " %s%%, ", "BAT1"},
//	{ battery_perc, " %s%%, ", "BAT0"},
//	{ battery_remaining, "%s  ", "BAT0"},
	//{ load_avg,	"%s  ", "NULL", },
	//{ io_perc,	" %s%%  ", "NULL", },
	{ datetime, 	"%s", "%a %e/%m/%y %T" },
};
