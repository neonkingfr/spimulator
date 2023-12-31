/* SPIM S20 MIPS simulator.
   X interface to SPIM

   Copyright (c) 1990-2010, James R. Larus.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

   Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

   Neither the name of the James R. Larus nor the names of its contributors may
   be used to endorse or promote products derived from this software without
   specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
*/

#define IO_BUFFSIZE 10000

#define TEXTHEIGHT \
  (text_font->max_bounds.ascent + text_font->max_bounds.descent)

#define TEXTWIDTH (text_font->max_bounds.width)

/* Exported functions (also see spim.h): */

void clear_console_display();
void execute_program(mem_addr pc, int steps, bool display, bool cont_bkpt);
void popup_console(Widget w, XtPointer client_data, XtPointer call_data);
void read_file(char *name);
void redisplay_data();
void redisplay_text();
void start_program(mem_addr addr);

/* Exported variables: */

extern XtAppContext app_con;
extern Widget message, console;
extern XtAppContext app_context;
extern XFontStruct *text_font;
extern Dimension button_width;
extern int load_exception_handler;
extern char *load_file;
extern Pixmap mark;
