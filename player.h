/*
 * Copyright (c) 2015 Johannes Postma <jgmpostma@gmail.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
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
#ifndef PLAYER_H
#define PLAYER_H

enum player_states {
	STOPPED,
	PLAYING,
	PAUSED
};

__BEGIN_DECLS

void	player_init(void);
void	player_exit(void);
void	player_setdebugmode(void);

int	player_getduration(void);	/* duration in seconds */
int	player_getposition(void);	/* position in seconds */
int	player_getstatus(void);

int	player_play(const char *url);
void	player_stop(void);
void	player_togglepause(void);

__END_DECLS

#endif
