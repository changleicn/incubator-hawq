/*-------------------------------------------------------------------------
 *
 * ps_status.h
 *
 * Declarations for backend/utils/misc/ps_status.c
 *
 * $PostgreSQL: pgsql/src/include/utils/ps_status.h,v 1.27 2006/06/27 22:16:44 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */

#ifndef PS_STATUS_H
#define PS_STATUS_H

extern bool update_process_title;

extern char **save_ps_display_args(int argc, char **argv);

extern void init_ps_display(const char *username, const char *dbname,
				const char *host_info, const char *initial_str);

extern void set_ps_display(const char *activity, bool force);

extern const char *get_ps_display(int *displen);

/* CDB: Get the "username" string saved by init_ps_display().  */
extern const char *get_ps_display_username(void);
extern const char *get_real_act_ps_display(int *displen);

#endif   /* PS_STATUS_H */