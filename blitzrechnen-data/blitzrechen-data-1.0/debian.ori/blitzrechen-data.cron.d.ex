#
# Regular cron jobs for the blitzrechen-data package
#
0 4	* * *	root	[ -x /usr/bin/blitzrechen-data_maintenance ] && /usr/bin/blitzrechen-data_maintenance
