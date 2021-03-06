/*
 * Copyright (C) 2010, Sebastian Reichel <sre@ring0.de>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __ISIMODEM_GPS_H
#define __ISIMODEM_GPS_H

#ifdef __cplusplus
extern "C" {
#endif

#define PN_GPS					0x54
#define GPS_TIMEOUT				5

enum gps_message_id {
	GPS_STATUS_IND	= 0x7d,
	GPS_POWER_REQ	= 0x90,
	GPS_POWER_RESP	= 0x91,
	GPS_DATA_IND	= 0x92
};

enum gps_data_subpkg_id {
	GPS_DATA_POSITION	= 0x02,
	GPS_TIME_DATE		= 0x03,
	GPS_MOVEMENT		= 0x04,
	GPS_SATELLITE_INFO	= 0x05,
	GPS_CELL_INFO_GSM	= 0x07,
	GPS_CELL_INFO_WCDMA	= 0x08
};

enum gps_status {
	GPS_DISABLED		= 0x00,
	GPS_NOT_LOCKED		= 0x01,
	GPS_LOCKED			= 0x02
};

#ifdef __cplusplus
};
#endif

#endif /* !__ISIMODEM_GPS_H */
