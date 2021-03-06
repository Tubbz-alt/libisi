#include "opcodes/mtc.h"
#include "opcodes/network.h"

void print_package(const gchar *name, const unsigned char *msg, size_t len);
void print_log(const gchar *log_domain, GLogLevelFlags log_level, const gchar *message, gpointer user_data);
const char *pn_resource_name(int value);
const char *net_status_name(enum net_reg_status value);
const char *net_subblock_name(enum net_subblock value);
const char *net_isi_cause_name(enum net_isi_cause value);
const char *mtc_modem_state_name(enum mtc_modem_state value);

#ifdef __ISIMODEM_INFO_H
const char *isi_device_info_subblock_name(enum info_subblock value);
const char *isi_device_info_isi_cause_name(enum info_isi_cause value);
#endif
